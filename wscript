#! /usr/bin/env python

packages = "compiler_c compiler_cxx waf_unit_test gccdeps why local_rpath"

src_extensions = ("c", "C", "cc", "cpp", "CPP", "c++", "cp", "cxx", "proto", "dasc")

def getsrc(ctx, d):
    from os.path import join as pjoin
    r = []
    for h in src_extensions:
        r.extend(ctx.path.ant_glob(pjoin(d, "**."+h)))
    return r

def make_programs(bld, d, **kwargs):
    from os import listdir
    from os.path import exists, basename, isdir, join as pjoin
    if not exists(d):
        return
    for app in listdir(d):
        if any(app.endswith(ext) for ext in src_extensions):
            bld.program(source=pjoin(d, app), target=app.split(".")[0], **kwargs)
        elif isdir(pjoin(d, app)):
            kwargs = dict(kwargs)
            kwargs["includes"] = " ".join((kwargs.get("includes", ""), pjoin(d,app)))
            bld.program(source=getsrc(bld, pjoin(d, app)), target=app, **kwargs)

def go(ctx):
    from waflib.Options import commands, options
    commands += ["configure", "build"]

def options(opt):
    opt.load(packages)

def configure(conf):
    import os
    if not os.path.exists("src/lib/zerocc/test.cc"):
        if os.system("git submodule update --init") != 0:
            conf.fatal("Could not initialize necessary submodules!")
    conf.load(packages)
    conf.load("lua protoc dynasm", tooldir="waf-tools")
    conf.get_cc_version(conf.env.CXX)
    if conf.env.CXX == "g++" and conf.env.CC_VERSION < ("4","6"):
        conf.fatal("We require at least gcc 4.6 at this time.")
    conf.env.append_value("CXXFLAGS", ["-std=c++0x", "-ggdb"])
    conf.env.append_value("LINKFLAGS", ["-Wl,--no-as-needed"])
    #conf.env.append_value("RPATH", [conf.env.LIBDIR])

    conf.check_cfg(package="protobuf", uselib_store="protobuf", args="--libs --cflags", mandatory=True)
    conf.check_cfg(path="root-config", package="", uselib_store="root", args='--libs --cflags', mandatory=False)
    conf.check_cxx(lib="pcre", uselib_store="pcre", define_name="PCRE", mandatory=False)

def build(bld):
    bld.load(packages + " print_commands")
    bld.load("lua protoc dynasm", tooldir="waf-tools")

    bld.stlib(source=getsrc(bld, "src/lib/zerocc"),
            target="zerocc",
            use="protobuf", 
            includes="src/lib/zerocc")

    bld.shlib(source=getsrc(bld, "src/lib/drillbit"), 
            target="drillbit", 
            use="protobuf zerocc",
            includes="src/lib/drillbit src/lib")

    bld.shlib(source=getsrc(bld, "src/lib/drillbit_root"),
            target="drillbit_root",
            use="protobuf root drillbit zerocc", 
            includes="src/lib/drillbit src/lib/drillbit_root src/lib")
    
    make_programs(bld, "src/apps", 
            use="protobuf drillbit",
            includes="src/lib/drillbit")

    make_programs(bld, "src/apps_root", 
            use="protobuf root drillbit drillbit_root",
            includes="src/lib/drillbit src/lib/drillbit_root")

    make_programs(bld, "src/tests",
            features="test",
            use="protobuf root drillbit drillbit_root",
            includes="src/lib/drillbit src/lib/drillbit_root")

    from waflib.Tools import waf_unit_test
    bld.add_post_fun(waf_unit_test.summary)

