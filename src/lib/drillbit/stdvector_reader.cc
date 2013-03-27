#include "stdvector_reader.h"
#include "stdvector_reader_impl.h"

template<int max_rl>
StdVectorReader* MakeStdVectorReaderAutoType(MetaReader *s, CodedInputStream *d) {
    // Note: The first next() for a vector type is just for initialization
    // No data will be read since the previous rl/dl is at 0/0.
    SWITCH_TYPE_TO_CONST(s->info().field_type(), 
        auto r = TypedStdVectorReader<type,max_rl>::Make(s, d);
        assert(r->next());
        return r;
    );
    assert(false);
}

StdVectorReader* MakePODReaderAutoType(MetaReader *s, CodedInputStream *d) {
    SWITCH_TYPE_TO_CONST(s->info().field_type(), return TypedPODReader<type>::Make(s, d));
    assert(false);
}

StdVectorReader* StdVectorReader::Make(MetaReader *s, CodedInputStream *d) {
    assert(s);
    assert(d);
    StdVectorReader *r;
    switch(s->info().max_rl()) {
        case 0: r = MakePODReaderAutoType(s, d); break;
        case 1: r = MakeStdVectorReaderAutoType<1>(s, d); break;
        case 2: r = MakeStdVectorReaderAutoType<2>(s, d); break;
        case 3: r = MakeStdVectorReaderAutoType<3>(s, d); break;
    }
    r->_max_dl = s->info().max_dl();
    assert(r);
    return r;
}
