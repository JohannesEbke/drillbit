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

#include <TTree.h>
#include <TBranch.h>
#include <TFile.h>

#include "drillbit.pb.h"

using namespace std;

using google::protobuf::io::FileInputStream;
using google::protobuf::io::ArrayInputStream;
using google::protobuf::io::GzipInputStream;
using google::protobuf::io::CodedInputStream;
using google::protobuf::FieldDescriptor;
using google::protobuf::internal::WireFormatLite;


class StripeReader {
 public:
    // Initialize everything to 0
    StripeReader() : info(), _next_event_count(0), _last_tag(0), _meta(NULL), _data(NULL), _branch(NULL) {};

    ~StripeReader() {
        free(_buffer);
    }

    /// Make a StripeReader from meta/data input streams
    static StripeReader * Make(CodedInputStream * meta, CodedInputStream * data) {
        StripeReader * stripe = new StripeReader();
        stripe->_meta = meta;
        stripe->_data = data;
        // Get the info message from the top
        uint32_t size = 0;
        assert(meta->ReadVarint32(&size));
        auto limit = meta->PushLimit(size);
        stripe->info.ParseFromCodedStream(meta);
        meta->PopLimit(limit);
        assert(stripe->info.stripe_version() == 1);
        stripe->initialize();
        return stripe;
    }

    // Create a branch of this type in the given ROOT Tree and hold on to it
    void create_branch(TTree* tree) {
        // Create Branch
        if (info.level() == 0) {
            // can be Int_t, UInt_t, Double_t, Float_t, Bool_t
            if (info.root_type() == "Int_t") {
                _branch = tree->Branch(info.root_name().c_str(), _buffer, "I");
            } else if (info.root_type() == "UInt_t") {
                _branch = tree->Branch(info.root_name().c_str(), _buffer, "i");
            } else if (info.root_type() == "Float_t") {
                _branch = tree->Branch(info.root_name().c_str(), _buffer, "F");
            } else if (info.root_type() == "Double_t") {
                _branch = tree->Branch(info.root_name().c_str(), _buffer, "D");
            } else if (info.root_type() == "Bool_t") {
                _branch = tree->Branch(info.root_name().c_str(), _buffer, "O");
            } else {
                std::cerr << "Unknown root_type: " << info.root_type() << std::endl;
            }
        } else {
            _branch = tree->Branch(info.root_name().c_str(), info.root_type().c_str(), _buffer);
        }
    }

    template<typename T>
    void* init_vector(uint32_t level) {
        if (level == 1) {
            return new std::vector<T>();
        } else if (level == 2) {
            return new std::vector<std::vector<T>>();
        } else if (level == 3) {
            return new std::vector<std::vector<std::vector<T>>>();
        } else if (level == 4) {
            return new std::vector<std::vector<std::vector<std::vector<T>>>>();
        } else {
            assert(false);
        }
    }

    void initialize() {
        _wiretype = WireFormatLite::WireTypeForFieldType(WireFormatLite::FieldType(info.field_type()));
        if (info.level() == 0) {
            switch(info.field_type()) {
                case WireFormatLite::TYPE_DOUBLE:
                case WireFormatLite::TYPE_INT64:
                case WireFormatLite::TYPE_UINT64:
                case WireFormatLite::TYPE_FIXED64:
                case WireFormatLite::TYPE_SFIXED64:
                case WireFormatLite::TYPE_SINT64:
                    _buffersize = 8;
                    break;
                case WireFormatLite::TYPE_FLOAT:
                case WireFormatLite::TYPE_INT32:
                case WireFormatLite::TYPE_FIXED32:
                case WireFormatLite::TYPE_BOOL:
                case WireFormatLite::TYPE_UINT32:
                case WireFormatLite::TYPE_ENUM:
                case WireFormatLite::TYPE_SFIXED32:
                case WireFormatLite::TYPE_SINT32:
                    _buffersize = 4;
                    break;
                case WireFormatLite::TYPE_STRING:
                case WireFormatLite::TYPE_BYTES:
                default:
                    std::cerr << "Unknown/Unsupported field type " << info.field_type() << std::endl;
                    assert(false);
            }
            _buffer = malloc(_buffersize);
            memset(_buffer, 0, _buffersize);
        } else {
            _buffersize = 0;
            // read the first tag so that last_tag is correct

            switch(info.field_type()) {
                case WireFormatLite::TYPE_DOUBLE:
                    _buffer = init_vector<double>(info.level()); break;
                case WireFormatLite::TYPE_INT64:
                case WireFormatLite::TYPE_SFIXED64:
                case WireFormatLite::TYPE_SINT64:
                    _buffer = init_vector<int64_t>(info.level()); break;
                case WireFormatLite::TYPE_UINT64:
                case WireFormatLite::TYPE_FIXED64:
                    _buffer = init_vector<uint64_t>(info.level()); break;
                case WireFormatLite::TYPE_FLOAT:
                    _buffer = init_vector<float>(info.level()); break;
                case WireFormatLite::TYPE_INT32:
                case WireFormatLite::TYPE_SINT32:
                case WireFormatLite::TYPE_SFIXED32:
                    _buffer = init_vector<int32_t>(info.level()); break;
                case WireFormatLite::TYPE_FIXED32:
                case WireFormatLite::TYPE_UINT32:
                case WireFormatLite::TYPE_ENUM:
                    _buffer = init_vector<uint32_t>(info.level()); break;
                case WireFormatLite::TYPE_BOOL:
                    _buffer = init_vector<bool>(info.level()); break;
                case WireFormatLite::TYPE_STRING:
                case WireFormatLite::TYPE_BYTES:
                    _buffer = init_vector<std::string>(info.level()); break;
                default:
                    std::cerr << "Unknown field type " << info.field_type() << std::endl;
                    assert(false);
            }
            if (!_meta->ReadVarint32(&_last_tag)) {
                _last_tag = UINT_MAX;
            }
        }

        // now _buffer is allocated and zeroed!
    }

    bool decode_32(uint32_t *buf) {
        union {uint32_t i; float f;};
        //std::cerr << "Level 0" << std::endl;
        if(_wiretype == WireFormatLite::WIRETYPE_VARINT and _buffersize == 4) {
            if(!_data->ReadVarint32(buf)) return false;
        } else if (_wiretype == WireFormatLite::WIRETYPE_FIXED32) {
            if (!_data->ReadLittleEndian32(buf)) return false;
        } else {
            std::cout << "UNEXPECTED WIRE TYPE " << _wiretype << std::endl;
            assert(false);
        }
        if (info.field_type() == WireFormatLite::TYPE_FLOAT) {
            f = WireFormatLite::DecodeFloat(*buf);
            *buf = i;
        }
        return true;
    }
    
    bool decode_64(uint64_t *buf) {
        union {uint64_t i; float f;};
        //std::cerr << "Level 0" << std::endl;
        if(_wiretype == WireFormatLite::WIRETYPE_VARINT and _buffersize == 8) {
            if(!_data->ReadVarint64(buf)) return false;
        } else if (_wiretype == WireFormatLite::WIRETYPE_FIXED64) {
            if (!_data->ReadLittleEndian64(buf)) return false;
        } else {
            std::cout << "UNEXPECTED WIRE TYPE " << _wiretype << std::endl;
            assert(false);
        }
        if (info.field_type() == WireFormatLite::TYPE_DOUBLE) {
            f = WireFormatLite::DecodeDouble(*buf);
            *buf = i;
        }
        return true;
    }

    bool decode_string(std::string &s) {
        //std::cerr << "Level 0" << std::endl;
        if (_wiretype == WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
            uint32_t size;
            if (!_data->ReadVarint32(&size)) return false;
            assert(_data->ReadString(&s, size));
        } else {
            std::cout << "UNEXPECTED WIRE TYPE " << _wiretype << std::endl;
            assert(false);
        }
        return true;
    }

    template<typename T> 
    uint32_t vector_filler() {
        //std::cout << "Field "<< dit_files[i] << std::endl;
        T & v = *((T*)_buffer);
        uint32_t level = info.level();
        bool first = true;
        while (true) {
            uint32_t dl_rl = _last_tag; // look at the last read tag
            uint32_t RL_M = level == 1 ? 2 : 4;
            uint32_t rl = dl_rl / RL_M;
            uint32_t dl = dl_rl % RL_M;
            //std::cout << "L " << level << " RL " << rl << " DL " << dl << std::endl;
            //std::cerr << "DLRL " << dl_rl << std::endl;
            if (dl_rl == 0) {
                if (first) {
                    //std::cout << i << ":" << "NULL" << std::endl;
                    if (!_meta->ReadVarint32(&_last_tag)) return false; // look at the next tag
                    break; // no fields in this event
                } else {
                    break; // no fields in this event
                }
            } else if (rl == 0) {
                if (first) {
                    if (dl == level) {
                        //deal_with_data(i, cd[i], wiretype);
                    }
                    if (!_meta->ReadVarint32(&_last_tag)) return false; // look at the next tag
                } else {
                    // more than one field read, but this one belongs to the next event
                    // - leave tag in place
                    break;
                }
            } else {
                if (dl == level) {
                    //deal_with_data(i, cd[i], wiretype);
                }
                if (!_meta->ReadVarint32(&_last_tag)) return false; // look at the next tag
            }
            first = false;
        }
    }

    bool next() {
        int level = info.level();
        if (level == 0) {
            //std::cerr << "Level 0" << std::endl;
            if (_buffersize == 4) {
                if(!decode_32((uint32_t*)_buffer)) return false;
            } else if (_buffersize == 8) {
                if(!decode_64((uint64_t*)_buffer)) return false;
            } else {
                std::cout << "Unexpected buffersize: " << _buffersize << std::endl;
                assert(false);
            }
        } else if (level == 1) {
            switch(info.field_type()) {
                case WireFormatLite::TYPE_DOUBLE:
                    vector_filler<std::vector<double>>(); break;
                case WireFormatLite::TYPE_INT64:
                case WireFormatLite::TYPE_SFIXED64:
                case WireFormatLite::TYPE_SINT64:
                    vector_filler<std::vector<int64_t>>(); break;
                case WireFormatLite::TYPE_UINT64:
                case WireFormatLite::TYPE_FIXED64:
                    vector_filler<std::vector<uint64_t>>(); break;
                case WireFormatLite::TYPE_FLOAT:
                    vector_filler<std::vector<float>>(); break;
                case WireFormatLite::TYPE_INT32:
                case WireFormatLite::TYPE_SINT32:
                case WireFormatLite::TYPE_SFIXED32:
                    vector_filler<std::vector<int32_t>>(); break;
                case WireFormatLite::TYPE_FIXED32:
                case WireFormatLite::TYPE_UINT32:
                case WireFormatLite::TYPE_ENUM:
                    vector_filler<std::vector<uint32_t>>(); break;
                case WireFormatLite::TYPE_BOOL:
                    vector_filler<std::vector<bool>>(); break;
                case WireFormatLite::TYPE_STRING:
                case WireFormatLite::TYPE_BYTES:
                    vector_filler<std::vector<std::string>>(); break;
                default:
                    std::cerr << "Unknown field type " << info.field_type() << std::endl;
                    assert(false);
            }
            return true;
        }
        return true;
    }

    StripeInfo info;
 private:
    int _next_event_count;
    uint32_t _last_tag;
    CodedInputStream * _meta, * _data;
    TBranch * _branch;
    WireFormatLite::WireType _wiretype;
    void* _buffer;
    uint32_t _buffersize;
    std::string _stringbuffer;
};

uint64_t sum;

std::pair<void*, size_t> copy_file(std::string fn) {
    int fd = open(fn.c_str(), O_RDONLY);
    struct stat buffer;
    assert(fstat(fd, &buffer) != -1);
    size_t size = buffer.st_size;
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
    TTree * tree = new TTree();

    std::vector<StripeReader*> readers;
    for (int i = 0; i < dit_files.size(); i++) {
        auto * reader = StripeReader::Make(cm[i], cd[i]);
        reader->create_branch(tree);
        readers.push_back(reader);
    }

    std::cerr << "Run over all events and collate them..." << std::endl;
    int event_number = 0;
    bool running = true;
    while(running) {
        //std::cerr << "Event start..." << std::endl;
        //std::cout << event_number << std::endl;
        //std::cerr << event_number << std::endl;
        for (int i = 0; i < dit_files.size(); i++) {
            if (not readers[i]->next()) {
                running = false;
                break;
            }
            tree->Fill();
        }
        event_number++;
        if (event_number == 10000) break;
    }
    tree->Write("composed");
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
    
