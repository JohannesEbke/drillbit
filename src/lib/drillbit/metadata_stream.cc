#include "metadata_stream.h"
#include "metadata_stream_impl.h"

MetaReader * MetaReader::Make(CodedInputStream *meta) {
    MetaReader * stripe = new MetaReader();
    stripe->_meta = meta;
    // Get the info message from the top
    uint32_t size = 0;
    assert(meta->ReadVarint32(&size));
    auto limit = meta->PushLimit(size);
    assert(stripe->_info.ParseFromCodedStream(meta));
    meta->PopLimit(limit);
    assert(stripe->_info.stripe_version() == 1);
    stripe->_field_type = stripe->_info.field_type();
    return stripe;
}
