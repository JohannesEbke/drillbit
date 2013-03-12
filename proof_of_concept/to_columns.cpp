#include <TTree.h>
#include <TLeaf.h>
#include <TFile.h>
#include <TChain.h>

#include <iostream>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>

#include <google/protobuf/io/zero_copy_stream_impl.h>
#include <google/protobuf/io/gzip_stream.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/descriptor.h>

using namespace std;

using google::protobuf::io::FileOutputStream;
using google::protobuf::io::GzipOutputStream;
using google::protobuf::io::CodedOutputStream;
using google::protobuf::FieldDescriptor;

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
    union {float f; uint32_t i;};
    f = v;
    o.WriteLittleEndian64(i);
}
void write_out_f64(CodedOutputStream &o, double v) {
    union {double f; uint64_t i;};
    f = v;
    o.WriteLittleEndian64(i);
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
void dump_required_lvl0(TTree * tree, TLeaf& leaf, CodedOutputStream &o) {
    std::cout << "Dump " << leaf.GetName() << std::endl;
    auto * branch = leaf.GetBranch();

    T data; 
    tree->SetBranchAddress(leaf.GetBranch()->GetName(), &data);
    int entries = tree->GetEntries();
    for (int i = 0; i < entries; i++) { 
        branch->GetEntry(i);
        write_out_type(o, data);
    }
}

template <typename T>
void dump_required_lvl1(TTree * tree, TLeaf& leaf, CodedOutputStream &o, CodedOutputStream &o2) {
    const int DL = 1; // definition level multiplier
    const int RL = 2; // repetition level multiplier
    std::cout << "Dump vector: " << leaf.GetName() << " " << leaf.GetTypeName() << std::endl;
    auto * branch = leaf.GetBranch();

    std::vector<T> * data = NULL;
    tree->SetBranchAddress(leaf.GetBranch()->GetName(), &data);
    int entries = tree->GetEntries();
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
void dump_required_lvl2(TTree * tree, TLeaf& leaf, CodedOutputStream &o, CodedOutputStream &o2) {
    const int DL = 1; // definition level multiplier
    const int RL = 4; // repetition level multiplier

    std::cout << "Dump vector vector: " << leaf.GetName() << " " << leaf.GetTypeName() << std::endl;
    auto * branch = leaf.GetBranch();

    std::vector<std::vector<T> > * data = NULL;
    tree->SetBranchAddress(leaf.GetBranch()->GetName(), &data);
    int entries = tree->GetEntries();
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
void dump_required_lvl3(TTree * tree, TLeaf& leaf, CodedOutputStream &o, CodedOutputStream &o2) {
    const int DL = 1; // definition level multiplier
    const int RL = 4; // repetition level multiplier

    std::cout << "Dump vector vector vector: " << leaf.GetName() << " " << leaf.GetTypeName() << std::endl;
    auto * branch = leaf.GetBranch();

    std::vector<std::vector<std::vector<T> > > * data = NULL;
    tree->SetBranchAddress(leaf.GetBranch()->GetName(), &data);
    int entries = tree->GetEntries();
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
void dump_required(int level, TTree * tree, TLeaf& leaf, CodedOutputStream &o, CodedOutputStream &o2) {
    o2.WriteVarint32(level);
    o2.WriteVarint32(get_field_type<T>());
    switch (level) {
        case 0:
            dump_required_lvl0<T>(tree, leaf, o);
            break;
        case 1:
            dump_required_lvl1<T>(tree, leaf, o, o2);
            break;
        case 2:
            dump_required_lvl2<T>(tree, leaf, o, o2);
            break;
        case 3:
            dump_required_lvl3<T>(tree, leaf, o, o2);
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

void dump_tree(TTree * tree) {
    GzipOutputStream::Options options;
    options.compression_level = 1;

    for(int li = 0; li < tree->GetListOfLeaves()->GetEntries(); li++) {
        TLeaf* l = (TLeaf*) tree->GetListOfLeaves()->At(li);

        // Open data file
        std::string fn = std::string("dit/") + l->GetName() + ".dit";
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
        }
        meta_zstream.Close();
        zstream.Close();
        meta_fstream.Close();
        fstream.Close();
    }
}

int main() {
    TFile f("ntup.root");
    TTree * t = (TTree*) f.Get("photon");
    dump_tree(t);
    return 0;
}
    
