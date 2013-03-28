#ifndef DRILLBIT_STRIPEREADER_H_
#define DRILLBIT_STRIPEREADER_H_

#include <string>

#include "metadata.pb.h"

namespace google { namespace protobuf { namespace io { 
    class ZeroCopyInputStream; 
    class ZeroCopyOutputStream;
}; }; };
using google::protobuf::io::ZeroCopyInputStream;
using google::protobuf::io::ZeroCopyOutputStream;

class MetaReader {
 public:
    static MetaReader * Make(ZeroCopyInputStream *meta);

    // Get the Stripe information
    const StripeInfo& info() const { return _info; };
    // returns repetition and definition level of the next metadata line
    bool next_rldl(uint8_t &rl, uint8_t &dl) __attribute__ ((always_inline)); // TODO: Check if this improves speed
    bool next_dl(uint8_t &dl) __attribute__ ((always_inline));
 private:
    MetaReader() : _info(), _meta(NULL), _buffer(NULL), _buffer_end(NULL) {};
    StripeInfo _info;
    ZeroCopyInputStream *_meta;
    const uint8_t *_buffer;
    const uint8_t *_buffer_end;
    uint8_t _max_dl;
};

class MetaWriter {
 public:
    MetaWriter() : _meta(NULL), _buffer(NULL), _buffer_end(NULL) {};
    ~MetaWriter();
    void start(ZeroCopyOutputStream *meta, const StripeInfo &info);
    // Get the Stripe information
    const StripeInfo& info() const { return _info; };
    // write repetition and definition level of the next metadata line
    void write_rldl(const uint8_t &rl, const uint8_t &dl)  __attribute__ ((always_inline)); // TODO: Check if this improves speed
 private:
    ZeroCopyOutputStream *_meta;
    uint8_t *_buffer;
    uint8_t *_buffer_end;
    StripeInfo _info;
    uint8_t _max_dl;
};

#endif
