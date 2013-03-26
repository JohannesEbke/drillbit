#include <limits>
#include <iostream>

#include <TFile.h>
#include <TChain.h>

int main(int argc, char *argv[]) {
    if (argc == 1) {
        std::cout << "usage: root2root [input files]" << std::endl;
        return 1;
    }
    
    TChain in("Event");
    
    for (int i = 1; i < argc; i++)
        in.Add(argv[i]);
    
    TFile fout("fout.root", "recreate");
    TTree *out = in.CloneTree(0);
    out->SetBasketSize("*", 1024*1024);
    
    auto n = out->CopyEntries(&in);
    std::cout << "Copied " << n << " entries" << std::endl;
    
    out->Write();
        
    return 0;
}
