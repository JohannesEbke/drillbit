#ifndef DRILLBIT_FAKE_TREE_H_
#define DRILLBIT_FAKE_TREE_H_

#include <TTree.h>

#include <vector>
#include <string>
#include <map>

class StdVectorReader;

class DrillbitTree : public TTree {
 public:
    DrillbitTree() = default;
    static DrillbitTree * FromArgs(int count, const char ** files);
    static DrillbitTree * Make(std::vector<std::string> files);
    template<typename T>
    Int_t SetBranchAddress(const char * name, T **add, TBranch **ptr=0) {
        return SetBranchAddress(name, (void**)add, ptr);
    };
    virtual Int_t SetBranchAddress(const char * name, void **add, TBranch **ptr=0);
    virtual Int_t GetEntry(Long64_t entry = 0, Int_t getall = 0);
 private:
    std::vector<StdVectorReader*> _readers;
    std::map<std::string, StdVectorReader*> _readers_map;
};


#endif
