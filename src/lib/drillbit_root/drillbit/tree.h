#ifndef DRILLBIT_FAKE_TREE_H_
#define DRILLBIT_FAKE_TREE_H_

#include <TTree.h>

#include <vector>
#include <string>
#include <map>
#include <utility>
#include <memory>

class StdVectorReader;

class DrillbitTree : public TTree {
 public:
    DrillbitTree();
    static DrillbitTree * FromArgs(int count, const char ** files);
    static DrillbitTree * Make(const std::vector<std::string> &files);
    virtual Int_t SetBranchAddress(const char *bname,void *add, TBranch **ptr, TClass *realClass, EDataType datatype, Bool_t isptr);
    virtual Int_t GetEntry(Long64_t entry = 0, Int_t getall = 0);
 private:
    std::vector<StdVectorReader*> _readers;
    std::map<std::string, StdVectorReader*> _readers_map;
    std::vector<std::pair<void*,std::pair<void*,Int_t>>> _tocopy;
    std::vector<std::shared_ptr<StripeInputStream>> streams;
};


#endif
