#ifndef OPEN_STRIPES_H_
#define OPEN_STRIPES_H_

#include <vector>
#include <string>
#include <memory>

namespace google { namespace protobuf { namespace io {
    class ZeroCopyInputStream;
    class ZeroCopyOutputStream;
}; }; };
using google::protobuf::io::ZeroCopyInputStream;
using google::protobuf::io::ZeroCopyOutputStream;

class StripeInputStream {
 public:
    virtual ~StripeInputStream() {};
    ZeroCopyInputStream *meta;
    ZeroCopyInputStream *data;
};

class StripeOutputStream {
 public:
    virtual ~StripeOutputStream() {};
    ZeroCopyOutputStream *meta;
    ZeroCopyOutputStream *data;
};

typedef std::shared_ptr<StripeInputStream> StripeInputStreamPtr;
typedef std::shared_ptr<StripeOutputStream> StripeOutputStreamPtr;

StripeInputStreamPtr open_stripe_read(const std::string& dit_file);
StripeOutputStreamPtr open_stripe_write(const std::string& dit_files);

std::vector<StripeInputStreamPtr> open_stripes_read(const std::vector<std::string>& dit_files) {
    std::vector<StripeInputStreamPtr> v;
    for(std::string f : dit_files) v.push_back(open_stripe_read(f));
    return v;
};

std::vector<StripeOutputStreamPtr> open_stripes_write(const std::vector<std::string>& dit_files) {
    std::vector<StripeOutputStreamPtr> v;
    for(std::string f : dit_files) v.push_back(open_stripe_write(f));
    return v;
};

#endif
