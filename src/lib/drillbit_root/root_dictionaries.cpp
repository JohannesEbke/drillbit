#include "root_dictionaries.h"

#include <ftw.h>
#include <unistd.h>

#include <iostream>
#include <sstream>
#include <unordered_set>

#include <TTree.h>
#include <TLeaf.h>
#include <TClass.h>
#include <TEmulatedCollectionProxy.h>
#include <TInterpreter.h>

//'vector<double>', 'vector<float>', 'vector<int>', 'vector<short>', 'vector<unsigned int>', 'vector<unsigned short>',
// 'vector<vector<double> >', 'vector<vector<float> >', 'vector<vector<int> >', 'vector<vector<string> >', 
// 'vector<vector<vector<float> > >', 'vector<vector<vector<int> > >'

static char dictionary_tmpdir[] = "drillbit-root-dicts-XXXXXX";
static bool initialized = false;

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
    std::cerr << "Removing generated ROOT dictionaries" << std::endl;
    nftw(dictionary_tmpdir, deletefile, 10, FTW_MOUNT | FTW_PHYS | FTW_DEPTH);
}

void init() {
    if (not initialized) {
        mkdtemp(dictionary_tmpdir);
        atexit(cleanup_root_dictionaries);
    }
}

bool is_generated(const char * name) {
    TClass* claim = TClass::GetClass(name);
    if (claim && claim->GetCollectionProxy() &&
        dynamic_cast<TEmulatedCollectionProxy*>(claim->GetCollectionProxy())) {
        // Emulated == not Generated
        return false;
    }
    return true;
}
// Generate dictionaries required to read `tree`.
void generate_dictionary(const char *class_name) {
    init();
    char *orig_dir = get_current_dir_name();
    chdir(dictionary_tmpdir);
    std::cerr << "Generating dictionary for " << class_name << std::endl;
    gInterpreter->GenerateDictionary(class_name);
    chdir(orig_dir);
    free(static_cast<void*>(orig_dir));
}

// Generate dictionaries required to read `tree`.
void ensure_dictionaries(std::unordered_set<std::string> &class_names) {
    std::stringstream to_generate;
    for (auto i = class_names.begin(); i != class_names.end(); i++) {
        if (not is_generated(i->c_str())) {
            if (to_generate.tellp() != 0) to_generate << ";";
            to_generate << *i;
        }
    }
    if (to_generate.tellp() > 0) generate_dictionary(to_generate.str().c_str());
}

// Generate dictionaries required to read `tree`.
void ensure_dictionary(const char *class_name) {
    if (not is_generated(class_name)) generate_dictionary(class_name);
}

// Generate dictionaries required to read `leaf`.
void ensure_dictionary(TLeaf *leaf) {
    ensure_dictionary(leaf->GetTypeName());
}

// Generate dictionaries required to read `tree`.
void ensure_dictionaries(TTree *tree) {
    std::unordered_set<std::string> names;
    for (int li = 0; li < tree->GetListOfLeaves()->GetEntries(); li++) {
        TLeaf *l = (TLeaf*) tree->GetListOfLeaves()->At(li);
        names.insert(l->GetTypeName());
    }
    ensure_dictionaries(names);
}

