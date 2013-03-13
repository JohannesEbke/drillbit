#! /usr/bin/env python

packages = "compiler_c compiler_cxx waf_unit_test gccdeps print_commands protoc why local_rpath"

def options(opt):
    opt.load(packages)

def configure(conf):
    conf.load(packages)
    conf.load("magic_project", tooldir="waf-tools")
    conf.env.append_value("CXXFLAGS", ["-std=c++0x", "-ggdb"])
    conf.env.append_value("LINKFLAGS", ["-Wl,--no-as-needed"])
    conf.env.append_value("RPATH", [conf.env.LIBDIR])
    conf.magic_project()
    conf.magic_check_library("root")
    conf.magic_check_library("protobuf")

def build(bld):
    bld.load(packages)
    bld.load("magic_project", tooldir="waf-tools")
    from waflib.Tools import waf_unit_test
    bld.add_post_fun(waf_unit_test.summary)

