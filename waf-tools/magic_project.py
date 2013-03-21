from waflib.Configure import conf
from waflib.Build import build

from os import basename, listdir, system
from os.path import basename, isdir, join as pjoin

ext_headers = ["h", "hpp"]
ext_cpp = ["C", "cc", "cpp", "CPP", "c++", "cp", "cxx", "proto"]
ext_c = ["c"]

def glob_single(ctx, f, headers):
    r = []
    for h in headers:
        r.extend(ctx.path.ant_glob(f+"."+h))
    return r

def glob_for(ctx, d, headers):
    r = []
    for h in headers:
        r.extend(ctx.path.ant_glob(pjoin(d, "**."+h)))
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

@conf
def magic_check_library(conf, package, mandatory=True, **kwargs):
    # special casing for ROOT
    if package == "root":
        return conf.check_cfg(path="root-config", package="", 
            uselib_store=package.upper(), args='--libs --cflags', 
            mandatory=mandatory, **kwargs)
    else:
        return conf.check_cfg(package=package, uselib_store=package.upper(),
            args="--libs --cflags", mandatory=mandatory, **kwargs)

@conf
def magic_check_lib(conf, lib, mandatory=True, **kwargs):
    conf.define("HAVE_"+lib.upper(), 0)
    headers[lib] = lib + ".h"
    res = conf.check(features='cxx cxxprogram', lib=lib,
        uselib_store=lib, mandatory=mandatory, **kwargs)
    conf.define("HAVE_"+lib.upper(), 1)
    return res 

@build
def magic_library(bld, dname, static=False, public_inc=None, name=None, **kwargs):
    if name is None:
        name = basename(dname)
    bld.parse_flags("-l%s -I%s" % (name, dname), name.upper(), conf.env)
    kwargs.setdefault("sources", []).extend(glob_for(bld, dname, ext_cpp))
    if static:
        kwargs.setdefault("features", "cxx cxxstlib")
    else:
        kwargs.setdefault("features", "cxx cxxshlib")
    kwargs.setdefault("includes", dname);
    kwargs.setdefault("target", name);
    bld(**kwargs)

    # install public header files
    if public_inc:
        pubheaders = bld.path.ant_glob(pjoin(dname, pubinc, "**.h"))
    cwd = bld.path.find_or_declare(dname).get_src()
    bld.install_files(pjoin('${PREFIX}',"include", pubinc), pubheaders,
        cwd=cwd, relative_trick=True)

@build
def magic_executables(bld, dname, features, **kwargs):
    for app, use in get_app_files(bld, dname).iteritems():
        base = pjoin(dname, app)
        if isdir(base):
            source = glob_for(bld, base, ext_cpp)
        else:
            source = glob_single(bld, base, ext_cpp)
        kw = dict(kwargs)
        kw.setdefault("includes", []).append(base)
        bld(features=features, source=source, target=app, **kw)

@build
def magic_apps(bld, dname, **kwargs):
    return bld.magic_executables(bld, dname, "cxx cxxprogram")

@build
def magic_tests(bld, dname, **kwargs):
    return bld.magic_executables(bld, dname, "cxx cxxprogram test")

