#include "stripe_reader.h"
#include "stripe_reader_impl.h"

StripeReader * StripeReader::Make(CodedInputStream *meta) {
    StripeReader * stripe = new StripeReader();
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
