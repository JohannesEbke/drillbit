#include "root_dictionaries.h"

#include <ftw.h>
#include <unistd.h>

#include <iostream>

#include <TTree.h>
#include <TLeaf.h>
#include <TClass.h>
#include <TEmulatedCollectionProxy.h>
#include <TInterpreter.h>

//'vector<double>', 'vector<float>', 'vector<int>', 'vector<short>', 'vector<unsigned int>', 'vector<unsigned short>',
// 'vector<vector<double> >', 'vector<vector<float> >', 'vector<vector<int> >', 'vector<vector<string> >', 
// 'vector<vector<vector<float> > >', 'vector<vector<vector<int> > >'

static char dictionary_tmpdir[] = "root2stripes-dicts-XXXXXX";
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

// Generate dictionaries required to read `tree`.
void ensure_dictionary(const char *class_name) {
    TClass* claim = TClass::GetClass(class_name);
    if (claim && claim->GetCollectionProxy() &&
        dynamic_cast<TEmulatedCollectionProxy*>(claim->GetCollectionProxy())) {
        // Only executed if the dictionary isn't currently present
        init();
        char *orig_dir = get_current_dir_name();
        chdir(dictionary_tmpdir);
        std::cerr << "Generating dictionary for " << class_name << std::endl;
        gInterpreter->GenerateDictionary(class_name);
        chdir(orig_dir);
        free(static_cast<void*>(orig_dir));
    }
}
// Generate dictionaries required to read `tree`.
void ensure_dictionaries(TTree *tree) {
    for (int li = 0; li < tree->GetListOfLeaves()->GetEntries(); li++) {
        TLeaf *l = (TLeaf*) tree->GetListOfLeaves()->At(li);
        ensure_dictionary(l->GetTypeName());
    }
}

