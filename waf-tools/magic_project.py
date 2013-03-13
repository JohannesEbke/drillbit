from waflib.Configure import conf

from os import listdir, system
from os.path import dirname, isdir, join as pjoin

ext_headers = ["h", "hpp"]
ext_cpp = ["C", "cc", "cpp", "CPP", "c++", "cp", "cxx"]
ext_c = ["c"]

headers = {
        "root" : [l.strip() for l in file("waf-tools/headers_root.txt").readlines()],
        "protobuf" : [l.strip() for l in file("waf-tools/headers_protobuf.txt").readlines()]
}

def glob_single(ctx, f, headers):
    r = []
    for h in headers:
        r.extend(ctx.path.ant_glob(f+"."+h))
    return r

def glob_for(ctx, d, headers):
    r = []
    for h in headers:
        r.extend(ctx.path.ant_glob(pjoin(d, "*."+h)))
    return r

def get_program_files(ctx, d):
    c = glob_for(ctx, d, ext_c)
    cpp = glob_for(ctx, d, ext_cpp)
    h = glob_for(ctx, d, ext_headers)
    ## extend with more languages here
    return (c, cpp, h)

def get_library_files(ctx):
    c, cpp, h = get_program_files(ctx, ctx.env.MAGIC_SRC_PATH)
    ph = glob_for(ctx, ctx.env.MAGIC_INC_PATH, ext_headers) # public headers
    return (c, cpp, h, ph)

def get_app_files(ctx, p):
    apps = {}
    c_apps, cpp_apps, _ = get_program_files(ctx, p)
    for x in c_apps:
        apps[str(x).split(".")[0]] = ([x], [], [])
    for x in cpp_apps:
        apps[str(x).split(".")[0]] = ([], [x], [])
    for f in listdir(p):
        if isdir(pjoin(p, f)):
            apps[f] = get_program_files(pjoin(p, f))
    return apps

def get_includes(nod):
    includes = [l for l in nod.read().split("\n") if l.replace(" ","").startswith("#include<")]
    return [i.split("<")[1].split(">")[0].strip() for i in includes]

def include_to_lib(f):
    for k, hs in headers.iteritems():
        if f in hs:
            return k
    return None

def get_deplibs(*args):
    files = reduce(list.__add__, args, [])
    includes = reduce(list.__add__, (get_includes(f) for f in files), [])
    libs = set(x for x in map(include_to_lib, includes) if not x is None)
    return libs

@conf
def magic_project(conf, name=None):
    conf.load('compiler_c compiler_cxx')
    if name is None:
        name = dirname(conf.path.abspath())
    conf.env.MAGIC_PROJECT_NAME = name
    conf.env.MAGIC_SRC_PATH = s = "src"
    conf.env.MAGIC_APP_PATH = a = pjoin(s, "apps")
    conf.env.MAGIC_INC_PATH = i = pjoin(s, name)
    conf.env.MAGIC_TST_PATH = t = pjoin(s, "tests")

    # make the directories so the user knows he can use them
    system("mkdir -p %s %s %s %s" % (s, a, i, t))

    c, cpp, h, ph = get_library_files(conf)
    apps = get_app_files(conf, a)
    tests = get_app_files(conf, t)

    ext_libs = get_deplibs(ph)
    libs = get_deplibs(c,cpp,h,ph)

    base_libs = ext_libs.union(libs)
    conf.env.MAGIC_BASE_LIBS = base_libs

    build_apps = {}
    build_tests = {}
    for app, fls in apps.iteritems():
        build_apps[app] = get_deplibs(*fls)
    for app, fls in tests.iteritems():
        build_tests[app] = get_deplibs(*fls)
    conf.env.MAGIC_APPS = build_apps
    conf.env.MAGIC_TESTS = build_tests
    conf.env.HAVE_LIBRARY = {}

@conf
def magic_check_library(conf, package, mandatory=True, **kwargs):
    # special casing for ROOT
    if package == "root":
        res = conf.check_cfg(path="root-config", package="", 
            uselib_store=package, args='--libs --cflags', mandatory=mandatory,
            **kwargs)
    else:
        res = conf.check_cfg(package=package, uselib_store=package, 
            args="--libs --cflags", mandatory=mandatory,
            **kwargs)
    conf.env.HAVE_LIBRARY[package] = res
    return res

def build(bld):
    bld(features="cxx cxxshlib", 
        source=glob_for(bld, "src", ext_cpp),
        includes=bld.env.MAGIC_SRC_PATH,
        target=bld.env.MAGIC_PROJECT_NAME,
        use=bld.env.MAGIC_BASE_LIBS)
    
    for app, useset in bld.env.MAGIC_APPS.iteritems():
        base = pjoin("src", "apps", app)
        use = list(bld.env.MAGIC_BASE_LIBS.union(useset))
        if isdir(base):
            source = glob_for(bld, base, ext_cpp)
        else:
            source = glob_single(bld, base, ext_cpp)
        if not source:
            print "Application ", app, " has been removed since bldiguration."
            continue
        bld(features="cxx cxxprogram", source=source, includes=["src/", base+"/"],
                target=app, use=use)

    for app, use in bld.env.MAGIC_TESTS.iteritems():
        base = pjoin("src", "tests", app)
        use = list(bld.env.MAGIC_BASE_LIBS.union(useset))
        if isdir(base):
            source = glob_for(bld, base, ext_cpp)
        else:
            source = glob_single(bld, base, ext_cpp)
        if not source:
            print "Test ", app, " has been removed since bldiguration."
            continue
        bld(features="cxx cxxprogram testt", source=source, includes=["src/", base+"/"],
                target=app, use=use)
    
    pubheaders = bld.path.ant_glob(pjoin("src", bld.env.MAGIC_PROJECT_NAME, "**.h"))
    
    cwd = bld.path.find_or_declare(pjoin("src", bld.env.MAGIC_PROJECT_NAME)).get_src()
    bld.install_files(pjoin('${PREFIX}',"include", bld.env.MAGIC_PROJECT_NAME), pubheaders, cwd=cwd,
        relative_trick=True)

