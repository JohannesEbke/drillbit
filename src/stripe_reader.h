#ifndef DRILLBIT_STRIPEREADER_H_
#define DRILLBIT_STRIPEREADER_H_

#include <string>

#include "drillbit.pb.h"
#include "datastripe_stream.h"

namespace google { namespace protobuf { namespace io { class CodedInputStream; }; }; };
using google::protobuf::io::CodedInputStream;

// What needs to be done?
// * read the meta data header
// * decode wire into cpp type
// * yield rl/dl/data triples

class StripeReader {
 public:
    static StripeReader * Make(CodedInputStream *meta, CodedInputStream *data);
    // Get the Stripe information
    const StripeInfo& info() const { return _info; };
    // assert that the type T is compatible with the stripe field type
    template<typename T> bool is_correct_type() const;
    // returns repetition and definition level of the next metadata line
    // if the definition level is equal to the maximum possible, the 
    // corresponding data is written to buffer, which is otherwise untouched.
    template<typename T, int level> bool next_line(uint8_t &rl, uint8_t &dl, T *buffer);
 private:
    StripeReader() : _info(), _meta(NULL), _data(NULL), _dstream(NULL) {};
    StripeInfo _info;
    CodedInputStream *_meta, *_data;
    DatastripeInputStream *_dstream;
    int _field_type;
};

#endif
