#include <iostream>
#include <vector>

#include "open_stripes.h"
#include "root_dictionaries.h"
#include "stdvector_reader.h"
#include "drillbit/tree.h"

#include <TTree.h>

using namespace std;

using google::protobuf::io::CodedInputStream;

DrillbitTree * DrillbitTree::FromArgs(int count, const char ** files) {
    vector<string> r;
    for (int i = 1; i < count; i++) r.push_back(files[i]);
    return Make(r);
}

DrillbitTree * DrillbitTree::Make(std::vector<std::string> files) {
    DrillbitTree * t = new DrillbitTree();
    std::vector<std::pair<CodedInputStream*,CodedInputStream*>> coded = open_stripes(files);
    for (int i = 0; i < files.size(); i++) {
        StripeReader * sreader = StripeReader::Make(coded[i].first, coded[i].second);
        StdVectorReader * vreader = StdVectorReader::Make(sreader);
        t->_readers.push_back(vreader);
        t->_readers_map[sreader->info().root_name()] = vreader;
    }
    t->fEntries = 10000;
    t->fReadEntry = 0;
}

Int_t DrillbitTree::SetBranchAddress(const char * name, void **add, TBranch **ptr) {
    *add = (void*) _readers_map[name]->buffer();
    *ptr = NULL;
}

Int_t DrillbitTree::GetEntry(Long64_t entry, Int_t getall) {
    assert(getall == 0);
    assert(entry == fReadEntry);
    fReadEntry++;
    for (auto r = _readers.begin(); r != _readers.end(); r++) {
        assert((*r)->next());
    }
}
