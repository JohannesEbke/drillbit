#include <iostream>
#include <vector>

#include "open_stripes.h"
#include "stdvector_reader.h"

using namespace std;

using google::protobuf::io::CodedInputStream;

void just_read_stripes(const std::vector<std::string>& dit_files) {
    std::vector<std::pair<CodedInputStream*,CodedInputStream*>> coded = open_stripes(dit_files);

    std::vector<StdVectorReader*> readers;
    for (int i = 0; i < dit_files.size(); i++) {
        StripeReader * sreader = StripeReader::Make(coded[i].first);
        StdVectorReader * vreader = StdVectorReader::Make(sreader, coded[i].second);
        readers.push_back(vreader);
    }

    //for (int i = 0; i < coded.size(); i++) {
        //const void * data;
        //int size;
        //while(coded[i].first->GetDirectBufferPointer(&data, &size)) coded[i].first->Skip(size);
        //while(coded[i].second->GetDirectBufferPointer(&data, &size)) coded[i].second->Skip(size);
    //}   
    //return;


    std::cerr << "Run over all events..." << std::endl;
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
            event_number++;
        }
    }
}


int main(int argc, const char ** argv) {
    std::vector<std::string> dit_files;
    for(int i = 1; i < argc; i++) {
        dit_files.push_back(argv[i]);
    }
    just_read_stripes(dit_files);
    return 0;
}

