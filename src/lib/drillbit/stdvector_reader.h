#ifndef STDVECTOR_READER_H_
#define STDVECTOR_READER_H_

#include "drillbit.pb.h"
#include "stripe_reader.h"

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
    DatastripeInputStream *_dstream;
};

// Plain-Old-Data reader for level==0 fields
template<typename T>
class TypedPODReader : public StdVectorReader {
 public:
    static TypedPODReader<T>* Make(StripeReader *sreader);
    bool next();
 private:
    T _buf;
    TypedPODReader() : _buf() { _buffer = &_buf; };
};

// The fully templated typed StdVector reader
template<typename T, int level>
class TypedStdVectorReader : public StdVectorReader {
 public:
    static_assert(level >= 1 and level <= 4, "The level is too damn high!");
    // Create a typedef that contains the required std::vector
    typedef typename std::conditional<level==1, std::vector<T>,
            typename std::conditional<level==2, std::vector<std::vector<T>>,
            typename std::conditional<level==3, std::vector<std::vector<std::vector<T>>>,
            std::vector<std::vector<std::vector<std::vector<T>>>>
            >::type>::type>::type type;
    static TypedStdVectorReader<T,level>* Make(StripeReader *sreader);
    bool next();
    const type& data() const { return _vbuf; };
 private:
    uint8_t _dl, _rl;
    T _buf;
    type _vbuf;

    TypedStdVectorReader() : _dl(0), _rl(0), _buf() { _buffer = &_vbuf; };
};


#endif
