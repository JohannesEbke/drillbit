#ifndef DRILLBIT_STRIPE_WRITER_H_
#define DRILLBIT_STRIPE_WRITER_H_

#include <string>

#include "drillbit.pb.h"

namespace google { namespace protobuf { namespace io { class CodedOutputStream; }; }; };
using google::protobuf::io::CodedOutputStream;

class StripeWriter {
 public:
    static StripeWriter* Make(CodedOutputStream *meta, CodedOutputStream *data, const StripeInfo &info);
    // assert that the type T is compatible with the stripe field type
    template<typename T> bool is_correct_type() const;

    template<int level> void write_line(uint8_t rl, uint8_t dl);
    template<typename T, int level> void write_line(uint8_t rl, uint8_t dl, const T &buffer);

 private:
    StripeWriter() : _info(), _meta(NULL), _data(NULL) {};
    StripeInfo _info;
    CodedOutputStream *_meta, *_data;
    int _field_type;
};

#endif
