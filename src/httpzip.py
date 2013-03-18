from zipfile import ZipFile
from os import write
from sys import stderr
from urllib2 import urlopen, Request, HTTPError
from bisect import bisect
import struct

MAX_RANGES_PER_REQUEST = 250 # Tune this to avoid initial FULL HEAD 
MIN_HOLE_SIZE = 64*1024 # minimum hole size between ranges, 64k seems to be nice

def chunks(l, n):
    return [l[i:i+n] for i in range(0, len(l), n)]

class HTTPFile(object):
    """A buffered HTTP file that supports prefetching of ranges"""

    def __init__(self, url, filesize):
        self.url = url
        self.size = filesize
        self.fpos = 0
        self.prefetch_buffer = []
        self.prefetch_buffer_start = []
        self.prefetch_buffer_end = []

    def vread(self, ranges):
        """Do a vector read"""
        global MAX_RANGES_PER_REQUEST
        if len(ranges) == 0:
            return []
        if len(ranges) > MAX_RANGES_PER_REQUEST:
            # Do a Map-Reduce!
            return reduce(list.__add__, map(self.vread, chunks(ranges, MAX_RANGES_PER_REQUEST)))
        req = Request(self.url, headers={"Range": "bytes="+",".join("-".join((str(s), str(e))) for s,e in ranges)})
        #print req.headers
        try:
            r = urlopen(req)
        except HTTPError, e:
            if e.code == 413: # FULL HEAD
                if MAX_RANGES_PER_REQUEST < 2:
                    raise
                else:
                    MAX_RANGES_PER_REQUEST = MAX_RANGES_PER_REQUEST/2
                    print >> stderr, "Hit HTTP full head - reducing max ranges per request to", MAX_RANGES_PER_REQUEST
                    return self.vread(ranges)
            else:
                raise
        #print "CODE: ", r.getcode()
        #print r.info()
        assert r.getcode() == 206
        if len(ranges) == 1:
            return [r.read()]
        else:
            t = r.info().getheader("Content-Type")
            tp, boundary = t.split(";")
            boundary = boundary.strip()
            assert tp == "multipart/byteranges"
            assert boundary.startswith('boundary="') and boundary.endswith('"')
            boundary = boundary[len('boundary="'):-1]
            data = [None]*len(ranges)
            range_map = dict(("%i-%i/%i" % (s,e,self.size), i) for i, (s, e) in enumerate(ranges))
            current_range = None
            ranges_received = set()
            newlines = 0
            while True:
                line = r.readline()
                if not line:
                    assert len(ranges_received) == len(ranges), ranges_received
                    break
                line = line.strip()
                if not line: # file starts after empty newline
                    newlines += 1
                    if newlines == 1:
                        if current_range is None:
                            # ignore additional ranges
                            continue
                        start, end = ranges[current_range]
                        #print "Reading range ", current_range, " with ", (end - start), " bytes..."
                        data[current_range] = r.read(end - start)
                        ranges_received.add(current_range)
                        current_range = None
                        if len(ranges_received)== len(ranges):
                            break
                else:
                    newlines = 0
                    if line.startswith("Content-Range: bytes "):
                        current_range = range_map[line[len("Content-Range: bytes "):]]
                        assert not current_range in ranges_received
            assert len(data) == len(ranges)
            return data

    def really_read(self, size=None):
        if size is None:
            size = self.size - self.fpos
        res = self.vread([(self.fpos, self.fpos+size)])
        self.fpos += size
        return res
    
    def read(self, size=None):
        if size is None:
            size = self.size - self.fpos
        if self.prefetch_buffer_start:
            i = bisect(self.prefetch_buffer_start, self.fpos)
            if i > 0 and self.prefetch_buffer_end[i-1] >= (self.fpos + size):
                # can be satisified from prefetch buffer
                offset = self.fpos - self.prefetch_buffer_start[i-1]
                self.fpos += size
                return self.prefetch_buffer[i-1][offset:offset+size]
            else:
                return self.really_read(size)
        else:
            return self.really_read(size)
        
    def seek(self, n, whence=0):
        if whence == 0:
            self.fpos = n
        elif whence == 1:
            self.fpos += n
        elif whence == 2:
            self.fpos = self.size + n

    def tell(self):
        return self.fpos

    def prefetch(self, read_areas):
        self.prefetch_buffer_start.extend(start for start, _ in read_areas)
        self.prefetch_buffer_end.extend(end for _, end in read_areas)
        self.prefetch_buffer.extend(self.vread(read_areas))

def httpopen(url):
    r = urlopen(url)
    size = int(r.info().getheader("Content-Length"))
    r.close()
    return HTTPFile(url, size)

class RemoteZipFile(object):
    """A potentially remote ZIP file"""

    def __init__(self, name_or_url): # Holes smaller than 5MB will be read anyway.
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
                    e = self._f.size - 1
                return (s, e)

            blocks = [j for j, (_, i) in enumerate(self._sinfo) if i.filename in required]
            read_blocks = []
            for i in blocks:
                if not read_blocks:
                    read_blocks.append(get_block_range(i))
                else:
                    start, end = read_blocks[-1]
                    b_start, b_end = get_block_range(i)
                    if b_start > end + MIN_HOLE_SIZE:
                        read_blocks.append((b_start, b_end))
                    else:
                        read_blocks[-1] = (start, b_end)
            self._f.prefetch(read_blocks)

        rset = set(required)
        for i in self._zf.infolist():
            if i.filename in rset:
                rset.remove(i.filename)
                x = self._zf.open(i)
                write(1, struct.pack("i", len(i.filename)))
                write(1, i.filename)
                write(1, struct.pack("i", i.file_size))
                write(1, x.read())
                #x.read1(i.file_size)
                #x.read()#1(i.file_size)
        assert not rset, rset

# "http://lcg-lrz-dc66.grid.lrz.de//pnfs/lrz-muenchen.de/data/atlas/dq2/atlaslocalgroupdisk/user/ebke/20130318/user.ebke.20130318.test1/dit0.zip")

if __name__ == "__main__":
    import sys
    f = RemoteZipFile(sys.argv[1])
    if len(sys.argv) < 2:
        print >> stderr, "Usage: <file> [one|all]"
    elif len(sys.argv) == 2:
        keys = "\n".join(sorted(f.keys()))
        write(1, struct.pack("i", len(keys)))
        write(1, keys)
        required = map(str.strip, sys.stdin.readline().split(";"))
        f.require(required)
    elif sys.argv[2] == "all":
        f.require(sorted(f.keys()))
    elif sys.argv[2] == "half":
        f.require(sorted(f.keys())[:len(f.keys())/2])
    elif sys.argv[2] == "one":
        f.require([sorted(f.keys())[42]])
    elif sys.argv[2] == "two":
        f.require(sorted(f.keys())[42:44])
    else:
        assert False

        

