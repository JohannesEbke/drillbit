#ifndef DRILLBIT_STRIPEREADER_H_
#define DRILLBIT_STRIPEREADER_H_

#include <string>

#include "drillbit.pb.h"

namespace google { namespace protobuf { namespace io { class CodedInputStream; }; }; };
using google::protobuf::io::CodedInputStream;

// What needs to be done?
// * read the meta data header
// * decode wire into cpp type
// * yield rl/dl/data triples

class StripeReader {
 public:
    static StripeReader * Make(CodedInputStream *meta);
    // Get the Stripe information
    const StripeInfo& info() const { return _info; };
    // assert that the type T is compatible with the stripe field type
    template<typename T> bool is_correct_type() const;
    // returns repetition and definition level of the next metadata line
    template<typename T, int level> bool next_line(uint8_t &rl, uint8_t &dl);
 private:
    StripeReader() : _info(), _meta(NULL) {};
    StripeInfo _info;
    CodedInputStream *_meta;
    int _field_type;
};

#endif
