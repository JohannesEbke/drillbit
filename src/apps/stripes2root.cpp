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
        ensure_dictionary(info.root_type().c_str());
        // Create Branch
        if (info.level() == 0) {
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
        //_branch->SetFile(f);
    }

    template <typename T>
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
        switch(WireFormatLite::FieldTypeToCppType(WireFormatLite::FieldType(info.field_type()))) {
            case WireFormatLite::CPPTYPE_INT32:
            case WireFormatLite::CPPTYPE_UINT32:
            case WireFormatLite::CPPTYPE_FLOAT:
            case WireFormatLite::CPPTYPE_BOOL:
            case WireFormatLite::CPPTYPE_ENUM:
                _buffersize = 4;
                break;
            case WireFormatLite::CPPTYPE_INT64:
            case WireFormatLite::CPPTYPE_UINT64:
            case WireFormatLite::CPPTYPE_DOUBLE:
                _buffersize = 8;
                break;
            case WireFormatLite::CPPTYPE_STRING:
                _buffersize = 0;
                break;
            case WireFormatLite::CPPTYPE_MESSAGE:
            default:
                std::cerr << "Unknown/Unsupported field type " << info.field_type() << std::endl;
                assert(false);
        }
        if (info.level() == 0) {
            _buffer = malloc(_buffersize);
            memset(_buffer, 0, _buffersize);
        } else {
            // read the first tag so that last_tag is correct
            switch(WireFormatLite::FieldTypeToCppType(WireFormatLite::FieldType(info.field_type()))) {
                case WireFormatLite::CPPTYPE_INT32:
                    _buffer = init_vector<int32_t>(info.level()); break;
                case WireFormatLite::CPPTYPE_UINT32:
                    _buffer = init_vector<uint32_t>(info.level()); break;
                case WireFormatLite::CPPTYPE_FLOAT:
                    _buffer = init_vector<float>(info.level()); break;
                case WireFormatLite::CPPTYPE_BOOL:
                    _buffer = init_vector<bool>(info.level()); break;
                case WireFormatLite::CPPTYPE_ENUM:
                    _buffer = init_vector<int>(info.level()); break;
                case WireFormatLite::CPPTYPE_INT64:
                    _buffer = init_vector<int64_t>(info.level()); break;
                case WireFormatLite::CPPTYPE_UINT64:
                    _buffer = init_vector<uint64_t>(info.level()); break;
                case WireFormatLite::CPPTYPE_DOUBLE:
                    _buffer = init_vector<double>(info.level()); break;
                case WireFormatLite::CPPTYPE_STRING:
                    _buffer = init_vector<std::string>(info.level()); break;
                case WireFormatLite::CPPTYPE_MESSAGE:
                default:
                    std::cerr << "Unknown/Unsupported field type " << info.field_type() << std::endl;
                    assert(false);
            }
            if (!_meta->ReadVarint32(&_last_tag)) {
                _last_tag = UINT_MAX;
            }
        }

        // now _buffer is allocated and zeroed!
    }

    bool decode_32(uint32_t *buf) {
        switch(info.field_type()) {
            case WireFormatLite::TYPE_FLOAT:
                WireFormatLite::ReadPrimitive<float, WireFormatLite::TYPE_FLOAT>(_data, (float*)buf); break;
            case WireFormatLite::TYPE_INT32:
                WireFormatLite::ReadPrimitive<int32_t, WireFormatLite::TYPE_INT32>(_data, (int32_t*)buf); break;
            case WireFormatLite::TYPE_SINT32:
                WireFormatLite::ReadPrimitive<int32_t, WireFormatLite::TYPE_SINT32>(_data, (int32_t*)buf); break;
            case WireFormatLite::TYPE_SFIXED32:
                WireFormatLite::ReadPrimitive<int32_t, WireFormatLite::TYPE_SFIXED32>(_data, (int32_t*)buf); break;
            case WireFormatLite::TYPE_FIXED32:
                WireFormatLite::ReadPrimitive<uint32_t, WireFormatLite::TYPE_FIXED32>(_data, (uint32_t*)buf); break;
            case WireFormatLite::TYPE_UINT32:
                WireFormatLite::ReadPrimitive<uint32_t, WireFormatLite::TYPE_UINT32>(_data, (uint32_t*)buf); break;
            case WireFormatLite::TYPE_ENUM:
                WireFormatLite::ReadPrimitive<int, WireFormatLite::TYPE_ENUM>(_data, (int*)buf); break;
            case WireFormatLite::TYPE_BOOL:
                WireFormatLite::ReadPrimitive<bool, WireFormatLite::TYPE_BOOL>(_data, (bool*)buf); break;
            default:
                std::cerr << "Unknown 32 bit field type " << info.field_type() << std::endl;
                assert(false);
        }
        return true;
    }
    
    bool decode_64(uint64_t *buf) {
        switch(info.field_type()) {
            case WireFormatLite::TYPE_DOUBLE:
                WireFormatLite::ReadPrimitive<double, WireFormatLite::TYPE_DOUBLE>(_data, (double*)buf); break;
            case WireFormatLite::TYPE_INT64:
                WireFormatLite::ReadPrimitive<int64_t, WireFormatLite::TYPE_INT64>(_data, (int64_t*)buf); break;
            case WireFormatLite::TYPE_SINT64:
                WireFormatLite::ReadPrimitive<int64_t, WireFormatLite::TYPE_SINT64>(_data, (int64_t*)buf); break;
            case WireFormatLite::TYPE_SFIXED64:
                WireFormatLite::ReadPrimitive<int64_t, WireFormatLite::TYPE_SFIXED64>(_data, (int64_t*)buf); break;
            case WireFormatLite::TYPE_FIXED64:
                WireFormatLite::ReadPrimitive<uint64_t, WireFormatLite::TYPE_FIXED64>(_data, (uint64_t*)buf); break;
            case WireFormatLite::TYPE_UINT64:
                WireFormatLite::ReadPrimitive<uint64_t, WireFormatLite::TYPE_UINT64>(_data, (uint64_t*)buf); break;
            default:
                std::cerr << "Unknown 64 bit field type " << info.field_type() << std::endl;
                assert(false);
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
    void decode_into(std::vector<std::vector<T>> &v, int rl) {
        if (rl == 0 || rl == 1) {
            assert(v.empty() or rl == 1);
            v.push_back(std::vector<T>());
            rl = 1;
        }
        decode_into(v[v.size()-1], rl - 1);
    }

    void decode_into(std::vector<std::string> &v, int rl) {
        assert(rl == 0 || rl == 1);
        std::string b;
        assert(decode_string(b));
        v.push_back(b);
    }

    template<typename T>
    void decode_into(std::vector<T> &v, int rl) {
        assert(rl == 0 || rl == 1);
        if (_buffersize == 4) {
            uint32_t b;
            assert(decode_32(&b));
            v.push_back(*reinterpret_cast<T*>(&b));
        } else if (_buffersize == 8) {
            uint64_t b;
            assert(decode_64(&b));
            v.push_back(*reinterpret_cast<T*>(&b));
        } else {
            assert(false);
        }
    }

    template<typename T> 
    bool vector_filler() {
        T & v = *((T*) _buffer);
        v.clear();
        uint32_t level = info.level();
        bool first = true;
        while (true) {
            if (_last_tag == UINT32_MAX) return false;
            uint32_t dl_rl = _last_tag; // look at the last read tag
            uint32_t RL_M = level == 1 ? 2 : 4;
            uint32_t rl = dl_rl / RL_M;
            uint32_t dl = dl_rl % RL_M;
            //std::cout << "L " << level << " RL " << rl << " DL " << dl << std::endl;
            //std::cerr << "DLRL " << dl_rl << std::endl;
            if (dl_rl == 0) {
                if (first) {
                    //std::cout << i << ":" << "NULL" << std::endl;
                    if (!_meta->ReadVarint32(&_last_tag)) _last_tag = UINT32_MAX; // look at the next tag
                    break; // no fields in this event
                } else {
                    break; // no more fields in this event
                }
            } else if (rl == 0) {
                if (first) {
                    if (dl == level) {
                        decode_into(v, rl);
                    }
                    if (!_meta->ReadVarint32(&_last_tag)) {
                        _last_tag = UINT32_MAX; // look at the next tag
                        break;
                    }
                } else {
                    // more than one field read, but this one belongs to the next event
                    // - leave tag in place
                    break;
                }
            } else {
                if (dl == level) {
                    decode_into(v, rl);
                }
                if (!_meta->ReadVarint32(&_last_tag)) {
                    _last_tag = UINT32_MAX; // look at the next tag
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
                    
    template<typename T> bool vector_filler_lvl(int level) {
        switch(level) {
            case 1: return vector_filler<std::vector<T>>();
            case 2: return vector_filler<std::vector<std::vector<T>>>();
            case 3: return vector_filler<std::vector<std::vector<std::vector<T>>>>();
            case 4: return vector_filler<std::vector<std::vector<std::vector<std::vector<T>>>>>();
            default: assert(false);
        }
        return false;
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
        } else {
            switch(WireFormatLite::FieldTypeToCppType(WireFormatLite::FieldType(info.field_type()))) {
                case WireFormatLite::CPPTYPE_INT32:
                    if(!vector_filler_lvl<int32_t>(level)) return false; break;
                case WireFormatLite::CPPTYPE_UINT32:
                    if(!vector_filler_lvl<uint32_t>(level)) return false; break;
                case WireFormatLite::CPPTYPE_FLOAT:
                    if(!vector_filler_lvl<float>(level)) return false; break;
                case WireFormatLite::CPPTYPE_BOOL:
                    if(!vector_filler_lvl<bool>(level)) return false; break;
                case WireFormatLite::CPPTYPE_ENUM:
                    if(!vector_filler_lvl<int>(level)) return false; break;
                case WireFormatLite::CPPTYPE_INT64:
                    if(!vector_filler_lvl<int64_t>(level)) return false; break;
                case WireFormatLite::CPPTYPE_UINT64:
                    if(!vector_filler_lvl<uint64_t>(level)) return false; break;
                case WireFormatLite::CPPTYPE_DOUBLE:
                    if(!vector_filler_lvl<double>(level)) return false; break;
                case WireFormatLite::CPPTYPE_STRING:
                    if(!vector_filler_lvl<std::string>(level)) return false; break;
                case WireFormatLite::CPPTYPE_MESSAGE:
                default:
                    std::cerr << "Unknown/Unsupported field type " << info.field_type() << std::endl;
                    assert(false);
            }
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
    TTree * tree = new TTree("composed", "Composed Tree");

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
    
