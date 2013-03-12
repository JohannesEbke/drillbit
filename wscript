#! /usr/bin/env python

def options(opt):
    opt.load('compiler_c compiler_cxx python')

def configure(conf):
    conf.load("build_magic", tooldir="waf-tools")
    conf.env.append_value("CXXFLAGS", ["-std=c++0x", "-ggdb"])
    conf.env.append_value("LDFLAGS", ["-Wl,--as-needed"])
    conf.env.append_value("RPATH", [conf.env.LIBDIR])
    conf.magic()

def build(bld):
    bld.load("build_magic", tooldir="waf-tools")

