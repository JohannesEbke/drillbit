from zipfile import ZipFile
from os import write
from urllib2 import urlopen, Request
from bisect import bisect
import struct

class HTTPFile(object):
    def __init__(self, url, filesize):
        self.url = url
        self.size = filesize
        self.fpos = 0
        self.data = bytes()
        self.prefetch_buffer = []
        self.prefetch_buffer_start = []
        self.prefetch_buffer_end = []

    def vread(self, ranges):
        req = Request(self.url, headers={"Range": "bytes="+",".join("-".join((str(s), str(e))) for s,e in ranges)})
        print req.headers
        r = urlopen(req)
        print "CODE: ", r.getcode()
        print r.info()
        assert r.getcode() == 206
        return [r.read(e-s) for (e,s) in ranges]

    def really_read(self, size=None):
        print "HTTPFile.Read ", size
        if size is None:
            size = self.size - self.fpos
        try:
            r = urlopen(Request(self.url, headers={"Range": "bytes=%i-%i" % (self.fpos, self.fpos + size)}))
        except Exception, X:
            print X.__class__, X
            raise
        print "CODE: ", r.getcode()
        print r.info()
        assert r.getcode() == 206
        self.fpos += size
        return r.read(size)

    def read(self, size=None):
        if size is None:
            size = self.size - self.fpos
        if self.prefetch_buffer_start:
            i = bisect(self.prefetch_buffer_start, self.fpos)
            if i > 0 and self.prefetch_buffer_end[i-1] >= (self.fpos + size):
                # can be satisified from prefetch buffer
                offset = self.fpos - self.prefetch_buffer_start[i-1]
                #print "Satisfied by prefetch buffer ", i-1, offset
                self.fpos += size
                return self.prefetch_buffer[i-1][offset:offset+size]
            else:
                return self.really_read(size)
        else:
            return self.really_read(size)
        
    def seek(self, n, whence=0):
        #print "HTTPFile.Seek ", n, whence
        if whence == 0:
            self.fpos = n
        elif whence == 1:
            self.fpos += n
        elif whence == 2:
            self.fpos = self.size + n

    def tell(self):
        print "HTTPFile.Tell ", self.fpos
        return self.fpos

    def prefetch(self, read_areas):
        print "Prefetch!", read_areas
        #fpos = self.fpos
        #for start, end in read_areas:
            #self.seek(start)
            #self.prefetch_buffer.append(self.really_read(end-start))
            #self.prefetch_buffer_start.append(start)
            #self.prefetch_buffer_end.append(end)
        #self.fpos = fpos
        self.prefetch_buffer_start.extend(start for start, _ in read_areas)
        self.prefetch_buffer_end.extend(end for _, end in read_areas)
        self.prefetch_buffer.extend(self.vread(read_areas))



def httpopen(url):
    r = urlopen(url)
    size = int(r.info().getheader("Content-Length"))
    r.close()
    return HTTPFile(url, size)

class DitFile(object):
    def __init__(self, name_or_url, min_hole_size=5*1024*1024): # Holes smaller than 5MB will be read anyway.
        self._min_hole_size = min_hole_size
        if name_or_url.startswith("http:"):
            self._f = httpopen(name_or_url)
            self._use_read_buffer = True
            # prefetch the last MB to capture most of the index
            self._f.prefetch([(self._f.size-1024*1024, self._f.size)])
        else:
            self._f = open(name_or_url)
            self._use_read_buffer = False

        self._zf = ZipFile(self._f)
        if self._use_read_buffer:
            self._sinfo = sorted((i.header_offset, i) for i in self._zf.infolist())
            self._dict = dict((i.filename, i) for i in self._zf.infolist())

    def keys(self):
        return self._zf.namelist()

    def require(self, required):
        if self._use_read_buffer:
            def get_block_range(block_id):
                s = self._sinfo[block_id][1].header_offset
                if block_id != len(self._sinfo)-1:
                    e = self._sinfo[block_id + 1][1].header_offset
                else:
                    e = self._f.size
                return (s, e)

            blocks = [j for j, (_, i) in enumerate(self._sinfo) if i.filename in required]
            read_blocks = []
            for i in blocks:
                if not read_blocks:
                    read_blocks.append(get_block_range(i))
                else:
                    start, end = read_blocks[-1]
                    b_start, b_end = get_block_range(i)
                    if b_start > end + self._min_hole_size:
                        read_blocks.append((b_start, b_end))
                    else:
                        read_blocks[-1] = (start, b_end)
            self._f.prefetch(read_blocks)

        rset = set(required)
        for i in self._zf.infolist():
            if i.filename in rset:
                rset.remove(i.filename)
                x = self._zf.open(i)
                #write(1, struct.pack("i", len(i.filename)))
                #write(1, i.filename)
                #write(1, struct.pack("i", i.file_size))
                #write(1, x.read())
                #x.read1(i.file_size)
                x.read()#1(i.file_size)
        assert not rset, rset

# "http://lcg-lrz-dc66.grid.lrz.de//pnfs/lrz-muenchen.de/data/atlas/dq2/atlaslocalgroupdisk/user/ebke/20130318/user.ebke.20130318.test1/dit0.zip")

if __name__ == "__main__":
    import sys
    f = DitFile(sys.argv[1])
    if len(sys.argv) < 2:
        print "Usage: <file> [one|all]"
    elif len(sys.argv) == 2:
        print "\n".join(sorted(f.keys()))
        required = map(str.strip, sys.stdin.readline().split(";"))
        f.require(required)
    elif sys.argv[2] == "all":
        f.require(sorted(f.keys()))
    elif sys.argv[2] == "half":
        f.require(sorted(f.keys())[:len(f.keys())/2])
    elif sys.argv[2] == "one":
        f.require([sorted(f.keys())[42]])
    else:
        assert False

        

