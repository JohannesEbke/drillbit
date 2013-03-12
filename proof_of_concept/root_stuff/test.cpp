#include <TTree.h>
#include <TLeaf.h>
#include <TFile.h>

int main() {
    TFile f("ntup.root");
    TTree * tree = (TTree*) f.Get("photon");
    Bool_t b;
    tree->SetBranchAddress("EF_2e11T_medium", &b);
    for (int i = 0; i < tree->GetListOfBranches()->GetEntries(); i++) {
        ((TBranch*)tree->GetListOfBranches()->At(i))->SetStatus(0);
        if (std::string("EF_2e11T_medium") == ((TBranch*)tree->GetListOfBranches()->At(i))->GetName()) {
            ((TBranch*)tree->GetListOfBranches()->At(i))->SetStatus(1);
        }
    }
    //tree->SetBranchStatus("*", 0);
    //tree->SetBranchStatus("EF_2e11T_medium", 1);

    TBranch * branch = tree->GetBranch("EF_2e11T_medium");
    int entries = tree->GetEntries();
    //tree->Draw("EF_2e11T_medium");
    for (int i = 0; i < entries; i++) {
        //branch->GetEntry(i);
        tree->GetEntry(i);
    }
    return 0;
}
    
