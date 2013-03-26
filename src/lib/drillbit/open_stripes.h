#ifndef OPEN_STRIPES_H_
#define OPEN_STRIPES_H_

#include <vector>
#include <string>
#include <utility>

namespace google { namespace protobuf { namespace io {
    class CodedInputStream; 
    class CodedOutputStream; 
}; }; };
using google::protobuf::io::CodedInputStream;
using google::protobuf::io::CodedOutputStream;

class StripeInputImpl;
class StripeOutputImpl;

struct StripeInputStream {
    CodedInputStream *meta;
    CodedInputStream *data;
    StripeInputImpl *_impl;
    void Close();
};

struct StripeOutputStream {
    CodedOutputStream *meta;
    CodedOutputStream *data;
    StripeOutputImpl *_impl;
    void Close();
};

std::vector<StripeInputStream> open_stripes(const std::vector<std::string>& dit_files);
StripeOutputStream open_stripes_write(const std::string& dit_file);

#endif
