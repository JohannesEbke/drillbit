#ifndef DRILLBIT_STRIPE_READER_IMPL_H_
#define DRILLBIT_STRIPE_READER_IMPL_H_

#include <string>
#include <iostream>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/wire_format_lite_inl.h>

using google::protobuf::internal::WireFormatLite;
using google::protobuf::io::CodedInputStream;


template<typename T>
bool StripeReader::is_correct_type() const {
    switch(WireFormatLite::FieldTypeToCppType(WireFormatLite::FieldType(_info.field_type()))) {
        case WireFormatLite::CPPTYPE_INT32:  return std::is_same<T, int32_t>::value;
        case WireFormatLite::CPPTYPE_UINT32: return std::is_same<T, uint32_t>::value;
        case WireFormatLite::CPPTYPE_FLOAT:  return std::is_same<T, float>::value;
        case WireFormatLite::CPPTYPE_BOOL:   return std::is_same<T, bool>::value;
        case WireFormatLite::CPPTYPE_ENUM:   return std::is_same<T, int>::value;
        case WireFormatLite::CPPTYPE_INT64:  return std::is_same<T, int64_t>::value;
        case WireFormatLite::CPPTYPE_UINT64: return std::is_same<T, uint64_t>::value;
        case WireFormatLite::CPPTYPE_DOUBLE: return std::is_same<T, double>::value;
        case WireFormatLite::CPPTYPE_STRING: return std::is_same<T, std::string>::value;
        case WireFormatLite::CPPTYPE_MESSAGE:
        default:
            std::cerr << "Unknown/Unsupported field type " << _info.field_type() << std::endl;
            assert(false);
            return false;
    }
};

// returns repetition and definition level of the next metadata line
// if the definition level is equal to the maximum possible, the 
// corresponding data is written to buffer, which is otherwise untouched.
template<typename T, int level> bool StripeReader::next_line(uint8_t &rl, uint8_t &dl) {
    assert(level > 0);
    uint32_t tag = 0;
    if (not _meta->ReadVarint32(&tag)) return false;
    if (level == 1) {
        dl = tag % 2;
        rl = tag / 2;
    } else {
        dl = tag % 4;
        rl = tag / 4;
    }
    assert(dl >= rl); // mandated by the anti-corruption authority
    return true;
}

#endif
