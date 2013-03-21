#include <google/protobuf/wire_format_lite.h>

using google::protobuf::internal::WireFormatLite;

template<enum WireFormatLite::CppType cpp_type>
class CppTypeOf {
    typedef typename std::conditional<cpp_type == WireFormatLite::CPPTYPE_INT32, int32_t, 
    typename std::conditional<cpp_type == WireFormatLite::CPPTYPE_UINT32, uint32_t, 
    typename std::conditional<cpp_type == WireFormatLite::CPPTYPE_FLOAT, float, 
    typename std::conditional<cpp_type == WireFormatLite::CPPTYPE_BOOL, bool, 
    typename std::conditional<cpp_type == WireFormatLite::CPPTYPE_ENUM, int, 
    typename std::conditional<cpp_type == WireFormatLite::CPPTYPE_INT64, int64_t, 
    typename std::conditional<cpp_type == WireFormatLite::CPPTYPE_UINT64, uint64_t, 
    typename std::conditional<cpp_type == WireFormatLite::CPPTYPE_DOUBLE, double, 
    typename std::conditional<cpp_type == WireFormatLite::CPPTYPE_STRING, std::string, 
    void* 
    >::type>::type>::type>::type>::type>::type>::type>::type>::type type;
};


