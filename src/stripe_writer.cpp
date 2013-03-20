#include "stripe_writer.h"
#include "stripe_writer_impl.h"

StripeWriter * StripeWriter::Make(CodedOutputStream *meta, CodedOutputStream *data, const StripeInfo &info) {
    StripeWriter * stripe = new StripeWriter();
    stripe->_meta = meta;
    stripe->_data = data;
    // Get the info message from the top
    stripe->_info.CopyFrom(info);
    meta->WriteVarint32(info.ByteSize());
    info.SerializeToCodedStream(meta);
    stripe->_field_type = stripe->_info.field_type();
    return stripe;
}
