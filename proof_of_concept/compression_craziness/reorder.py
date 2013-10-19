data = open("ph_pt.dit", "rb").read()
out = open("reordered.dit", "wb")

out.write("".join(data[i::4] for i in xrange(4)))
