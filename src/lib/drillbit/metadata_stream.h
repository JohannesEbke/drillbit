#ifndef DRILLBIT_STRIPEREADER_H_
#define DRILLBIT_STRIPEREADER_H_

#include <string>

#include "metadata.pb.h"

namespace google { namespace protobuf { namespace io { 
    class CodedInputStream; 
    class CodedOutputStream;
}; }; };
using google::protobuf::io::CodedInputStream;
using google::protobuf::io::CodedOutputStream;

class MetaReader {
 public:
    static MetaReader * Make(CodedInputStream *meta);
    // Get the Stripe information
    const StripeInfo& info() const { return _info; };
    // returns repetition and definition level of the next metadata line
    bool next_rldl(uint8_t &rl, uint8_t &dl) __attribute__ ((always_inline)); // TODO: Check if this improves speed
    bool next_dl(uint8_t &dl) __attribute__ ((always_inline));
 private:
    MetaReader() : _info(), _meta(NULL) {};
    StripeInfo _info;
    CodedInputStream *_meta;
    uint8_t _max_dl;
};

class MetaWriter {
 public:
    MetaWriter() : _meta(NULL) {};
    void start(CodedOutputStream *meta, const StripeInfo &info);
    // Get the Stripe information
    const StripeInfo& info() const { return _info; };
    // write repetition and definition level of the next metadata line
    void write_rldl(const uint8_t &rl, const uint8_t &dl)  __attribute__ ((always_inline)); // TODO: Check if this improves speed
 private:
    CodedOutputStream *_meta;
    StripeInfo _info;
    uint8_t _max_dl;
};

#endif
