
import os
C1 = '#XXX'
C2 = '#YYY'

if not os.path.exists("lua-5.2.1.tar.gz"):
    assert 0 == os.system("wget http://www.lua.org/ftp/lua-5.2.1.tar.gz")
assert 0 == os.system("tar zxf lua-5.2.1.tar.gz")
assert 0 == os.system("sed -i s/LUA_USE_READLINE/LUA_DONT_USE_READLINE/  lua-5.2.1/src/luaconf.h")
assert 0 == os.system("tar zcf lua-5.2.1-mod.tar.gz lua-5.2.1")

lua = file("lua-5.2.1-mod.tar.gz").read()
o = file("lua.py", "wb")
o.write(file("lua.py.input").read())
o.write("#==>\n#")
o.write(lua.replace("\n", C1).replace("\r", C2))
o.write("\n#<==\n")
