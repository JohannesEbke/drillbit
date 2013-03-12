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

using namespace std;

using google::protobuf::io::FileInputStream;
using google::protobuf::io::ArrayInputStream;
using google::protobuf::io::GzipInputStream;
using google::protobuf::io::CodedInputStream;
using google::protobuf::FieldDescriptor;
using google::protobuf::internal::WireFormatLite;

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

void deal_with_data(int i, CodedInputStream * in, WireFormatLite::WireType wiretype) {
    uint32_t v32;
    uint64_t v64;
    std::string s;
    switch (wiretype) {
        case WireFormatLite::WIRETYPE_VARINT:
            assert(in->ReadVarint32(&v32));
            //std::cout << i << ":" << v << std::endl;
            //write(1, &i, sizeof(int));
            //write(1, &v, sizeof(v));
            sum += v32;
            break;
        case WireFormatLite::WIRETYPE_FIXED64:
            assert(in->ReadLittleEndian64(&v64));
            sum += v64;
            break;
        case WireFormatLite::WIRETYPE_FIXED32:
            assert(in->ReadLittleEndian32(&v32));
            sum += v32;
            break;
        case WireFormatLite::WIRETYPE_LENGTH_DELIMITED:
            assert(in->ReadVarint32(&v32));
            assert(in->ReadString(&s, v32));
            sum += v32;
            break;
        default:
        //case WIRETYPE_LENGTH_DELIMITED:
        //case WIRETYPE_START_GROUP:
        //case WIRETYPE_END_GROUP:
            std::cout << "UNKNOWN WIRE TYPE " << wiretype << std::endl;
            assert(false);
    }
}

void compose_event(const std::vector<std::string>& dit_files, const std::vector<std::string>& ditm_files) {
    std::vector<std::pair<void*,size_t> > dit, ditm;
    std::vector<ArrayInputStream*> id, im;
    std::vector<GzipInputStream*> zd, zm;
    std::vector<CodedInputStream*> cd, cm;

#if 1 // this version seems to perform better in tests so far. 
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
#else
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
    std::cerr << "Looking up column metadata..." << std::endl;
    std::vector<uint32_t> levels;
    std::vector<uint32_t> next_event_count;
    std::vector<uint32_t> last_tags;
    std::vector<FieldDescriptor::Type> types;
    for (int i = 0; i < dit_files.size(); i++) {
        uint32_t level = 0;
        //std::cout << dit_files[i] << std::endl;
        assert(cm[i]->ReadVarint32(&level));
        levels.push_back(level);
        uint32_t field_type;
        assert(cm[i]->ReadVarint32(&field_type));
        types.push_back(FieldDescriptor::Type(field_type));
        // push back last tag
        next_event_count.push_back(0);
        if (level > 0) {
            assert(cm[i]->ReadVarint32(&level));
            last_tags.push_back(level);
        } else {
            last_tags.push_back(0);
        }
    }
#if 0
    std::cerr << "Just dumping the data out there in byte-sized chunks..." << std::endl;
    for (int i = 0; i < dit_files.size(); i++) {
        uint32_t v;
        while(cm[i]->ReadRaw(&v, sizeof(v))){
            //write(1, &v, sizeof(v));
        };
        while(cd[i]->ReadRaw(&v, sizeof(v))){
            //write(1, &v, sizeof(v));
        };
    }
#else
    std::cerr << "Run over all events and collate them..." << std::endl;
    for (int event_number = 0; event_number < 10000; event_number++) {
        //std::cerr << "Event start..." << std::endl;
        //std::cout << event_number << std::endl;
        //std::cerr << event_number << std::endl;
        for (int i = 0; i < dit_files.size(); i++) {

            auto wiretype = WireFormatLite::WireTypeForFieldType(WireFormatLite::FieldType(types[i]));
            int level = levels[i];
            
            if (level == 0) {
                //std::cerr << "Level 0" << std::endl;
                deal_with_data(i, cd[i], wiretype);
            } else if (level > 0) {
                //std::cout << "Field "<< dit_files[i] << std::endl;
                bool first = true;
                while (true) {
                    uint32_t dl_rl = last_tags[i]; // look at the last read tag
                    uint32_t RL_M = level == 1 ? 2 : 4;
                    uint32_t rl = dl_rl / RL_M;
                    uint32_t dl = dl_rl % RL_M;
                    //std::cout << "L " << level << " RL " << rl << " DL " << dl << std::endl;

#if 1
                    if (first and rl == 0) {
                        //std::cout << "NEXT EVENT " << dl_rl << std::endl;
                        next_event_count[i]++;
                    }
                    assert(next_event_count[i] == event_number+1);
#endif

                    //std::cerr << "DLRL " << dl_rl << std::endl;
                    if (dl_rl == 0) {
                        if (first) {
                            //std::cout << i << ":" << "NULL" << std::endl;
                            if (event_number != 9999) assert(cm[i]->ReadVarint32(&(last_tags[i]))); // look at the next tag
                            break; // no fields in this event
                        } else {
                            break; // no fields in this event
                        }
                    } else if (rl == 0) {
                        if (first) {
                            if (dl == level) deal_with_data(i, cd[i], wiretype);
                            if (event_number != 9999) assert(cm[i]->ReadVarint32(&(last_tags[i])));// if not break, look at the next tag
                        } else {
                            // more than one field read, but this one belongs to the next event
                            // - leave tag in place
                            break;
                        }
                    } else {
                        if (dl == level) deal_with_data(i, cd[i], wiretype);
                        if (event_number != 9999) assert(cm[i]->ReadVarint32(&(last_tags[i])));// if not break, look at the next tag
                    }
                    first = false;
                }
            }
        }

    }
#endif
    //for (int i = 0; i < dit_files.size(); i++) {
        //free(dit[i]);
        //free(ditm[i]);
    //}

    /*
    for(int li = 0; li < tree->GetListOfLeaves()->GetEntries(); li++) {
        TLeaf* l = (TLeaf*) tree->GetListOfLeaves()->At(li);

        // Open data file
        std::string fn = std::string("dit/") + l->GetName() + ".dit";
        auto fd = open(fn.c_str(), O_CREAT | O_TRUNC | O_RDWR, S_IRUSR | S_IWUSR);
        assert(fd != -1);
        FileOutputStream fstream(fd);
        fstream.SetCloseOnDelete(true);
        GzipOutputStream zstream(&fstream, options);
        CodedOutputStream o(&zstream);

        // Open meta file
        std::string mfn = fn + "m";
        auto mfd = open(mfn.c_str(), O_CREAT | O_TRUNC | O_RDWR, S_IRUSR | S_IWUSR);
        assert(mfd != -1);
        FileOutputStream meta_fstream(mfd);
        meta_fstream.SetCloseOnDelete(true);
        GzipOutputStream meta_zstream(&meta_fstream, options);
        CodedOutputStream o2(&meta_zstream);

        // determine level and type name
        int level = 0;
        std::string tn = l->GetTypeName();
        while (tn.substr(0,6) == "vector") {
            level = level + 1;
            tn = remove_vector(tn);
        }

        if (tn == "double") {
            dump_required<double>(level, tree, *l, o, o2);
        } else if (tn == "float") {
            dump_required<float>(level, tree, *l, o, o2);
        } else if (tn == "int") {
            dump_required<int>(level, tree, *l, o, o2);
        } else if (tn == "short") {
            dump_required<short>(level, tree, *l, o, o2);
        } else if (tn == "unsigned int") {
            dump_required<unsigned int>(level, tree, *l, o, o2);
        } else if (tn == "unsigned short") {
            dump_required<unsigned short>(level, tree, *l, o, o2);
        } else if (tn == "Float_t") {
            dump_required<Float_t>(level, tree, *l, o, o2);
        } else if (tn == "Bool_t") {
            dump_required<Bool_t>(level, tree, *l, o, o2);
        } else if (tn == "Double_t") {
            dump_required<Double_t>(level, tree, *l, o, o2);
        } else if (tn == "Int_t") {
            dump_required<Int_t>(level, tree, *l, o, o2);
        } else if (tn == "UInt_t") {
            dump_required<UInt_t>(level, tree, *l, o, o2);
        } else if (tn == "string") {
            dump_required<std::string>(level, tree, *l, o, o2);
        } else {
            std::cerr << "Unknown branch type: " << tn << std::endl;
            assert(false);
        }
    }*/
}


int main(int argc, const char ** argv) {
    sum = 0;
    std::vector<std::string> dit_files;
    std::vector<std::string> ditm_files;
    for(int i = 1; i < argc; i++) {
        std::string f = argv[i];
        dit_files.push_back(f);
        ditm_files.push_back(f+"m");
    }
    compose_event(dit_files, ditm_files);
    std::cout << sum << std::endl;
    return 0;
}
    
