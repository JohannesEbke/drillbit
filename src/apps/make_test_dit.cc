#include <iostream>
#include <vector>
#include <sstream>
#include <stdlib.h>

#include "open_stripes.h"
#include "data_codec.h"
#include "data_codec_impl.h"
#include "metadata_stream.h"
#include "metadata_stream_impl.h"

using namespace std;

using google::protobuf::io::CodedInputStream;

void dump_required_lvl0(const string name, const int number, ZeroCopyOutputStream &o, ZeroCopyOutputStream &o2) {
    StripeInfo info;
    info.set_stripe_version(2);
    info.set_field_type(WireFormatLite::TYPE_FLOAT);
        info.set_max_dl(0);
    info.set_max_rl(0);
    info.set_root_name(name);
    info.set_root_type("Float_t");
    MetaWriter meta;
    meta.start(&o2, info);

    DataEncoder<WireFormatLite::TYPE_FLOAT> writer;
    writer.connect(&o);
    for (int i = 0; i < number; i++) { 
        writer.Encode(random()*1000.0/RAND_MAX);
    }
}

void dump_required_lvl1(const string name, const int number, const int size, ZeroCopyOutputStream &o, ZeroCopyOutputStream &o2) {
    StripeInfo info;
    info.set_stripe_version(2);
    info.set_field_type(WireFormatLite::TYPE_FLOAT);
    info.set_max_dl(1);
    info.set_max_rl(1);
    info.set_root_name(name);
    info.set_root_type("std::vector<Float_t>");
    MetaWriter meta;
    meta.start(&o2, info);

    DataEncoder<WireFormatLite::TYPE_FLOAT> writer;
    writer.connect(&o);
    vector<float> data;
    
    for (int i = 0; i < number; i++) {
        data.clear();
        int realsize = int(random()*size/RAND_MAX);
        for (int j = 0; j < realsize; j++) {
            data.push_back(random()*1000.0/RAND_MAX);
        }
        if (data.size() == 0) {
            meta.write_rldl(0, 0);
        } else {
            int rl = 0;
            for (auto j = data.cbegin(); j != data.cend(); j++) {
                meta.write_rldl(rl, 1);
                writer.Encode(*j);
                rl = 1;
            }
        }
    }
}


void make_testcolumn_lvl0_float(const string name, const int n_events) {
    string fn = string("dit_test/") + name + ".dit";
    std::shared_ptr<StripeOutputStream> ostream = open_stripe_write(fn);
    ZeroCopyOutputStream &o = *ostream->data;
    ZeroCopyOutputStream &o2 = *ostream->meta;
    dump_required_lvl0(name, n_events, o, o2);
}

void make_testcolumn_lvl1_float(const string name, const int n_events, const int size) {
    string fn = string("dit_test/") + name + ".dit";
    std::shared_ptr<StripeOutputStream> ostream = open_stripe_write(fn);
    ZeroCopyOutputStream &o = *ostream->data;
    ZeroCopyOutputStream &o2 = *ostream->meta;
    dump_required_lvl1(name, n_events, size, o, o2);
}

void make_test_dit(const int n_events, const int n_float_fields) {
    for (int i = 0; i < n_float_fields; i++) {
        stringstream ss;
        ss << string("test_float_") << i;
        //make_testcolumn_lvl0_float(ss.str(), n_events);
        make_testcolumn_lvl1_float(ss.str(), n_events, 6);
    }
}


int main(int argc, const char ** argv) {
    make_test_dit(100000, 100);
    return 0;
}

