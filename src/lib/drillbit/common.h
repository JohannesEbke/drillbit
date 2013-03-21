#ifndef DRILLBIT_COMMON_H_
#define DRILLBIT_COMMON_H_

#include <vector>

#include <google/protobuf/wire_format_lite.h>

using google::protobuf::internal::WireFormatLite;

template<enum WireFormatLite::CppType cpp_type>
class TypeFromCppType {
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

template<enum WireFormatLite::FieldType field_type>
class TypeFromFieldType {
#define cpp_type WireFormatLite::FieldTypeToCppType(field_type)
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
#undef cpp_type
};

template<typename T, unsigned int L>
class NestedVector {
    static_assert(L > 0 and L < 4, "nested vector length not in range");
    typedef typename std::conditional<L==1, std::vector<T>,
            typename std::conditional<L==2, std::vector<std::vector<T>>,
            typename std::conditional<L==3, std::vector<std::vector<std::vector<T>>>,
            std::vector<std::vector<std::vector<std::vector<T>>>>
            >::type>::type>::type type;
};

#endif
