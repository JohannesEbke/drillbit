#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>
#include <sys/mman.h>

#include <iostream>
#include <vector>

#include <google/protobuf/io/zero_copy_stream_impl.h>
#include <google/protobuf/io/gzip_stream.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/wire_format_lite_inl.h>

#include <TTree.h>
#include <TBranch.h>
#include <TFile.h>

#include "drillbit.pb.h"
#include "root_dictionaries.h"
#include "stripe_reader.h"
#include "stripe_reader_impl.h"

using namespace std;

using google::protobuf::io::FileInputStream;
using google::protobuf::io::ArrayInputStream;
using google::protobuf::io::GzipInputStream;
using google::protobuf::io::CodedInputStream;
using google::protobuf::FieldDescriptor;
using google::protobuf::internal::WireFormatLite;

// The TreeStripeReader interface
class RootTreeStripeReader {
 public:
    virtual bool next() = 0;
};


template<typename T>
class RootTreeTypedStripeReader : public RootTreeStripeReader {
 public:
    RootTreeTypedStripeReader() : _buffer(NULL), _dl(0), _rl(0), _level(0) {};

    static RootTreeTypedStripeReader<T>* Make(StripeReader *sreader, TTree *tree) {
        assert(sreader->is_correct_type<T>());
        RootTreeTypedStripeReader<T>* reader = new RootTreeTypedStripeReader<T>();
        reader->_level = sreader->info().level();
        reader->_reader = sreader;
        reader->init_buffer();
        reader->create_branch(tree);
    }

    bool next() {
        if (_level == 0) {
            if (not _reader->next_line(_rl, _dl, &_buf)) return false;
        } else {
            vector_filler_lvl();
        }
        return true;
    }

 private:

    void * _buffer;
    uint8_t _dl, _rl, _level;
    T _buf;
    StripeReader *_reader;
    TBranch * _branch;

    // Create a branch of this type in the given ROOT Tree and hold on to it
    void create_branch(TTree* tree) {
        const StripeInfo &info = _reader->info();
        ensure_dictionary(info.root_type().c_str());
        // Create Branch
        if (_level == 0) {

            // can be Int_t, UInt_t, Double_t, Float_t, Bool_t
            if (info.root_type() == "Int_t") {
                _branch = tree->Branch(info.root_name().c_str(), _buffer, (info.root_name() + "/I").c_str());
            } else if (info.root_type() == "UInt_t") {
                _branch = tree->Branch(info.root_name().c_str(), _buffer, (info.root_name() + "/i").c_str());
            } else if (info.root_type() == "Float_t") {
                _branch = tree->Branch(info.root_name().c_str(), _buffer, (info.root_name() + "/F").c_str());
            } else if (info.root_type() == "Double_t") {
                _branch = tree->Branch(info.root_name().c_str(), _buffer, (info.root_name() + "/D").c_str());
            } else if (info.root_type() == "Bool_t") {
                _branch = tree->Branch(info.root_name().c_str(), _buffer, (info.root_name() + "/O").c_str());
            } else {
                std::cerr << "Unknown root_type: " << info.root_type() << std::endl;
            }
        } else {
            _branch = tree->Branch(info.root_name().c_str(), info.root_type().c_str(), &_buffer);
        }
    }

    void init_buffer() {
        if (_level == 0) {
            _buffer = new T();
        } else if (_level == 1) {
            _buffer = new std::vector<T>();
        } else if (_level == 2) {
            _buffer = new std::vector<std::vector<T>>();
        } else if (_level == 3) {
            _buffer = new std::vector<std::vector<std::vector<T>>>();
        } else if (_level == 4) {
            _buffer = new std::vector<std::vector<std::vector<std::vector<T>>>>();
        } else {
            assert(false);
        }
    }

    void decode_into(std::vector<T> &v, int rl) {
        assert(rl == 0 || rl == 1);
        v.push_back(_buf);
    }

    template<typename U>
    void decode_into(std::vector<std::vector<U>> &v, int rl) {
        if (rl == 0 || rl == 1) {
            assert(v.empty() or rl == 1);
            v.push_back(std::vector<U>());
            rl = 1;
        }
        decode_into(v[v.size()-1], rl - 1);
    }

    template<typename U> 
    bool vector_filler() {
        U & v = *((U*) _buffer);
        v.clear();
        uint32_t level = _reader->info().level();
        bool first = true;
        while (true) {
            if (_dl == UINT8_MAX) return false;
            //std::cerr << "DLRL " << dl_rl << std::endl;
            if (_dl == 0 and _rl == 0) {
                if (first) {
                    //std::cout << i << ":" << "NULL" << std::endl;
                    if (not _reader->next_line(_rl, _dl, &_buf)) _dl = UINT8_MAX;
                    break; // no fields in this event
                } else {
                    break; // no more fields in this event
                }
            } else if (_rl == 0) {
                if (first) {
                    if (_dl == level) {
                        decode_into(v, _rl);
                    }
                    if (not _reader->next_line(_rl, _dl, &_buf)) {
                        _dl = UINT8_MAX; // look at the next tag
                        break;
                    }
                } else {
                    // more than one field read, but this one belongs to the next event
                    // - leave tag in place
                    break;
                }
            } else {
                if (_dl == level) {
                    decode_into(v, _rl);
                }
                if (not _reader->next_line(_rl, _dl, &_buf)) {
                    _dl = UINT8_MAX; // look at the next tag
                    break;
                }
            }
            first = false;
        }
        //std::cout << "Have vector of size " << v.size() << std::endl;
        //for (int i = 0; i < v.size(); i++) {
        //    std::cout << v[i] << " ";
        //}
        //std::cout << std::endl;
        return true;
    }
                    
    bool vector_filler_lvl() {
        switch(_level) {
            case 1: return vector_filler<std::vector<T>>();
            case 2: return vector_filler<std::vector<std::vector<T>>>();
            case 3: return vector_filler<std::vector<std::vector<std::vector<T>>>>();
            case 4: return vector_filler<std::vector<std::vector<std::vector<std::vector<T>>>>>();
            default: assert(false);
        }
        return false;
    }
};

RootTreeStripeReader* MakeReaderAuto(StripeReader *s, TTree *t) {
#define TRY_TYPE(T) if (s->is_correct_type<T>()) return RootTreeTypedStripeReader<T>::Make(s, t);
    TRY_TYPE(int32_t)
    TRY_TYPE(uint32_t)
    TRY_TYPE(float)
    TRY_TYPE(bool)
    TRY_TYPE(int)
    TRY_TYPE(int64_t)
    TRY_TYPE(uint64_t)
    TRY_TYPE(double)
    TRY_TYPE(std::string)
#undef TRY_TYPE
}

std::pair<void*, size_t> copy_file(std::string fn) {
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

std::pair<void*, size_t> copy_file_decomp(std::string fn) {
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

void compose_root_file(std::string name, const std::vector<std::string>& dit_files, const std::vector<std::string>& ditm_files) {
    std::vector<std::pair<void*,size_t> > dit, ditm;
    std::vector<ArrayInputStream*> id, im;
    std::vector<GzipInputStream*> zd, zm;
    std::vector<CodedInputStream*> cd, cm;

#if 1 // this version seems to perform better for my work machine and the big laptop
    std::cerr << "Loading column data..." << std::endl;
    for (int i = 0; i < dit_files.size(); i++) {
        dit.push_back(copy_file(dit_files[i]));
        ditm.push_back(copy_file(ditm_files[i]));
        id.push_back(new ArrayInputStream(dit[i].first, dit[i].second));
        im.push_back(new ArrayInputStream(ditm[i].first, ditm[i].second));
        zd.push_back(new GzipInputStream(id[i]));
        zm.push_back(new GzipInputStream(im[i]));
        cd.push_back(new CodedInputStream(zd[i]));
        cm.push_back(new CodedInputStream(zm[i]));
    }
#else // .. but this one is better on the netbook (but takes more memory)
    std::cerr << "Loading and decompressing column data..." << std::endl;
    for (int i = 0; i < dit_files.size(); i++) {
        dit.push_back(copy_file_decomp(dit_files[i]));
        ditm.push_back(copy_file_decomp(ditm_files[i]));
        id.push_back(new ArrayInputStream(dit[i].first, dit[i].second));
        im.push_back(new ArrayInputStream(ditm[i].first, ditm[i].second));
        cd.push_back(new CodedInputStream(id[i]));
        cm.push_back(new CodedInputStream(im[i]));
    }
#endif
    std::cerr << "Looking up column metadata and creating root tree..." << std::endl;

    TFile f(name.c_str(), "RECREATE");
    TTree * tree = new TTree("composed", "Composed Tree");

    std::vector<RootTreeStripeReader*> readers;
    for (int i = 0; i < dit_files.size(); i++) {
        auto * sreader = StripeReader::Make(cm[i], cd[i]);
        readers.push_back(MakeReaderAuto(sreader, tree));
    }

    std::cerr << "Run over all events and collate them..." << std::endl;
    int event_number = 0;
    bool running = true;
    while(running) {
        //std::cerr << "Event start..." << std::endl;
        //std::cout << event_number << std::endl;
        if (event_number % 1000 == 0) std::cerr << event_number << std::endl;
        for (int i = 0; i < dit_files.size(); i++) {
            if (not readers[i]->next()) {
                running = false;
                break;
            }
        }
        if (running) {
            tree->Fill();
            event_number++;
        }
    }
    tree->Write("composed", TObject::kOverwrite);
    //f.Write();
    f.Close();
}


int main(int argc, const char ** argv) {
    std::vector<std::string> dit_files;
    std::vector<std::string> ditm_files;
    for(int i = 1; i < argc; i++) {
        std::string f = argv[i];
        dit_files.push_back(f);
        ditm_files.push_back(f+"m");
    }
    compose_root_file("composed.root", dit_files, ditm_files);
    return 0;
}
    
