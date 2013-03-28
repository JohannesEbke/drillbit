#include "metadata_stream.h"
#include "metadata_stream_impl.h"

#include <google/protobuf/io/coded_stream.h>
using google::protobuf::io::CodedInputStream;
using google::protobuf::io::CodedOutputStream;


uint8_t bits_needed_for(uint32_t value) {
    uint8_t n = 0;
    while (value != 0) { value >>= 1; n++; } // now, n = #bits needed
    return n;
}

MetaReader * MetaReader::Make(ZeroCopyInputStream *meta) {
    MetaReader * reader = new MetaReader();
    reader->_meta = meta;

    // Get the info message from the top
    CodedInputStream cs(meta);
    uint32_t size = 0;
    assert(cs.ReadVarint32(&size));
    auto limit = cs.PushLimit(size);
    assert(reader->_info.ParseFromCodedStream(&cs));
    cs.PopLimit(limit);

    // Read information from the message
    assert(reader->_info.stripe_version() == 2);
    reader->_max_dl = reader->_info.max_dl();
    return reader;
}

void MetaWriter::start(ZeroCopyOutputStream *meta, const StripeInfo &info) {
    assert(_meta == NULL);
    _meta = meta;
    _info.CopyFrom(info);
    assert(info.stripe_version() == 2);
    CodedOutputStream cs(meta);
    cs.WriteVarint32(_info.ByteSize());
    _info.SerializeToCodedStream(&cs);
    _max_dl = _info.max_dl();
}

MetaWriter::~MetaWriter() {
    _meta->BackUp(_buffer_end - _buffer);
}
