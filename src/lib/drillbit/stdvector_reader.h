#ifndef STDVECTOR_READER_H_
#define STDVECTOR_READER_H_

#include "drillbit.pb.h"
#include "stripe_reader.h"
#include "data_codec.h"

// An untemplated interface to a stdvectorreader with some common variables
class StdVectorReader {
 public:
    static StdVectorReader* Make(StripeReader *s, CodedInputStream *d); // Will return an instance of a typed reader

    virtual bool next() = 0;
    void * buffer() { return _buffer; }
    void * buffer_address() { return &_buffer; }
    const StripeReader* stripe_reader() const { return _reader; }
 protected:
    StdVectorReader() : _buffer(NULL), _reader(NULL) {};
    void * _buffer;
    StripeReader *_reader;
};

// Plain-Old-Data reader for level==0 fields
template<WireFormatLite::FieldType type>
class TypedPODReader : public StdVectorReader {
 public:
    typedef typename TypeFromFieldType<type>::type T;
    static TypedPODReader<type>* Make(StripeReader *sreader, CodedInputStream *d);
    bool next();
 private:
    T _buf;
    DataDecoder<type> _decoder;
    TypedPODReader() : _buf() { _buffer = &_buf; };
};

// The fully templated typed StdVector reader
template<WireFormatLite::FieldType type, int level>
class TypedStdVectorReader : public StdVectorReader {
 public:
    static_assert(level >= 1 and level <= 4, "The level is too damn high!");
    typedef typename TypeFromFieldType<type>::type T;
    // Create a typedef that contains the required std::vector
    typedef typename NestedVector<T,level>::type vT;
    static TypedStdVectorReader<type,level>* Make(StripeReader *sreader, CodedInputStream *d);
    bool next();
    const vT& data() const { return _vbuf; };
 private:
    uint8_t _dl, _rl;
    vT _vbuf;
    DataDecoder<type> _decoder;
    TypedStdVectorReader() : _dl(0), _rl(0), _vbuf() { _buffer = &_vbuf; };

    // Internal decoder functions
    void decode_into(std::vector<T> &v, int rl, int count, int d=1);
    template<typename U>
    void decode_into(std::vector<std::vector<U>> &v, int rl, int count, int d=1);
};


#endif
