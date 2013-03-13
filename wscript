#! /usr/bin/env python

def options(opt):
    opt.load('compiler_c compiler_cxx python')

def configure(conf):
    conf.load("magic_project", tooldir="waf-tools")
    conf.env.append_value("CXXFLAGS", ["-std=c++0x", "-ggdb"])
    conf.env.append_value("LINKFLAGS", ["-Wl,--no-as-needed"])
    conf.env.append_value("RPATH", [conf.env.LIBDIR])
    conf.magic_project()
    conf.magic_check_library("root")
    conf.magic_check_library("protobuf")

def build(bld):
    bld.load("magic_project", tooldir="waf-tools")

