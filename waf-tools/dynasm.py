#!/usr/bin/env python
# encoding: utf-8
# Philipp Bender, 2012
# Matt Clarkson, 2012

from waflib.Task import Task
from waflib.TaskGen import extension 

"""
A simple tool to integrate dynasm files into your build system.

    def configure(conf):
        conf.load('compiler_cxx cxx dynasm')

    def build(bld):
        bld(
                features = 'cxx cxxprogram'
                source   = 'main.cpp file1.dasc internal/file2.dasc', 
                include  = '.',
                target   = 'executable') 

"""

class dynasm(Task):
	#run_str = '${LUA} ${DYNASM_SCRIPT} ${DYNASM_FLAGS} ${DYNASM_ST:INCPATHS} -o ${TGT} ${SRC[0].abspath()}'
	run_str = '${LUA} ${DYNASM_SCRIPT} -o ${TGT} ${SRC[0].abspath()}'
	color   = 'PINK'
	ext_out = ['.h']

@extension('.dasc')
def process_dynasm(self, node):
	out_node = node.change_ext('.h')
	self.includes += " " + self.env.INCLUDES_DYNASM
	self.create_task("dynasm", node, [out_node])

def configure(conf):
	#conf.find_program('lua', var='LUA')
	conf.env.DYNASM_ST = '-I %s'
	conf.env.INCLUDES_DYNASM = conf.srcnode.find_dir("dynasm").abspath()
	conf.env.DYNASM_SCRIPT = conf.srcnode.find_resource("dynasm/dynasm.lua").abspath()

