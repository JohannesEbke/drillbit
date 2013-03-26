#ifndef DRILLBIT_STRIPE_READER_IMPL_H_
#define DRILLBIT_STRIPE_READER_IMPL_H_

#include <string>
#include <iostream>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/wire_format_lite_inl.h>

using google::protobuf::internal::WireFormatLite;
using google::protobuf::io::CodedInputStream;

// returns repetition and definition level of the next metadata line
// if the definition level is equal to the maximum possible, the 
// corresponding data is written to buffer, which is otherwise untouched.
template<typename T, int level> bool MetaReader::next_line(uint8_t &rl, uint8_t &dl) {
    assert(level > 0);
    uint32_t tag = 0;
    if (not _meta->ReadVarint32(&tag)) return false;
    if (level == 1) {
        dl = tag % 2;
        rl = tag / 2;
    } else {
        dl = tag % 4;
        rl = tag / 4;
    }
    assert(dl >= rl); // mandated by the anti-corruption authority
    return true;
}

#endif
