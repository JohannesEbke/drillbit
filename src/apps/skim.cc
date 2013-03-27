#include <iostream>
#include <vector>

#include "common.h"
#include "open_stripes.h"
#include "stdvector_reader.h"
#include "metadata_stream_impl.h"
#include "metadata.pb.h"
#include "data_codec_impl.h"

using namespace std;

using google::protobuf::io::CodedInputStream;

std::vector<std::string> dit_files;
std::vector<std::shared_ptr<StripeInputStream>> streams;
std::vector<MetaReader*> metareaders;
std::vector<CodedInputStream*> datastreams;
std::shared_ptr<StripeOutputStream> outstripe;

void realskim(MetaReader* meta, CodedInputStream* data, double cut, class TypeFromFieldType<WireFormatLite::TYPE_STRING>) {
    assert(false);
}

void realskim(MetaReader* meta, CodedInputStream* data, double cut, class TypeFromFieldType<WireFormatLite::TYPE_BYTES>) {
    assert(false);
}
void realskim(MetaReader* meta, CodedInputStream* data, double cut, class TypeFromFieldType<WireFormatLite::TYPE_BOOL>) {
    assert(false);
}

template<WireFormatLite::FieldType type>
void realskim(MetaReader* meta, CodedInputStream* data, double cut, class TypeFromFieldType<type>) {
    StripeInfo info;
    info.CopyFrom(meta->info());
    if (info.max_rl() == 0) { // this means max_rl is also 0
        info.set_max_dl(1); // we introduce optionality in the data :)
        DataDecoder<type> d;
        DataEncoder<type> e;
        d.connect(data);
        e.connect(outstripe->data);
        MetaWriter w;
        w.start(outstripe->meta, info);
        typename TypeFromFieldType<type>::type tmp;
        int x = 0;
        while(d.DecodeInto(tmp)) {
            if (tmp > cut) {
                w.write_rldl(0,1);
                e.Encode(tmp);
            } else {
                w.write_rldl(0,0);
            }
        }
    } else if (info.max_rl() == 1) {
        uint8_t rl, dl;
        while(meta->next_rldl(rl, dl)) {
            
        }
    }
}

void skimall(double cut) {
    for (int i = 0; i < streams.size(); i++) {
        SWITCH_TYPE_TO_CONST(metareaders[i]->info().field_type(),
            realskim(metareaders[i], datastreams[i], cut, TypeFromFieldType<type>());
        );
    }
}

void read_metadata() {
    for (int i = 0; i < streams.size(); i++) {
        // Get the info message from the top
        metareaders.push_back(MetaReader::Make(streams[i]->meta));
        datastreams.push_back(streams[i]->data);
    }
}

int main(int argc, const char ** argv) {
    if (argc <= 2) {
        std::cout << "Usage: skim <pt> <dit file>" << std::endl;
        return -1;
    }
    double cut = atof(argv[1]);
    //for(int i = 2; i < argc; i++) {
        //dit_files.push_back(argv[i]);
    //}
    for(int i = 1; i < 10000; i++) {
        dit_files.push_back(argv[2]);
    }
    streams = open_stripes(dit_files);
    outstripe = open_stripes_write("skim.dit");
    read_metadata();
    std::cout << "Skimming " << dit_files[0] << " with value > " << cut << std::endl;
    skimall(cut);
    return 0;
}

