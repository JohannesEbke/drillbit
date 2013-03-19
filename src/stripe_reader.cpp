#include "stripe_reader.h"
#include "stripe_reader_impl.h"

StripeReader * StripeReader::Make(CodedInputStream *meta, CodedInputStream *data) {
    StripeReader * stripe = new StripeReader();
    stripe->_meta = meta;
    stripe->_data = data;
    // Get the info message from the top
    uint32_t size = 0;
    assert(meta->ReadVarint32(&size));
    auto limit = meta->PushLimit(size);
    stripe->_info.ParseFromCodedStream(meta);
    meta->PopLimit(limit);
    assert(stripe->_info.stripe_version() == 1);
    stripe->_field_type = stripe->_info.field_type();
    stripe->_max_dl = stripe->_info.level();
    if(stripe->_info.level() <= 1) {
        stripe->_rl_multiplier = 2;
    } else if (stripe->_info.level() <= 4) {
        stripe->_rl_multiplier = 4;
    } else {
        assert(false); // the level is too damn high!
    }
    return stripe;
}
