#include <iostream>
#include <vector>

#include <TTree.h>
#include <TBranch.h>
#include <TFile.h>

#include "open_stripes.h"
#include "root_dictionaries.h"
#include "stdvector_reader.h"
#include "stdvector_reader_impl.h"

using namespace std;

using google::protobuf::io::CodedInputStream;

// Create a branch of this type in the given ROOT Tree and hold on to it
TBranch* make_branch(StdVectorReader *reader, TTree *tree) {
    const StripeInfo &info = reader->stripe_reader()->info();
    ensure_dictionary(info.root_type().c_str());
    uint32_t level = info.level();
    // Create Branch
    if (level == 0) {
        // can be Int_t, UInt_t, Double_t, Float_t, Bool_t
        if (info.root_type() == "Int_t") {
            return tree->Branch(info.root_name().c_str(), reader->buffer(), (info.root_name() + "/I").c_str());
        } else if (info.root_type() == "UInt_t") {        
            return tree->Branch(info.root_name().c_str(), reader->buffer(), (info.root_name() + "/i").c_str());
        } else if (info.root_type() == "Float_t") {       
            return tree->Branch(info.root_name().c_str(), reader->buffer(), (info.root_name() + "/F").c_str());
        } else if (info.root_type() == "Double_t") {      
            return tree->Branch(info.root_name().c_str(), reader->buffer(), (info.root_name() + "/D").c_str());
        } else if (info.root_type() == "Bool_t") {        
            return tree->Branch(info.root_name().c_str(), reader->buffer(), (info.root_name() + "/O").c_str());
        } else {
            std::cerr << "Unknown root_type: " << info.root_type() << std::endl;
            assert(false);
        }
    } else {
        return tree->Branch(info.root_name().c_str(), info.root_type().c_str(), reader->buffer_address());
    }
}


void compose_root_file(std::string name, const std::vector<std::string>& dit_files) {
    std::vector<std::pair<CodedInputStream*,CodedInputStream*>> coded = open_stripes(dit_files);

    std::cerr << "Looking up column metadata and creating root tree..." << std::endl;

    TFile f(name.c_str(), "RECREATE");
    TTree * tree = new TTree("composed", "Composed Tree");

    std::vector<StdVectorReader*> readers;
    for (int i = 0; i < dit_files.size(); i++) {
        StripeReader * sreader = StripeReader::Make(coded[i].first, coded[i].second);
        StdVectorReader * vreader = StdVectorReader::Make(sreader);
        assert(make_branch(vreader, tree));
        readers.push_back(vreader);
    }

    std::cerr << "Run over all events and collate them..." << std::endl;
    int event_number = 0;
    bool running = true;
    while(running) {
        //std::cerr << "Event start..." << std::endl;
        //std::cout << event_number << std::endl;
        if (event_number % 1000 == 0) std::cerr << event_number << std::endl;
        for (int i = 0; i < dit_files.size(); i++) {
            if (not readers[i]->next()) {
                running = false;
                break;
            }
        }
        if (running) {
            tree->Fill();
            event_number++;
        }
    }
    tree->Write("composed", TObject::kOverwrite);
    //f.Write();
    f.Close();
}


int main(int argc, const char ** argv) {
    std::vector<std::string> dit_files;
    for(int i = 1; i < argc; i++) {
        dit_files.push_back(argv[i]);
    }
    compose_root_file("composed.root", dit_files);
    return 0;
}

