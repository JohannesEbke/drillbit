#ifndef OPEN_STRIPES_H_
#define OPEN_STRIPES_H_

#include <vector>
#include <string>
#include <utility>
#include <memory>

namespace google { namespace protobuf { namespace io {
    class CodedInputStream; 
    class CodedOutputStream; 
    class ZeroCopyInputStream;
    class ZeroCopyOutputStream;
}; }; };

using google::protobuf::io::CodedInputStream;
using google::protobuf::io::CodedOutputStream;
using google::protobuf::io::ZeroCopyInputStream;
using google::protobuf::io::ZeroCopyOutputStream;

class StripeInputImpl;
class StripeOutputImpl;

class StripeInputStream {
 public:
    virtual ~StripeInputStream() {};
    ZeroCopyInputStream *meta;
    CodedInputStream *data;
};

class StripeOutputStream {
 public:
    virtual ~StripeOutputStream() {};
    ZeroCopyOutputStream *meta;
    CodedOutputStream *data;
};

std::vector<std::shared_ptr<StripeInputStream>> open_stripes(const std::vector<std::string>& dit_files);
std::shared_ptr<StripeOutputStream> open_stripes_write(const std::string& dit_file);

#endif
