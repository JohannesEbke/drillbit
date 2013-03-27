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
inline bool MetaReader::next_rldl(uint8_t &_rl, uint8_t &_dl) {
    const void * data;
    int size;
    _meta->GetDirectBufferPointerInline(&data, &size);
    if (GOOGLE_PREDICT_TRUE(size != 0)) {
        _dl = ((const uint8_t*)data)[0] & 0x0F;
        _rl = ((const uint8_t*)data)[0] >> 4;
        _meta->Skip(1);
        return true;
    }
    if (not _meta->GetDirectBufferPointer(&data, &size)) return false;
    _dl = ((const uint8_t*)data)[0] & 0x0F;
    _rl = ((const uint8_t*)data)[0] >> 4;
    _meta->Skip(1);
    return true;
}

inline bool MetaReader::next_dl(uint8_t &_dl) {
    const void * data;
    int size;
    _meta->GetDirectBufferPointerInline(&data, &size);
    if (GOOGLE_PREDICT_TRUE(size != 0)) {
        _dl = ((const uint8_t*)data)[0];
        _meta->Skip(1);
        return true;
    }
    if (not _meta->GetDirectBufferPointer(&data, &size)) return false;
    _dl = ((const uint8_t*)data)[0];
    _meta->Skip(1);
    return true;
}

inline void MetaWriter::write_rldl(const uint8_t &_rl, const uint8_t &_dl) {
    assert(_dl >= _rl); // mandated by the anti-corruption authority
    uint8_t * buf = _meta->GetDirectBufferForNBytesAndAdvance(1);
    if (GOOGLE_PREDICT_TRUE(buf != NULL)) {
        *buf = _rl << 4 | _dl;
        return;
    }
    int size;
    assert(_meta->GetDirectBufferPointer((void**)&buf, &size));
    *buf = _rl << 4 | _dl;
    _meta->Skip(1);
    return;
}


#endif
