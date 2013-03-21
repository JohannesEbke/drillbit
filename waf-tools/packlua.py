
import os
C1 = '#XXX'
C2 = '#YYY'

if not os.path.exists("lua-5.2.1.tar.gz"):
    assert 0 == os.system("wget http://www.lua.org/ftp/lua-5.2.1.tar.gz")
assert 0 == os.system("tar zxf lua-5.2.1.tar.gz")
lua = file("lua-5.2.1.tar.gz").read()
o = file("lua.py", "wb")
o.write(file("lua.py.input").read())
o.write("#==>\n#")
o.write(lua.replace("\n", C1).replace("\r", C2))
o.write("\n#<==\n")
