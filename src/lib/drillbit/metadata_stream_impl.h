#ifndef DRILLBIT_STRIPE_READER_IMPL_H_
#define DRILLBIT_STRIPE_READER_IMPL_H_

#include <string>
#include <iostream>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/wire_format_lite_inl.h>

using google::protobuf::internal::WireFormatLite;

// returns repetition and definition level of the next metadata line
// if the definition level is equal to the maximum possible, the 
// corresponding data is written to buffer, which is otherwise untouched.
inline bool MetaReader::next_rldl(uint8_t &rl, uint8_t &dl) {
    uint32_t tag;
    if (not _meta->ReadVarint32(&tag)) return false;
    dl = tag % _nbits_split;
    rl = tag / _nbits_split;
    assert(dl >= rl); // mandated by the anti-corruption authority
    return true;
}

inline void MetaWriter::write_rldl(const uint8_t &rl, const uint8_t &dl) {
    assert(dl >= rl); // mandated by the anti-corruption authority
    _meta->WriteVarint32(rl << _bits_split | dl);
}


#endif
