#include "metadata_stream.h"
#include "metadata_stream_impl.h"

uint8_t bits_needed_for(uint32_t value) {
    uint8_t n = 0;
    while (value != 0) { value >>= 1; n++; } // now, n = #bits needed
    return n;
}

MetaReader * MetaReader::Make(CodedInputStream *meta) {
    MetaReader * reader = new MetaReader();
    reader->_meta = meta;

    // Get the info message from the top
    uint32_t size = 0;
    assert(meta->ReadVarint32(&size));
    auto limit = meta->PushLimit(size);
    assert(reader->_info.ParseFromCodedStream(meta));
    meta->PopLimit(limit);

    // Read information from the message
    assert(reader->_info.stripe_version() == 2);
    reader->_max_dl = reader->_info.max_dl();
    reader->_nbits_modulo = (1 << bits_needed_for(reader->_info.max_dl()));
    return reader;
}

void MetaWriter::start(CodedOutputStream *meta, const StripeInfo &info) {
    assert(_meta == NULL);
    _meta = meta;
    _info.CopyFrom(info);
    assert(info.stripe_version() == 2);
    _meta->WriteVarint32(_info.ByteSize());
    _info.SerializeToCodedStream(_meta);
    _max_dl = _info.max_dl();
    _nbits = bits_needed_for(_info.max_dl());
}
