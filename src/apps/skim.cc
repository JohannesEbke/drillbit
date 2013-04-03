#include <iostream>
#include <vector>

#include "common.h"
#include "open_stripes.h"
#include "stdvector_reader.h"
#include "metadata_stream_impl.h"
#include "metadata.pb.h"
#include "data_codec_impl.h"

using namespace std;

using google::protobuf::io::ZeroCopyInputStream;

std::vector<std::string> dit_files;
std::vector<StripeInputStreamPtr> streams;
std::vector<MetaReader*> metareaders;
std::vector<ZeroCopyInputStream*> datastreams;
std::shared_ptr<StripeOutputStream> outstripe;

inline bool passes_cut(double cut, const std::string &v) {
    assert(false);
    return false;
}

template<typename T>
inline bool passes_cut(double cut, const T &value) {
    return value > cut;
}

template<WireFormatLite::FieldType type>
void realskim(MetaReader* meta, ZeroCopyInputStream* data, double cut, class TypeFromFieldType<type>) {
    StripeInfo info;
    info.CopyFrom(meta->info());

    // Set up IO channels
    MetaWriter w;
    DataDecoder<type> d;
    DataEncoder<type> e;
    d.connect(data);
    e.connect(outstripe->data);
    const uint8_t maxrl = info.max_rl();
    const uint8_t maxdl = info.max_dl();
    assert(maxdl >= maxrl); // sanity check
    assert(maxdl <= maxrl*2 + 1); // sanity check

    if (maxrl == 0) {
        // If max_dl == 0 then we do not need any metadata
        const bool read_meta = (maxdl > 0);
        if (maxdl == 0) info.set_max_dl(1);
        w.start(outstripe->meta, info);
        typename TypeFromFieldType<type>::type tmp;
        uint8_t dl = maxdl;
        while(not read_meta || meta->next_dl(dl)) {
            if ((not read_meta) or dl == maxdl) {
                if (not d.DecodeInto(tmp)) break;
                if (passes_cut(cut, tmp)) {
                    w.write_rldl(0, maxdl);
                    e.Encode(tmp);
                } else {
                    w.write_rldl(0, 0);
                }
            } else { // has already been skimmed, don't change.
                w.write_rldl(0, dl);
            }
        }
    } else {
        // add maximum optionality (rrr -> orororo)
        const uint8_t new_maxdl = maxrl*2 + 1;
        const uint8_t min_correct_dl = new_maxdl - maxdl;
        info.set_max_dl(new_maxdl);
        uint8_t rl, dl;
        while(meta->next_rldl(rl, dl)) {
            if (dl != maxdl) { // no data, just change levels
                if (dl > min_correct_dl) {
                }
                w.write_rldl(rl, dl);
            } 
            
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
    streams = open_stripes_read(dit_files);
    outstripe = open_stripe_write("skim.dit");
    read_metadata();
    std::cout << "Skimming " << dit_files[0] << " with value > " << cut << std::endl;
    skimall(cut);
    return 0;
}

