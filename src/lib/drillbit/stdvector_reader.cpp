#include "stdvector_reader.h"
#include "stdvector_reader_impl.h"

template<int level>
StdVectorReader* MakeStdVectorReaderAutoType(StripeReader *s, CodedInputStream *d) {
    // Note: The first next() for a vector type is just for initialization
    // No data will be read since the previous rl/dl is at 0/0.
#define CHECKIF(ftype) case ftype: { auto r = TypedStdVectorReader<ftype,level>::Make(s, d); assert(r->next()); return r; }
    switch(s->info().field_type()) {
        CHECKIF(WireFormatLite::TYPE_DOUBLE);
        CHECKIF(WireFormatLite::TYPE_FLOAT);
        CHECKIF(WireFormatLite::TYPE_INT64);
        CHECKIF(WireFormatLite::TYPE_UINT64);
        CHECKIF(WireFormatLite::TYPE_INT32);
        CHECKIF(WireFormatLite::TYPE_FIXED64);
        CHECKIF(WireFormatLite::TYPE_FIXED32);
        CHECKIF(WireFormatLite::TYPE_BOOL);
        CHECKIF(WireFormatLite::TYPE_STRING);
        CHECKIF(WireFormatLite::TYPE_BYTES);
        CHECKIF(WireFormatLite::TYPE_UINT32);
        CHECKIF(WireFormatLite::TYPE_ENUM);
        CHECKIF(WireFormatLite::TYPE_SFIXED32);
        CHECKIF(WireFormatLite::TYPE_SFIXED64);
        CHECKIF(WireFormatLite::TYPE_SINT32);
        CHECKIF(WireFormatLite::TYPE_SINT64);
    }
#undef CHECKIF
    assert(false);
}

StdVectorReader* MakePODReaderAutoType(StripeReader *s, CodedInputStream *d) {
#define CHECKIF(ftype) case ftype: return TypedPODReader<ftype>::Make(s, d);
    switch(s->info().field_type()) {
        CHECKIF(WireFormatLite::TYPE_DOUBLE);
        CHECKIF(WireFormatLite::TYPE_FLOAT);
        CHECKIF(WireFormatLite::TYPE_INT64);
        CHECKIF(WireFormatLite::TYPE_UINT64);
        CHECKIF(WireFormatLite::TYPE_INT32);
        CHECKIF(WireFormatLite::TYPE_FIXED64);
        CHECKIF(WireFormatLite::TYPE_FIXED32);
        CHECKIF(WireFormatLite::TYPE_BOOL);
        CHECKIF(WireFormatLite::TYPE_STRING);
        CHECKIF(WireFormatLite::TYPE_BYTES);
        CHECKIF(WireFormatLite::TYPE_UINT32);
        CHECKIF(WireFormatLite::TYPE_ENUM);
        CHECKIF(WireFormatLite::TYPE_SFIXED32);
        CHECKIF(WireFormatLite::TYPE_SFIXED64);
        CHECKIF(WireFormatLite::TYPE_SINT32);
        CHECKIF(WireFormatLite::TYPE_SINT64);
    }
#undef CHECKIF
    assert(false);
}

StdVectorReader* StdVectorReader::Make(StripeReader *s, CodedInputStream *d) {
    assert(s);
    assert(d);
    StdVectorReader *r;
    switch(s->info().level()) {
        case 0: r = MakePODReaderAutoType(s, d); break;
        case 1: r = MakeStdVectorReaderAutoType<1>(s, d); break;
        case 2: r = MakeStdVectorReaderAutoType<2>(s, d); break;
        case 3: r = MakeStdVectorReaderAutoType<3>(s, d); break;
    }
    assert(r);
    return r;
}
