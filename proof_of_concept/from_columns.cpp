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

using namespace std;

using google::protobuf::io::ArrayInputStream;
using google::protobuf::io::GzipInputStream;
using google::protobuf::io::CodedInputStream;

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

void compose_event(const std::vector<std::string>& dit_files, const std::vector<std::string>& ditm_files) {
    std::vector<std::pair<void*,size_t> > dit, ditm;
    std::vector<ArrayInputStream*> id, im;
    std::vector<GzipInputStream*> zd, zm;
    std::vector<CodedInputStream*> cd, cm;
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


    std::vector<uint32_t> levels;
    for (int i = 0; i < dit_files.size(); i++) {
        uint32_t level = 0;
        cm[i]->ReadVarint32(&level);
        levels.push_back(level);
        if (level > 0) {
            cm[i]->ReadVarint32(&level);
        }
    }

    int event_number = 0;
    while(event_number < 10000) {
        for (int i = 0; i < dit_files.size(); i++) {
            if (levels[i] == 0) {
                uint32_t v;
                cd[i]->ReadVarint32(&v);
                write(1, &i, sizeof(int));
                write(1, &v, sizeof(v));
            } else if (levels[i] == 1) {
                while (true) {
                    uint32_t dl_rl;
                    cm[i]->ReadVarint32(&dl_rl);
                    if (dl_rl % 2 != 0) {
                        uint32_t v;
                        cd[i]->ReadVarint32(&v);
                        write(1, &i, sizeof(int));
                        write(1, &v, sizeof(v));
                    } else if (dl_rl == 0) {
                        break;
                    }
                }
            }
        }
        std::cerr << event_number << std::endl;
        event_number++;
    }
    
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
    std::vector<std::string> dit_files;
    std::vector<std::string> ditm_files;
    for(int i = 1; i < argc; i++) {
        std::string f = argv[i];
        dit_files.push_back(f);
        ditm_files.push_back(f+"m");
    }
    compose_event(dit_files, ditm_files);
    return 0;
}
    
