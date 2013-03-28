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
#include <google/protobuf/io/coded_stream.h>
#include <gzip_stream.h>

using google::protobuf::io::FileInputStream;
using google::protobuf::io::ArrayInputStream;
using zerocc::GzipInputStream;
using google::protobuf::io::ZeroCopyInputStream;
using google::protobuf::io::CodedInputStream;

using google::protobuf::io::FileOutputStream;
using zerocc::GzipOutputStream;
using google::protobuf::io::ZeroCopyOutputStream;
using google::protobuf::io::CodedOutputStream;

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
    void *target = malloc(size);
    uint8_t *current = (uint8_t*) target;
    size_t remaining_size = size;
    while(remaining_size > 0) {
        ssize_t advance = read(fd, current, remaining_size);
        assert(advance > 0);
        current += advance;
        remaining_size -= advance;
    }
    close(fd);
    return make_pair(target, size);
};

pair<void*, size_t> copy_file_read(string fn) {
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

class StripeInputImplCompressedCopy : public StripeInputStream {
 public:
    StripeInputImplCompressedCopy() {
        meta = NULL;
        data = NULL;
    };

    void init(const std::string &dit_file) {
        dit = copy_file(dit_file);
        ditm = copy_file(dit_file+"m");
        id = new ArrayInputStream(dit.first, dit.second);
        im = new ArrayInputStream(ditm.first, ditm.second);
        zd = new GzipInputStream(id);
        zm = new GzipInputStream(im);
        data = new CodedInputStream(zd);
        meta = zm;
        assert(data);
        assert(meta);
        data->SetTotalBytesLimit(1024*1024*1024, 1024*1024*1024);
    }

    virtual ~StripeInputImplCompressedCopy() {
        if (meta == NULL) return;
        // delete in reverse order
        delete data; // delete meta;
        delete zd; delete zm;
        delete id; delete im;
        free(dit.first);
        free(ditm.first);
    }
 private:
    std::pair<void*,size_t> dit, ditm;
    ArrayInputStream *id, *im;
    GzipInputStream *zd, *zm;
};


vector<std::shared_ptr<StripeInputStream>> open_stripes(const vector<string>& dit_files) {
    vector<std::shared_ptr<StripeInputStream>> streams;
#if 1 // this version seems to perform better for my work machine and the big laptop
    std::cerr << "Loading column data..." << std::endl;
    for (int i = 0; i < dit_files.size(); i++) {
        auto x = new StripeInputImplCompressedCopy();
        x->init(dit_files[i]);
        streams.push_back(std::shared_ptr<StripeInputImplCompressedCopy>(x));
    }
    return streams;
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
}

// Output stream methods

class StripeOutputImplCompressed : public StripeOutputStream {
 public:
    StripeOutputImplCompressed() {
        meta = NULL;
        data = NULL;
    }; // for checking

    StripeOutputStream init(std::string fn) {
        this->fn = fn;
        // Compression options
        GzipOutputStream::Options options;
        options.compression_level = 1;

        // Open data file
        fd_data = open(fn.c_str(), O_CREAT | O_TRUNC | O_RDWR, S_IRUSR | S_IWUSR);
        assert(fd_data != -1);
        fstream_data = new FileOutputStream(fd_data);
        zstream_data = new GzipOutputStream(fstream_data, options);
        data = new CodedOutputStream(zstream_data);

        // Open meta file
        string mfn = fn + "m";
        fd_meta = open(mfn.c_str(), O_CREAT | O_TRUNC | O_RDWR, S_IRUSR | S_IWUSR);
        assert(fd_meta != -1);
        fstream_meta = new FileOutputStream(fd_meta);
        zstream_meta = new GzipOutputStream(fstream_meta, options);
        meta = zstream_meta;

        assert(meta);
        assert(data);
    }

    virtual ~StripeOutputImplCompressed() {
        if (meta == NULL) return;
        delete data;
        //delete meta;
        assert(zstream_meta->Close());
        assert(zstream_data->Close());
        delete zstream_data;
        delete zstream_meta;
        fstream_data->Close();
        fstream_meta->Close();
        delete fstream_data;
        delete fstream_meta;
        close(fd_data);
        close(fd_meta);
    }

 private:
    std::string fn;
    int fd_data, fd_meta;
    FileOutputStream *fstream_data, *fstream_meta;
    GzipOutputStream *zstream_data, *zstream_meta;
};

std::shared_ptr<StripeOutputStream> open_stripes_write(const string& dit_file) {
    auto x = new StripeOutputImplCompressed();
    x->init(dit_file);
    return std::shared_ptr<StripeOutputImplCompressed>(x);
}

