#ifndef DRILLBIT_STRIPE_READER_IMPL_H_
#define DRILLBIT_STRIPE_READER_IMPL_H_

#include <string>
#include <iostream>

#include <google/protobuf/io/zero_copy_stream.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/wire_format_lite_inl.h>

using google::protobuf::internal::WireFormatLite;

// Returns repetition and definition level of the next metadata line
// This function is one of the performance-critical parts.
inline bool MetaReader::next_rldl(uint8_t &rl, uint8_t &dl) {
    if (not GOOGLE_PREDICT_TRUE(_buffer != _buffer_end)) {
        int size;
        if (not _meta->Next((const void**)&_buffer, &size)) return false;
        _buffer_end = _buffer + size;
    }
    // Extract the right four bytes (dl) and the left four bytes (rl)
    // from the buffer and advance the buffer pointer.
    dl = *_buffer & 0x0F;
    rl = *_buffer >> 4;
    _buffer++;
    return true;
}

// Optimized function in case the maximum repetition level is zero
inline bool MetaReader::next_dl(uint8_t &dl) {
    if (GOOGLE_PREDICT_TRUE(_buffer != _buffer_end)) {
        // Interpret the current buffer byte only as definition level
        // Assumes that the repetition level is fixed at zero!
        dl = *_buffer;
        _buffer++;
        return true;
    } else {
        uint8_t rl;
        return next_rldl(rl, dl);
    }
}

inline void MetaWriter::write_rldl(const uint8_t &rl, const uint8_t &dl) {
    assert(dl >= rl); // mandated by the anti-corruption authority
    if (not GOOGLE_PREDICT_TRUE(_buffer != _buffer_end)) {
        int size;
        assert(_meta->Next((void**)&_buffer, &size));
        _buffer_end = _buffer + size;
    }
    *_buffer = rl << 4 | dl;
    _buffer++;
}



#endif
