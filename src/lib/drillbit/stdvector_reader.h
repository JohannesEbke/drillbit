#ifndef STDVECTOR_READER_H_
#define STDVECTOR_READER_H_

#include "metadata.pb.h"
#include "metadata_stream.h"
#include "data_codec.h"

// An untemplated interface to a stdvectorreader with some common variables
class StdVectorReader {
 public:
    static StdVectorReader* Make(MetaReader *s, ZeroCopyInputStream *d); // Will return an instance of a typed reader

    virtual bool next() = 0;
    void * buffer() { return _buffer; }
    void * buffer_address() { return &_buffer; }
    const MetaReader* metadata_stream() const { return _reader; }
 protected:
    StdVectorReader() : _buffer(NULL), _reader(NULL) {};
    void * _buffer;
    MetaReader *_reader;
    uint8_t _max_dl;
};

// Plain-Old-Data reader for max_rl==0 fields
template<WireFormatLite::FieldType type>
class TypedPODReader : public StdVectorReader {
 public:
    typedef typename TypeFromFieldType<type>::type T;
    static TypedPODReader<type>* Make(MetaReader *sreader, ZeroCopyInputStream *d);
    bool next();
 private:
    T _buf;
    DataDecoder<type> _decoder;
    TypedPODReader() : _buf() { _buffer = &_buf; };
};

// The fully templated typed StdVector reader
template<WireFormatLite::FieldType type, int max_rl>
class TypedStdVectorReader : public StdVectorReader {
 public:
    static_assert(max_rl >= 1 and max_rl <= 4, "The repetition level is too damn high!");
    typedef typename TypeFromFieldType<type>::type T;
    // Create a typedef that contains the required std::vector
    typedef typename NestedVector<T,max_rl>::type vT;
    static TypedStdVectorReader<type,max_rl>* Make(MetaReader *sreader, ZeroCopyInputStream *d);
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
