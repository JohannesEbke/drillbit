#include "open_stripes.h"

#include <sys/types.h>
#include <sys/stat.h>
#include <sys/mman.h>
#include <fcntl.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

#include <iostream>

#include <google/protobuf/io/zero_copy_stream_impl.h>
#include <google/protobuf/io/gzip_stream.h>
#include <google/protobuf/io/coded_stream.h>

using google::protobuf::io::FileInputStream;
using google::protobuf::io::ArrayInputStream;
using google::protobuf::io::GzipInputStream;
using google::protobuf::io::CodedInputStream;

using std::pair;
using std::make_pair;
using std::vector;
using std::string;

pair<void*, size_t> copy_file(string fn) {
    int fd = open(fn.c_str(), O_RDONLY);
    struct stat buffer;
    assert(fstat(fd, &buffer) != -1);
    size_t size = buffer.st_size;
    if (size == 0) return make_pair((void*)NULL, 0);
    void * mmap = ::mmap(NULL, size, PROT_READ, MAP_PRIVATE, fd, 0);
    assert(mmap != MAP_FAILED);
    void * target = malloc(size);
    memcpy(target, mmap, size);
    munmap(mmap, size);
    close(fd);
    return make_pair(target, size);
};

pair<void*, size_t> copy_file_decomp(string fn) {
    int fd = open(fn.c_str(), O_RDONLY);
    assert(fd != -1);
    int bytes_read = 0;
    int bufsize = 1024*1024;
    void * target = malloc(bufsize);
    {
        FileInputStream fstream(fd);
        GzipInputStream zstream(&fstream);
        const void * data = NULL;
        int size = 0;
        while (zstream.Next(&data, &size)) {
            if (bytes_read + size > bufsize) {
                while (bytes_read + size > bufsize) bufsize *= 2;
                target = realloc(target, bufsize);
            };
            memcpy((uint8_t*)target + bytes_read, data, size);
            bytes_read += size;
        }
    }
    close(fd);
    target = realloc(target, bytes_read);
    return make_pair(target, bytes_read);
};

vector<pair<CodedInputStream*, CodedInputStream*>> open_stripes(const vector<string>& dit_files) {
    vector<std::pair<void*,size_t> > dit, ditm;
    vector<ArrayInputStream*> id, im;
    vector<GzipInputStream*> zd, zm;
    vector<pair<CodedInputStream*, CodedInputStream*>> coded;

#if 1 // this version seems to perform better for my work machine and the big laptop
    std::cerr << "Loading column data..." << std::endl;
    for (int i = 0; i < dit_files.size(); i++) {
        dit.push_back(copy_file(dit_files[i]));
        ditm.push_back(copy_file(dit_files[i]+"m"));
        id.push_back(new ArrayInputStream(dit[i].first, dit[i].second));
        im.push_back(new ArrayInputStream(ditm[i].first, ditm[i].second));
        zd.push_back(new GzipInputStream(id[i]));
        zm.push_back(new GzipInputStream(im[i]));
        CodedInputStream* dd = new CodedInputStream(zd[i]);
        CodedInputStream* dm = new CodedInputStream(zm[i]);
        coded.push_back(make_pair(dm, dd));
    }
#else // .. but this one is better on the netbook (but takes more memory)
    std::cerr << "Loading and decompressing column data..." << std::endl;
    for (int i = 0; i < dit_files.size(); i++) {
        dit.push_back(copy_file_decomp(dit_files[i]));
        ditm.push_back(copy_file_decomp(dit_files[i]+"m"));
        id.push_back(new ArrayInputStream(dit[i].first, dit[i].second));
        im.push_back(new ArrayInputStream(ditm[i].first, ditm[i].second));
        CodedInputStream* dd = new CodedInputStream(id[i]);
        CodedInputStream* dm = new CodedInputStream(im[i]);
        coded.push_back(make_pair(dm, dd));
    }
#endif
    return coded;
}
