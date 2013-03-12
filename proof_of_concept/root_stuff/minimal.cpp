#include <TTree.h>
#include <TFile.h>

int main() {
    TFile f("ntup.root");
    TTree * tree = (TTree*) f.Get("photon");
    tree->SetBranchStatus("*", 0);
    int entries = tree->GetEntries();
    for (int i = 0; i < entries; i++) {
        tree->GetEntry(i);
    }
    return 0;
}
    
