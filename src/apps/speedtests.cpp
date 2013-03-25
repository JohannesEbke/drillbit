#include <iostream>
#include <vector>

#include "open_stripes.h"
#include "stdvector_reader.h"

using namespace std;

using google::protobuf::io::CodedInputStream;

std::vector<std::string> dit_files;
std::vector<std::pair<CodedInputStream*,CodedInputStream*>> coded;
std::vector<DatastripeInputStream*> datastreams;
std::vector<CodedInputStream*> metastreams;
std::vector<StripeReader*> sreaders;
std::vector<StdVectorReader*> readers;

void read_metadata(bool make_vstream) {
    for (int i = 0; i < coded.size(); i++) {
            // Get the info message from the top
        if (make_vstream) {
            StripeReader * sreader = StripeReader::Make(coded[i].first);
            sreaders.push_back(sreader);
            StdVectorReader * vreader = StdVectorReader::Make(sreaders[i], coded[i].second);
            readers.push_back(vreader);
        } else {
            CodedInputStream *meta = coded[i].first;
            uint32_t size = 0;
            assert(meta->ReadVarint32(&size));
            auto limit = meta->PushLimit(size);
            StripeInfo info;
            assert(info.ParseFromCodedStream(meta));
            meta->PopLimit(limit);
            assert(info.stripe_version() == 1);

            DatastripeInputStream * dstream = new DatastripeInputStream(coded[i].second, WireFormatLite::FieldType(info.field_type()));
            datastreams.push_back(dstream);
            metastreams.push_back(meta);
        }
    }
}

void stream_all() {
    for (int i = 0; i < coded.size(); i++) {
        int size;
        const void *buf;
        while (coded[i].first->GetDirectBufferPointer(&buf, &size)) coded[i].first->Skip(size);
        while (coded[i].second->GetDirectBufferPointer(&buf, &size)) coded[i].second->Skip(size);
    }
}

void stream_meta() {
    for (int i = 0; i < coded.size(); i++) {
        int size;
        const void *buf;
        while (coded[i].first->GetDirectBufferPointer(&buf, &size)) coded[i].first->Skip(size);
    }
}

void stream_data() {
    for (int i = 0; i < coded.size(); i++) {
        int size;
        const void *buf;
        while (coded[i].second->GetDirectBufferPointer(&buf, &size)) coded[i].second->Skip(size);
    }
}

void decode_data() {
    for (int i = 0; i < datastreams.size(); i++) {
        decoded_data da[10];
        if (datastreams[i]->type() == WireFormatLite::TYPE_STRING) {
            for (int x = 0; x < 10; x++) {
                new (&da[x]._string) std::string;
            }
        }
        decoded_data *d;
        int size;
        //while(datastreams[i]->Next(&d, &size));
        while(datastreams[i]->Place(da, 10));
    }
}

void decode_meta() {
    for (int i = 0; i < metastreams.size(); i++) {
        uint32_t tag;
        while(metastreams[i]->ReadVarint32(&tag));
    }
}

void read_vstreams_sequentially() {
    for (int i = 0; i < readers.size(); i++) {
        while(readers[i]->next());
    }

}

void read_vstreams_parallel() {
    while(true) {
        for (int i = 0; i < readers.size(); i++) {
            if (not readers[i]->next()) return;
        }
    }
}


int main(int argc, const char ** argv) {
    if (argc <= 2) {
        std::cout << "Usage: speedtests <number> <dit files>" << std::endl;
        std::cout << "<number> values:" << std::endl;
        std::cout << " 0 : only open files" << std::endl;
        std::cout << " 1 : as 0 & only read metadata" << std::endl;
        std::cout << " 2 : as 1 & decompress metadata" << std::endl;
        std::cout << " 3 : as 1 & decompress data" << std::endl;
        std::cout << " 4 : as 1 & decompress both" << std::endl;
        std::cout << " 5 : as 4 & decode metadata" << std::endl;
        std::cout << " 6 : as 4 & decode data" << std::endl;
        std::cout << " 7 : as 4 & decode both" << std::endl;
        std::cout << " 8 : decode into std::vectors per stripe" << std::endl;
        std::cout << " 9 : decode into std::vectors in parallel" << std::endl;
        return -1;
    }
    int number = atoi(argv[1]);
    for(int i = 2; i < argc; i++) {
        dit_files.push_back(argv[i]);
    }
    coded = open_stripes(dit_files);
    if (number == 0) return 0;
    read_metadata(number >= 8);
    if (number == 1) return 0;

    if (number == 2) {
        stream_meta();
    } else if (number == 3) {
        stream_data();
    } else if (number == 4) {
        stream_all();
    } else if (number == 5) {
        decode_meta();
        stream_data();
    } else if (number == 6) {
        stream_meta();
        decode_data();
    } else if (number == 7) {
        decode_meta();
        decode_data();
    } else if (number == 8) {
        read_vstreams_sequentially();
    } else if (number == 9) {
        read_vstreams_parallel();
    } else {
        std::cerr << "Unknown command number " << number << std::endl;
        return -1;
    }
    return 0;
}

