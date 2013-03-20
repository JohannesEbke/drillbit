#ifndef OPEN_STRIPES_H_
#define OPEN_STRIPES_H_

#include <vector>
#include <string>
#include <utility>

namespace google { namespace protobuf { namespace io { class CodedInputStream; }; }; };
std::vector<std::pair<google::protobuf::io::CodedInputStream*, google::protobuf::io::CodedInputStream*>>
    open_stripes(const std::vector<std::string>& dit_files);

#endif
