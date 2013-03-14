#include <TFile.h>
#include <TKey.h>
#include <TChain.h>
#include <TTree.h>
#include <TLeaf.h>
#include <TEmulatedCollectionProxy.h>
#include <TInterpreter.h>

#include <iostream>

#include <sys/types.h>
#include <sys/stat.h>

#include <fcntl.h>
#include <ftw.h>
#include <libgen.h>
#include <getopt.h>
#include <stdlib.h>
#include <string.h>

#include <google/protobuf/io/zero_copy_stream_impl.h>
#include <google/protobuf/io/gzip_stream.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/wire_format_lite.h>

#include "drillbit.pb.h"

using google::protobuf::io::FileOutputStream;
using google::protobuf::io::GzipOutputStream;
using google::protobuf::io::CodedOutputStream;
using google::protobuf::FieldDescriptor;
using google::protobuf::internal::WireFormatLite;

// Set by getopt
static int verbose;

std::string remove_vector(std::string type) {
    std::string res = type.substr(7, type.size()-8); // 7 = len("vector<"), 8 is that - ">"
    while (res[res.size()-1] == ' ') res = res.substr(0, res.size()-1); // rstrip
    return res;
}

void write_out_32(CodedOutputStream &o, uint32_t v) {
    o.WriteVarint32(v);
}
void write_out_64(CodedOutputStream &o, uint64_t v) {
    o.WriteVarint64(v);
}
void write_out_f32(CodedOutputStream &o, float v) {
    o.WriteLittleEndian32(WireFormatLite::EncodeFloat(v));
}
void write_out_f64(CodedOutputStream &o, double v) {
    o.WriteLittleEndian64(WireFormatLite::EncodeDouble(v));
}

void write_out_type(CodedOutputStream &o, Bool_t v) {write_out_32(o, v);}
void write_out_type(CodedOutputStream &o, int v) {write_out_32(o, v);}
void write_out_type(CodedOutputStream &o, short v) {write_out_32(o, v);}
void write_out_type(CodedOutputStream &o, unsigned int v) {write_out_32(o, v);}
void write_out_type(CodedOutputStream &o, unsigned short v) {write_out_32(o, v);}
void write_out_type(CodedOutputStream &o, float v) { write_out_f32(o, v); }
void write_out_type(CodedOutputStream &o, double v) { write_out_f64(o, v); }
void write_out_type(CodedOutputStream &o, std::string v) { 
    o.WriteVarint32(v.size());
    o.WriteString(v);
}

template<typename T> FieldDescriptor::Type get_field_type() {
    if (std::is_same<T, int16_t>::value) {
        return FieldDescriptor::TYPE_INT32;
    } else if (std::is_same<T, Char_t>::value) {
        return FieldDescriptor::TYPE_UINT32;
    } else if (std::is_same<T, uint16_t>::value) {
        return FieldDescriptor::TYPE_UINT32;
    } else if (std::is_same<T, int32_t>::value) {
        return FieldDescriptor::TYPE_INT32;
    } else if (std::is_same<T, uint32_t>::value) {
        return FieldDescriptor::TYPE_UINT32; 
    } else if (std::is_same<T, int64_t>::value) {
        return FieldDescriptor::TYPE_INT64;
    } else if (std::is_same<T, uint64_t>::value) {
        return FieldDescriptor::TYPE_UINT64;
    } else if (std::is_same<T, float>::value) {
        return FieldDescriptor::TYPE_FLOAT;
    } else if (std::is_same<T, double>::value) {
        return FieldDescriptor::TYPE_DOUBLE;
    } else if (std::is_same<T, bool>::value) {
        return FieldDescriptor::TYPE_BOOL;
    } else if (std::is_same<T, std::string>::value) {
        return FieldDescriptor::TYPE_STRING;
    }
}

template <typename T>
void dump_required_lvl0(TLeaf &leaf, CodedOutputStream &o) {
    std::cout << "Dump " << leaf.GetName() << std::endl;
    auto *branch = leaf.GetBranch();

    T data;
    leaf.SetAddress(&data);
    int entries = branch->GetEntries();
    for (int i = 0; i < entries; i++) { 
        branch->GetEntry(i);
        write_out_type(o, data);
    }
}


template <typename T>
void dump_required_lvl1_array(TLeaf &leaf, CodedOutputStream &o, CodedOutputStream &o2) {
    const int DL = 1; // definition level multiplier
    const int RL = 2; // repetition level multiplier
    
    auto *branch = leaf.GetBranch();

    const auto length = leaf.GetLen();
    std::cout << "Dump array: " << leaf.GetName() << " " << leaf.GetTypeName() << "[" << length << "]" << std::endl;
    
    T *data = new T[length];
    
    leaf.SetAddress(data);
    
    int entries = branch->GetEntries();
    for (int i = 0; i < entries; i++) {
        branch->GetEntry(i);
        for (int j = 0; j < length; j++) {
            int dl = 1;
            int rl = (j > 0 ? 1 : 0);
            write_out_32(o2, dl*DL + rl*RL);
            write_out_type(o, data[j]);
        }
    }
    
    delete [] data;
}

template <typename T>
void dump_required_lvl1(TLeaf &leaf, CodedOutputStream &o, CodedOutputStream &o2) {
    const int DL = 1; // definition level multiplier
    const int RL = 2; // repetition level multiplier
    std::cout << "Dump vector: " << leaf.GetName() << " " << leaf.GetTypeName() << std::endl;
    auto *branch = leaf.GetBranch();

    std::vector<T> *data = NULL;
    leaf.SetAddress(&data);
    int entries = branch->GetEntries();
    for (int i = 0; i < entries; i++) { 
        branch->GetEntry(i);
        if (data->size() == 0) {
            write_out_32(o2, DL*0 + RL*0);
        }
        for (int j = 0; j < data->size(); j++) {
            int dl = 1;
            int rl = (j > 0 ? 1 : 0);
            write_out_32(o2, dl*DL + rl*RL);
            write_out_type(o, data->at(j));
        }
    }
}

template <typename T>
void dump_required_lvl2(TLeaf &leaf, CodedOutputStream &o, CodedOutputStream &o2) {
    const int DL = 1; // definition level multiplier
    const int RL = 4; // repetition level multiplier

    std::cout << "Dump vector vector: " << leaf.GetName() << " " << leaf.GetTypeName() << std::endl;
    auto * branch = leaf.GetBranch();

    std::vector<std::vector<T> > *data = NULL;
    leaf.SetAddress(&data);
    int entries = branch->GetEntries();
    for (int i = 0; i < entries; i++) { 
        branch->GetEntry(i);
        if (data->size() == 0) {
            write_out_32(o2, DL*0 + RL*0);
        }
        for (int j = 0; j < data->size(); j++) {
            if (data->at(j).size() == 0) {
                int dl = 1;
                int rl = (j > 0 ? 1 : 0);
                write_out_32(o2, dl*DL + rl*RL);
            }
            for (int k = 0; k < data->at(j).size(); k++) {
                int dl = 2;
                int rl = (k > 0 ? 2 : (j > 0 ? 1 : 0));
                write_out_32(o2, dl*DL + rl*RL);
                write_out_type(o, data->at(j).at(k));
            }
        }
    }
}

template <typename T>
void dump_required_lvl3(TLeaf &leaf, CodedOutputStream &o, CodedOutputStream &o2) {
    const int DL = 1; // definition level multiplier
    const int RL = 4; // repetition level multiplier

    std::cout << "Dump vector vector vector: " << leaf.GetName() << " " << leaf.GetTypeName() << std::endl;
    auto *branch = leaf.GetBranch();

    std::vector<std::vector<std::vector<T> > > *data = NULL;
    leaf.SetAddress(&data);
    int entries = branch->GetEntries();
    for (int i = 0; i < entries; i++) { 
        branch->GetEntry(i);
        if (data->size() == 0) {
            write_out_32(o2, DL*0 + RL*0);
        }
        for (int j = 0; j < data->size(); j++) {
            if (data->at(j).size() == 0) {
                int dl = 1;
                int rl = (j == 0) ? 0 : 1;
                write_out_32(o2, dl*DL + rl*RL);
            }
            for (int k = 0; k < data->at(j).size(); k++) {
                if (data->at(j).at(k).size() == 0) {
                    int dl = 2;
                    int rl = (k > 0 ? 2 : (j > 0 ? 1 : 0));
                    write_out_32(o2, dl*DL + rl*RL);
                }
                for (int l = 0; l < data->at(j).at(k).size(); l++) {
                    int dl = 3;
                    int rl = (l > 0 ? 3 : (k > 0 ? 2 : (j > 0 ? 1 : 0)));
                    write_out_32(o2, dl*DL + rl*RL);
                    write_out_type(o, data->at(j).at(k).at(l));
                }
            }
        }
    }
}

template <typename T>
void dump_required(int level, TLeaf &leaf, CodedOutputStream &o, CodedOutputStream &o2) {
    StripeInfo info;
    info.set_stripe_version(1);
    info.set_level(level);
    info.set_field_type(get_field_type<T>());
    info.set_root_name(leaf.GetName());
    info.set_root_type(leaf.GetTypeName());
    o2.WriteVarint32(info.ByteSize());
    info.SerializeToCodedStream(&o2);
    switch (level) {
        case 0:
            if (leaf.GetLen() != 1) {
                dump_required_lvl1_array<T>(leaf, o, o2);
                break;
            }
            dump_required_lvl0<T>(leaf, o);
            break;
        case 1:
            dump_required_lvl1<T>(leaf, o, o2);
            break;
        case 2:
            dump_required_lvl2<T>(leaf, o, o2);
            break;
        case 3:
            dump_required_lvl3<T>(leaf, o, o2);
            break;
        default:
            std::cerr << "The level is too damn high!" << std::endl;
            assert(level < 4);
            break;
    }
}

//'vector<double>', 'vector<float>', 'vector<int>', 'vector<short>', 'vector<unsigned int>', 'vector<unsigned short>',
// 'vector<vector<double> >', 'vector<vector<float> >', 'vector<vector<int> >', 'vector<vector<string> >', 
// 'vector<vector<vector<float> > >', 'vector<vector<vector<int> > >'

static char dictionary_tmpdir[] = "root2stripes-dicts-XXXXXX";

int deletefile(const char *fpath, const struct stat *sb, int typeflag,
               struct FTW *ftwbuf) {
    switch (typeflag) {
    case FTW_F:
        unlink(fpath);
        break;
    case FTW_D:
    case FTW_DP:
        rmdir(fpath);
        break;
    default:
        break;
    }
    return 0;
}

void cleanup_root_dictionaries() {
    std::cout << "Removing generated ROOT dictionaries" << std::endl;
    nftw(dictionary_tmpdir, deletefile, 10, FTW_MOUNT | FTW_PHYS | FTW_DEPTH);
}

// Generate dictionaries required to read `tree`.
void ensure_dictionaries(TTree *tree) {
    char *orig_dir = get_current_dir_name();
    
    mkdtemp(dictionary_tmpdir);
    chdir(dictionary_tmpdir);

    atexit(cleanup_root_dictionaries);

    for (int li = 0; li < tree->GetListOfLeaves()->GetEntries(); li++) {
        TLeaf *l = (TLeaf*) tree->GetListOfLeaves()->At(li);
        
        TClass* claim = TClass::GetClass(l->GetTypeName());
        if (claim && claim->GetCollectionProxy() &&
            dynamic_cast<TEmulatedCollectionProxy*>(claim->GetCollectionProxy())) {
            // Only executed if the dictionary isn't currently present
            std::cout << "Generating dictionary for " << l->GetTypeName() << std::endl;
            gInterpreter->GenerateDictionary(l->GetTypeName());
        }
    }
    
    chdir(orig_dir);
    free(static_cast<void*>(orig_dir));
}

void dump_leaf(const char *outdir, TLeaf &leaf, TTree *tree) {
    GzipOutputStream::Options options;
    options.compression_level = 1;
    
    // Open data file
    std::string fn = std::string(outdir) + "/" + leaf.GetName() + ".dit";
    auto fd = open(fn.c_str(), O_CREAT | O_TRUNC | O_RDWR, S_IRUSR | S_IWUSR);
    assert(fd != -1);
    FileOutputStream fstream(fd);
    GzipOutputStream zstream(&fstream, options);


    // Open meta file
    std::string mfn = fn + "m";
    auto mfd = open(mfn.c_str(), O_CREAT | O_TRUNC | O_RDWR, S_IRUSR | S_IWUSR);
    assert(mfd != -1);
    FileOutputStream meta_fstream(mfd);
    GzipOutputStream meta_zstream(&meta_fstream, options);
    
    { // Coded stream block 
        CodedOutputStream o(&zstream);
        CodedOutputStream o2(&meta_zstream);

        // determine level and type name
        int level = 0;
        std::string tn = leaf.GetTypeName();
        while (tn.substr(0,6) == "vector") {
            level = level + 1;
            tn = remove_vector(tn);
        }

        if (tn == "double") {
            dump_required<double>(level, leaf, o, o2);
        } else if (tn == "float") {
            dump_required<float>(level, leaf, o, o2);
        } else if (tn == "int") {
            dump_required<int>(level, leaf, o, o2);
        } else if (tn == "short" || tn == "Short_t") {
            dump_required<short>(level, leaf, o, o2);
        } else if (tn == "unsigned int") {
            dump_required<unsigned int>(level, leaf, o, o2);
        } else if (tn == "unsigned short") {
            dump_required<unsigned short>(level, leaf, o, o2);
        } else if (tn == "Float_t") {
            dump_required<Float_t>(level, leaf, o, o2);
        } else if (tn == "Bool_t") {
            dump_required<Bool_t>(level, leaf, o, o2);
        } else if (tn == "Char_t") {
            dump_required<Char_t>(level, leaf, o, o2);
        } else if (tn == "Double_t") {
            dump_required<Double_t>(level, leaf, o, o2);
        } else if (tn == "Int_t") {
            dump_required<Int_t>(level, leaf, o, o2);
        } else if (tn == "UInt_t") {
            dump_required<UInt_t>(level, leaf, o, o2);
        } else if (tn == "string") {
            dump_required<std::string>(level, leaf, o, o2);
        } else {
            std::cerr << "Unknown branch type: " << tn << std::endl;
            assert(false);
        }
    }
    meta_zstream.Close();
    zstream.Close();
    meta_fstream.Close();
    fstream.Close();
}

void dump_tree(TTree *tree, const char *outdir) {
    if (lstat(outdir, NULL) == -1) {
        mkdir(outdir, 0777);
    }
    
    ensure_dictionaries(tree);
        
    for(int li = 0; li < tree->GetListOfLeaves()->GetEntries(); li++) {
        TLeaf &leaf = *dynamic_cast<TLeaf*>(tree->GetListOfLeaves()->At(li));
        dump_leaf(outdir, leaf, tree);
    }
}

TTree* get_largest_tree(TFile &file) {
    auto *keys = file.GetListOfKeys();
    
    Long64_t largest_size = 0;
    TTree *largest_tree = NULL;
    
    for(int li = 0; li < keys->GetEntries(); li++) {
        TKey *l = dynamic_cast<TKey*>(keys->At(li));
        if (std::string("TTree") != l->GetClassName())
            continue;
        
        TTree *tree = dynamic_cast<TTree*>(l->ReadObj());
        
        auto size = tree->GetTotBytes();
        
        if (size > largest_size) {
            largest_tree = tree;
            largest_size = size;
        }
    }
    return largest_tree;
}

void dump_file(const char *filename, const char *treename, const char *outdir) {
    TFile file(filename);
    TTree *tree = NULL;
    
    if (treename == NULL) {
        if (verbose)
            std::cout << "Tree not specified, finding largest tree" << std::endl;
        tree = get_largest_tree(file);
        if (tree == NULL) {
            std::cout << "No Trees found inside " << filename << std::endl;
            exit(-1);
        }
    } else {
        file.GetObject(treename, tree);
        if (tree == NULL) {
            std::cout << "Tree (" << treename << ") not found in file (" << filename << ")." << std::endl;
            exit(-1);
        }
    }
    dump_tree(tree, outdir);
}

void usage(char * const *argv) {
    std::cout << "usage: " << basename(argv[0]) << " [-h|--help] [-t treename] [file]..." << std::endl;
    exit(-1);
}

int main(int argc, char * const *argv) {
    int c = 0;
    
    const char *treename = NULL,
               *outdir = "dit/";
    
    // Parse options
    while (true) {
        static struct option long_options[] = {
            {"verbose",   no_argument,       &verbose, 1},
            {"help",      no_argument,       0, 'h'},
            {"tree",      required_argument, 0, 't'},
            {"directory", required_argument, 0, 'D'},
            {0, 0, 0, 0}
        };

        int option_index = 0;

        c = getopt_long(argc, argv, "ht:D:", long_options, &option_index);

        // End of options
        if (c == -1)
            break;

        switch (c)
        {
        case 0:
            // Option set a flag, do nothing.
            if (long_options[option_index].flag != 0)
                break;
            // Don't know when this code path is taken
            std::cout << "option " << long_options[option_index].name;
            if (optarg)
                std::cout << " with arg %s";
            std::cout << std::endl;
            break;

        case 'h': usage(argv); break;
        case 't': treename = optarg; break;
        case 'D': outdir = optarg; break;
        

        default:
            abort();
        }
    }

    if (optind < argc) {
        while (optind < argc)
            dump_file(argv[optind++], treename, outdir);
    } else {
        usage(argv);
    }

    return 0;
}
