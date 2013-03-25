#include <TFile.h>
#include <TKey.h>
#include <TChain.h>
#include <TTree.h>
#include <TLeaf.h>
#include <TEmulatedCollectionProxy.h>
#include <TInterpreter.h>
#include <TClassEdit.h>

#include <iostream>

#include <sys/types.h>
#include <sys/stat.h>

#include <fcntl.h>

#include <libgen.h>
#include <getopt.h>
#include <stdlib.h>
#include <string.h>
#if HAVE_PCRE
#include <pcre.h>
#endif
#include <fnmatch.h>

#include <google/protobuf/io/zero_copy_stream_impl.h>
#include <google/protobuf/io/gzip_stream.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/wire_format_lite_inl.h>

#include "drillbit.pb.h"
#include "root_dictionaries.h"

using google::protobuf::io::FileOutputStream;
using google::protobuf::io::GzipOutputStream;
using google::protobuf::io::CodedOutputStream;
using google::protobuf::FieldDescriptor;
using google::protobuf::internal::WireFormatLite;

using std::vector;
using std::string;
using std::cout;
using std::cerr;
using std::endl;

// Set by getopt
static int verbose;

// Remove one vector<...> from a ROOT type definition
string remove_vector(string type) {
    string res = type.substr(7, type.size()-8); // 7 = len("vector<"), 8 is that - ">"
    while (res[res.size()-1] == ' ') res = res.substr(0, res.size()-1); // rstrip
    return res;
}

namespace internal {
#define MAP(X, Y) \
    template<enum WireFormatLite::FieldType SpecifiedFieldType, typename CType> \
    typename std::enable_if<SpecifiedFieldType == WireFormatLite::TYPE_ ## X>::type \
    WriteOut(CType v, CodedOutputStream* o) { WireFormatLite::Write ## Y ## NoTag(v, o); };
    MAP(INT32, Int32);
    MAP(INT64, Int64);
    MAP(UINT32, UInt32);
    MAP(UINT64, UInt64);
    MAP(SINT32, SInt32);
    MAP(SINT64, SInt64);
    MAP(FIXED32, Fixed32);
    MAP(FIXED64, Fixed64);
    MAP(SFIXED32, SFixed32);
    MAP(SFIXED64, SFixed64);
    MAP(FLOAT, Float);
    MAP(DOUBLE, Double);
    MAP(BOOL, Bool);
    MAP(ENUM, Enum);
#undef MAP
    template <enum WireFormatLite::FieldType SpecifiedFieldType, typename CType>
    typename std::enable_if<SpecifiedFieldType == WireFormatLite::TYPE_STRING>::type 
    WriteOut(string v, CodedOutputStream *o) {
        o->WriteVarint32(v.size());
        o->WriteString(v);
    };
};

template <enum WireFormatLite::FieldType SpecdFieldType, typename CType>
class FieldWriter {
 public:
    CodedOutputStream *o;
    FieldWriter(CodedOutputStream *o) : o(o) {};
    void WriteOut(CType v) { return internal::WriteOut<SpecdFieldType,CType>(v, o); };
};

/*template <enum WireFormatLite::FieldType SpecifiedFieldType, int maxlevel, int level, typename T>
void RecursiveDump(T data, int repetition_level, CodedOutputStream *o, CodedOutputStream *o2) {
    const int DL = 1; // definition level multiplier
    const int RL = (maxlevel == 1) ? 2 : 4; // repetition level multiplier
    for (int l = 0; l < data.size(); l++) {
        int rl = (l > 0 ? level : repetition_level);
        o2->WriteVarint32(level*DL + rl*RL);
        if (level == maxlevel) {
            WriteOut<SpecifiedFieldType>(data.at(l), o);
        } else {
            RecursiveDump<SpecifiedFieldType, maxlevel, level+1>(data.at(l), rl, o, o2);
        }
    }
}*/

template <enum WireFormatLite::FieldType SpecifiedFieldType, typename T>
void dump_required_lvl0(TLeaf &leaf, CodedOutputStream &o) {
    if (verbose) cerr << "Dump " << leaf.GetName() << endl;
    auto *branch = leaf.GetBranch();

    T data;
    branch->SetAddress(&data);
    
    FieldWriter<SpecifiedFieldType, T> writer(&o);
    
    int entries = branch->GetEntries();
    for (int i = 0; i < entries; i++) { 
        branch->GetEntry(i);
        writer.WriteOut(data);
    }
}

template <enum WireFormatLite::FieldType SpecifiedFieldType, typename T>
void dump_required_lvl1_array(TLeaf &leaf, CodedOutputStream &o, CodedOutputStream &o2) {
    const int DL = 1; // definition level multiplier
    const int RL = 2; // repetition level multiplier
    
    auto *branch = leaf.GetBranch();

    const auto length = leaf.GetLen();
    if (verbose) cerr << "Dump array: " << leaf.GetName() << " " << leaf.GetTypeName() << "[" << length << "]" << endl;
    
    T *data = new T[length];
    branch->SetAddress(data); // Note: this should not be &data.
    
    FieldWriter<SpecifiedFieldType, T> writer(&o);
    
    int entries = branch->GetEntries();
    for (int i = 0; i < entries; i++) {
        branch->GetEntry(i);
        for (int j = 0; j < length; j++) {
            int dl = 1;
            int rl = (j > 0 ? 1 : 0);
            o2.WriteVarint32(dl*DL + rl*RL);
            writer.WriteOut(data[j]);
        }
    }
    
    delete [] data;
}

template <enum WireFormatLite::FieldType SpecifiedFieldType, typename T>
void dump_required_lvl1(TLeaf &leaf, CodedOutputStream &o, CodedOutputStream &o2) {
    const int DL = 1; // definition level multiplier
    const int RL = 2; // repetition level multiplier
    if (verbose) cerr << "Dump vector: " << leaf.GetName() << " " << leaf.GetTypeName() << endl;
    auto *branch = leaf.GetBranch();

    vector<T> *data = NULL;
    branch->SetAddress(&data);
    
    FieldWriter<SpecifiedFieldType, T> writer(&o);
    
    int entries = branch->GetEntries();
    for (int i = 0; i < entries; i++) { 
        branch->GetEntry(i);
        if (data->size() == 0) {
            o2.WriteVarint32(0*DL + 0*RL);
        } else {
            int rl = 0;
            for (auto j = data->cbegin(); j != data->cend(); j++) {
                o2.WriteVarint32(1*DL + rl*RL);
                writer.WriteOut(*j);
                rl = 1;
            }
        }
    }
}

template <enum WireFormatLite::FieldType SpecifiedFieldType, typename T>
void dump_required_lvl2(TLeaf &leaf, CodedOutputStream &o, CodedOutputStream &o2) {
    const int DL = 1; // definition level multiplier
    const int RL = 4; // repetition level multiplier

    if (verbose) cerr << "Dump vector vector: " << leaf.GetName() << " " << leaf.GetTypeName() << endl;
    auto * branch = leaf.GetBranch();

    vector<vector<T> > *data = NULL;
    branch->SetAddress(&data);
    
    FieldWriter<SpecifiedFieldType, T> writer(&o);
    
    int entries = branch->GetEntries();
    for (int i = 0; i < entries; i++) { 
        branch->GetEntry(i);
        if (data->empty()) {
            o2.WriteVarint32(DL*0 + RL*0);
        } else {
            int rl = 0;
            for (auto j = data->cbegin(); j != data->cend(); j++) {
                if (j->empty()) {
                    o2.WriteVarint32(1*DL + rl*RL);
                } else {
                    for (auto k = j->cbegin(); k != j->cend(); k++) {
                        o2.WriteVarint32(2*DL + rl*RL);
                        writer.WriteOut(*k);
                        rl = 2;
                    }
                }
                rl = 1;
            }
        }
    }
}


template <enum WireFormatLite::FieldType SpecifiedFieldType, typename T>
void dump_required_lvl3(TLeaf &leaf, CodedOutputStream &o, CodedOutputStream &o2) {
    const int DL = 1; // definition level multiplier
    const int RL = 4; // repetition level multiplier

    if (verbose) cerr << "Dump vector vector vector: " << leaf.GetName() << " " << leaf.GetTypeName() << endl;
    auto *branch = leaf.GetBranch();

    vector<vector<vector<T> > > *data = NULL;
    branch->SetAddress(&data);
    
    FieldWriter<SpecifiedFieldType, T> writer(&o);
    
    int entries = branch->GetEntries();
    for (int i = 0; i < entries; i++) { 
        branch->GetEntry(i);
        if (data->empty()) {
            o2.WriteVarint32(DL*0 + RL*0);
        } else {
            int rl = 0;
            for (auto j = data->cbegin(); j != data->cend(); j++) {
                if (j->empty()) {
                    o2.WriteVarint32(1*DL + rl*RL);
                } else {
                    for (auto k = j->cbegin(); k != j->cend(); k++) {
                        if (k->empty()) {
                            o2.WriteVarint32(2*DL + rl*RL);
                        } else {
                            for (auto l = k->cbegin(); l != k->cend(); l++) {
                                o2.WriteVarint32(3*DL + rl*RL);
                                writer.WriteOut(*l);
                                rl = 3;
                            }
                        }
                        rl = 2;
                    }
                }
                rl = 1;
            }
        }
    }
}

template <enum WireFormatLite::FieldType SpecifiedFieldType, typename T>
void dump_required(int level, TLeaf &leaf, CodedOutputStream &o, CodedOutputStream &o2) {
    StripeInfo info;
    info.set_stripe_version(1);
    info.set_level(level);
    info.set_field_type(SpecifiedFieldType);
    info.set_root_name(leaf.GetName());
    info.set_root_type(leaf.GetTypeName());
    o2.WriteVarint32(info.ByteSize());
    info.SerializeToCodedStream(&o2);
    switch (level) {
        case 0:
            dump_required_lvl0<SpecifiedFieldType, T>(leaf, o);
            break;
        case 1:
            dump_required_lvl1<SpecifiedFieldType, T>(leaf, o, o2);
            break;
        case 2:
            dump_required_lvl2<SpecifiedFieldType, T>(leaf, o, o2);
            break;
        case 3:
            dump_required_lvl3<SpecifiedFieldType, T>(leaf, o, o2);
            break;
        default:
            cerr << "The level is too damn high!" << endl;
            assert(level < 4);
            break;
    }
}


void dump_leaf(const char *outdir, TLeaf &leaf, TTree *tree) {
    ensure_dictionary(&leaf);

    GzipOutputStream::Options options;
    options.compression_level = 1;
    
    // Open data file
    string fn = string(outdir) + "/" + leaf.GetName() + ".dit";
    auto fd = open(fn.c_str(), O_CREAT | O_TRUNC | O_RDWR, S_IRUSR | S_IWUSR);
    assert(fd != -1);
    FileOutputStream fstream(fd);
    GzipOutputStream zstream(&fstream, options);


    // Open meta file
    string mfn = fn + "m";
    auto mfd = open(mfn.c_str(), O_CREAT | O_TRUNC | O_RDWR, S_IRUSR | S_IWUSR);
    assert(mfd != -1);
    FileOutputStream meta_fstream(mfd);
    GzipOutputStream meta_zstream(&meta_fstream, options);
    
    { // Coded stream block 
        CodedOutputStream o(&zstream);
        CodedOutputStream o2(&meta_zstream);

        // determine level and type name
        int level = 0;
        string tn = leaf.GetTypeName();
        while (tn.substr(0,6) == "vector") {
            level = level + 1;
            tn = remove_vector(tn);
        }
        
        // Resolve ROOT's "Int_t", etc into plain C++ types
        tn = TClassEdit::ResolveTypedef(tn.c_str(), true);

        // The integer types could also be coded as INT32 or FIXED32 or SFIXED32
        
        // Float types
        if (tn == "float") {
            dump_required<WireFormatLite::TYPE_FLOAT, float>(level, leaf, o, o2);
        } else if (tn == "double") {
            dump_required<WireFormatLite::TYPE_DOUBLE, double>(level, leaf, o, o2);
            
        // Misc types
        } else if (tn == "bool") {
            dump_required<WireFormatLite::TYPE_BOOL, bool>(level, leaf, o, o2);
        } else if (tn == "string") {
            dump_required<WireFormatLite::TYPE_STRING, string>(level, leaf, o, o2);
        
        // Int types
        } else if (tn == "char") {
            dump_required<WireFormatLite::TYPE_SINT32, char>(level, leaf, o, o2);
        } else if (tn == "short") {
            dump_required<WireFormatLite::TYPE_SINT32, short>(level, leaf, o, o2);
        } else if (tn == "int") {
            dump_required<WireFormatLite::TYPE_SINT32, int>(level, leaf, o, o2);
        } else if (tn == "long") {
            dump_required<WireFormatLite::TYPE_SINT32, long>(level, leaf, o, o2);
        } else if (tn == "long long") {
            dump_required<WireFormatLite::TYPE_SINT64, long long>(level, leaf, o, o2);
        
        // Unsigned Int types
        } else if (tn == "unsigned char") {
            dump_required<WireFormatLite::TYPE_UINT32, unsigned char>(level, leaf, o, o2);
        } else if (tn == "unsigned short") {
            dump_required<WireFormatLite::TYPE_UINT32, unsigned short>(level, leaf, o, o2);
        } else if (tn == "unsigned int") {
            dump_required<WireFormatLite::TYPE_UINT32, unsigned int>(level, leaf, o, o2);
        } else if (tn == "unsigned long") {
            dump_required<WireFormatLite::TYPE_UINT32, unsigned long>(level, leaf, o, o2);
        } else if (tn == "unsigned long long") {
            dump_required<WireFormatLite::TYPE_UINT64, unsigned long long>(level, leaf, o, o2);
            
        // Doom.
        } else {
            cerr << "Unknown branch type: " << tn << endl;
            assert(false);
        }
    }
    meta_zstream.Close();
    zstream.Close();
    meta_fstream.Close();
    fstream.Close();
    close(fd);
}

void dump_tree(TTree *tree, const char *outdir, const vector<string> fnmatch_patterns, const vector<string> regexp_patterns) {
    if (access(outdir, F_OK) == -1) {
        mkdir(outdir, 0777);
    }
    
#if HAVE_PCRE
    // Compile regexps
    vector<pcre*> regexps;
    for(int i = 0; i < regexp_patterns.size(); i++) {
        int erroroffset = 0;
        const char * error = NULL;
        pcre* regexp = pcre_compile(regexp_patterns[i].c_str(), 0, 
                        &error, &erroroffset, NULL);
        if (not regexp or error) {
            cerr << regexp_patterns[i] << endl;
            for(int j = 0; j < erroroffset; j++) cerr << " ";
            cerr << "^" << endl;
            cerr << "Error in regular expression: " << error << endl;
            return;
        }
        regexps.push_back(regexp);
    }
    if (regexps.empty() and fnmatch_patterns.empty()) ensure_dictionaries(tree);
#else
    if (fnmatch_patterns.empty()) ensure_dictionaries(tree);
#endif

    for(int li = 0; li < tree->GetListOfLeaves()->GetEntries(); li++) {
        TLeaf &leaf = *dynamic_cast<TLeaf*>(tree->GetListOfLeaves()->At(li));
        string name = leaf.GetName();

#if HAVE_PCRE
        bool process = (regexps.empty() and fnmatch_patterns.empty()) ? true : false;
        // Check regexps
        for (int j = 0; j < regexps.size(); j++) {
            int results[3] = {-1,-1,-1};
            int matched = pcre_exec(regexps[j], NULL, name.c_str(), name.size(), 0, PCRE_ANCHORED, results, 3);
            if (verbose) cerr << "Matching " << name << " to " << regexp_patterns[j] << " = " << matched << " / " << results[1] << endl;
            // look for full matches
            if (matched == 1 and results[1] == name.size()) { // results[1] contains the last byte of the match.
                process = true;
            }
        }
#else
        bool process = fnmatch_patterns.empty() ? true : false;
#endif
        // check fnmatch patterns
        for (int j = 0; j < fnmatch_patterns.size(); j++) {
            if(fnmatch(fnmatch_patterns[j].c_str(), name.c_str(), 0) == 0) {
                process = true;
            }
        }
        if (process) dump_leaf(outdir, leaf, tree);
    }
}

TTree* get_largest_tree(TFile &file) {
    auto *keys = file.GetListOfKeys();
    
    Long64_t largest_size = 0;
    TTree *largest_tree = NULL;
    
    for(int li = 0; li < keys->GetEntries(); li++) {
        TKey *l = dynamic_cast<TKey*>(keys->At(li));
        if (string("TTree") != l->GetClassName())
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

void dump_file(const char *filename, const char *treename, const char *outdir, 
               const vector<string> fnmatch_patterns, const vector<string> regexp_patterns) {
    TFile file(filename);
    TTree *tree = NULL;
    
    if (treename == NULL) {
        cerr << "Tree not specified, finding largest tree" << endl;
        tree = get_largest_tree(file);
        if (tree == NULL) {
            cerr << "No Trees found inside " << filename << endl;
            exit(-1);
        }
    } else {
        file.GetObject(treename, tree);
        if (tree == NULL) {
            cerr << "Tree (" << treename << ") not found in file (" << filename << ")." << endl;
            exit(-1);
        }
    }
    dump_tree(tree, outdir, fnmatch_patterns, regexp_patterns);
}

void usage(char * const *argv) {
#if HAVE_PCRE
    cout << "usage: " << basename(argv[0]) << " [-h|--help] [-t treename] [-m pattern] [-e regexp] [file]..." << endl;
#else
    cout << "usage: " << basename(argv[0]) << " [-h|--help] [-t treename] [-m pattern] [file]..." << endl;
#endif
    exit(-1);
}

int main(int argc, char * const *argv) {
    int c = 0;
    vector<string> regexp_patterns;
    vector<string> fnmatch_patterns;
    
    const char *treename = NULL,
               *outdir = "dit/";
    
    // Parse options
    while (true) {
        static struct option long_options[] = {
            {"verbose",   no_argument,       &verbose, 1},
            {"help",      no_argument,       0, 'h'},
            {"tree",      required_argument, 0, 't'},
            {"directory", required_argument, 0, 'D'},
            {"match",     required_argument, 0, 'm'},
#if HAVE_PCRE
            {"regexp",    required_argument, 0, 'e'},
#endif
            {0, 0, 0, 0}
        };

        int option_index = 0;

#if HAVE_PCRE
        c = getopt_long(argc, argv, "ht:D:m:e:", long_options, &option_index);
#else
        c = getopt_long(argc, argv, "ht:D:m:", long_options, &option_index);
#endif

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
            cerr << "option " << long_options[option_index].name;
            if (optarg)
                cerr << " with arg %s";
            cerr << endl;
            break;

        case 'h': usage(argv); exit(0); break;
        case 't': treename = optarg; break;
        case 'D': outdir = optarg; break;
        case 'm': fnmatch_patterns.push_back(optarg); break;
        case 'e': regexp_patterns.push_back(optarg); break;

        default:
            abort();
        }
    }

    if (optind < argc) {
        while (optind < argc)
            dump_file(argv[optind++], treename, outdir, fnmatch_patterns, regexp_patterns);
    } else {
        usage(argv);
    }

    return 0;
}
