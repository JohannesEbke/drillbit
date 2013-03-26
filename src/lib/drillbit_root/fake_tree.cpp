#include <iostream>
#include <vector>

#include "open_stripes.h"
#include "root_dictionaries.h"
#include "stdvector_reader.h"
#include "drillbit/tree.h"

#include <TTree.h>
#include <TDataType.h>

using namespace std;

using google::protobuf::io::CodedInputStream;

DrillbitTree::DrillbitTree() : TTree() {
            
}

DrillbitTree * DrillbitTree::FromArgs(int count, const char ** files) {
    vector<string> r;
    for (int i = 1; i < count; i++) r.push_back(files[i]);
    return Make(r);
}

DrillbitTree * DrillbitTree::Make(const std::vector<std::string> &files) {
    DrillbitTree * t = new DrillbitTree();
    std::vector<StripeInputStream> streams = open_stripes(files);
    for (int i = 0; i < files.size(); i++) {
        MetaReader * sreader = MetaReader::Make(streams[i].meta);
        StdVectorReader * vreader = StdVectorReader::Make(sreader, streams[i].data);
        t->_readers.push_back(vreader);
        t->_readers_map[sreader->info().root_name()] = vreader;
    }
    t->fEntries = 10000;
    t->fReadEntry = 0;
    return t;
}

Int_t DrillbitTree::SetBranchAddress(const char *bname,void *add, TBranch **ptr, TClass *realClass, EDataType datatype, Bool_t isptr) {
    StdVectorReader * r = _readers_map[bname];
    if (isptr) {
        if (r) *(void**)add = (void*) r->buffer();
        else *(void**)add = NULL;
    } else {
        if (r) _tocopy.push_back(make_pair(r->buffer(), make_pair(add, TDataType::GetDataType(datatype)->Size())));
    }
    return 0;
}

Int_t DrillbitTree::GetEntry(Long64_t entry, Int_t getall) {
    assert(getall == 0);
    assert(entry == fReadEntry);
    fReadEntry++;
    for (auto r = _readers.begin(); r != _readers.end(); r++) {
        assert((*r)->next());
    }
    for (auto r = _tocopy.begin(); r != _tocopy.end(); r++) {
        memcpy(r->second.first, r->first, r->second.second);
    }
    return 42; // no idea how many bytes we read :)
}
