#include <iostream>
#include <vector>

#include "open_stripes.h"
#include "stdvector_reader.h"

#include <google/protobuf/io/zero_copy_stream.h>

using namespace std;

using google::protobuf::io::CodedInputStream;

std::vector<std::string> dit_files;
std::vector<std::shared_ptr<StripeInputStream>> streams;
std::vector<ZeroCopyInputStream*> metastreams;
std::vector<MetaReader*> sreaders;
std::vector<StdVectorReader*> readers;

void read_metadata(bool make_vstream) {
    for (int i = 0; i < streams.size(); i++) {
            // Get the info message from the top
        if (make_vstream) {
            MetaReader * sreader = MetaReader::Make(streams[i]->meta);
            sreaders.push_back(sreader);
            StdVectorReader * vreader = StdVectorReader::Make(sreaders[i], streams[i]->data);
            readers.push_back(vreader);
        } else {
            ZeroCopyInputStream *_meta = streams[i]->meta;
            CodedInputStream meta(_meta);
            uint32_t size = 0;
            assert(meta.ReadVarint32(&size));
            auto limit = meta.PushLimit(size);
            StripeInfo info;
            assert(info.ParseFromCodedStream(&meta));
            meta.PopLimit(limit);
            assert(info.stripe_version() <= 2);
            metastreams.push_back(_meta);
        }
    }
}

void stream_all() {
    for (int i = 0; i < streams.size(); i++) {
        int size;
        const void *buf;
        while (streams[i]->meta->Next(&buf, &size));
        while (streams[i]->data->GetDirectBufferPointer(&buf, &size)) streams[i]->data->Skip(size);
    }
}

void stream_meta() {
    for (int i = 0; i < streams.size(); i++) {
        int size;
        const void *buf;
        while (streams[i]->meta->Next(&buf, &size));
    }
}

void stream_data() {
    for (int i = 0; i < streams.size(); i++) {
        int size;
        const void *buf;
        while (streams[i]->data->GetDirectBufferPointer(&buf, &size)) streams[i]->data->Skip(size);
    }
}

void decode_meta() {
    for (int i = 0; i < metastreams.size(); i++) {
        uint32_t tag;
        CodedInputStream meta(metastreams[i]);
        while(meta.ReadVarint32(&tag));
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
        //std::cout << " 6 : as 4 & decode data" << std::endl;
        //std::cout << " 7 : as 4 & decode both" << std::endl;
        std::cout << " 8 : decode into std::vectors per stripe" << std::endl;
        std::cout << " 9 : decode into std::vectors in parallel" << std::endl;
        return -1;
    }
    int number = atoi(argv[1]);
    for(int i = 2; i < argc; i++) {
        dit_files.push_back(argv[i]);
    }
    streams = open_stripes(dit_files);
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
        assert(false);
        //stream_meta();
        //decode_data();
    } else if (number == 7) {
        assert(false);
        //decode_meta();
        //decode_data();
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

