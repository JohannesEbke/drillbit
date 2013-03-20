#include "stdvector_reader.h"
#include "stdvector_reader_impl.h"


template<int level>
StdVectorReader* MakeStdVectorReaderAutoType(StripeReader *s) {
#define TRY_TYPE(T) if (s->is_correct_type<T>()) return TypedStdVectorReader<T,level>::Make(s);
    TRY_TYPE(int32_t)
    TRY_TYPE(uint32_t)
    TRY_TYPE(float)
    TRY_TYPE(bool)
    TRY_TYPE(int)
    TRY_TYPE(int64_t)
    TRY_TYPE(uint64_t)
    TRY_TYPE(double)
    TRY_TYPE(std::string)
#undef TRY_TYPE
    assert(false);
}

StdVectorReader* MakePODReaderAutoType(StripeReader *s) {
#define TRY_TYPE(T) if (s->is_correct_type<T>()) return TypedPODReader<T>::Make(s);
    TRY_TYPE(int32_t)
    TRY_TYPE(uint32_t)
    TRY_TYPE(float)
    TRY_TYPE(bool)
    TRY_TYPE(int)
    TRY_TYPE(int64_t)
    TRY_TYPE(uint64_t)
    TRY_TYPE(double)
    TRY_TYPE(std::string)
#undef TRY_TYPE
    assert(false);
}

StdVectorReader* StdVectorReader::Make(StripeReader *s) {
    switch(s->info().level()) {
        case 0: return MakePODReaderAutoType(s);
        case 1: return MakeStdVectorReaderAutoType<1>(s);
        case 2: return MakeStdVectorReaderAutoType<2>(s);
        case 3: return MakeStdVectorReaderAutoType<3>(s);
        case 4: return MakeStdVectorReaderAutoType<4>(s);
    }
    assert(false);
}
