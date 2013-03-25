#ifndef DRILLBIT_COMMON_H_
#define DRILLBIT_COMMON_H_

#include <vector>

#include <google/protobuf/wire_format_lite.h>
using google::protobuf::internal::WireFormatLite;

// Redeclare kFieldTypeToCppTypeMap to be constexpr
constexpr WireFormatLite::CppType kFieldTypeToCppTypeMap[WireFormatLite::MAX_FIELD_TYPE + 1] = {
  static_cast<WireFormatLite::CppType>(0),  // 0 is reserved for errors
  WireFormatLite::CPPTYPE_DOUBLE,   // TYPE_DOUBLE
  WireFormatLite::CPPTYPE_FLOAT,    // TYPE_FLOAT
  WireFormatLite::CPPTYPE_INT64,    // TYPE_INT64
  WireFormatLite::CPPTYPE_UINT64,   // TYPE_UINT64
  WireFormatLite::CPPTYPE_INT32,    // TYPE_INT32
  WireFormatLite::CPPTYPE_UINT64,   // TYPE_FIXED64
  WireFormatLite::CPPTYPE_UINT32,   // TYPE_FIXED32
  WireFormatLite::CPPTYPE_BOOL,     // TYPE_BOOL
  WireFormatLite::CPPTYPE_STRING,   // TYPE_STRING
  WireFormatLite::CPPTYPE_MESSAGE,  // TYPE_GROUP
  WireFormatLite::CPPTYPE_MESSAGE,  // TYPE_MESSAGE
  WireFormatLite::CPPTYPE_STRING,   // TYPE_BYTES
  WireFormatLite::CPPTYPE_UINT32,   // TYPE_UINT32
  WireFormatLite::CPPTYPE_ENUM,     // TYPE_ENUM
  WireFormatLite::CPPTYPE_INT32,    // TYPE_SFIXED32
  WireFormatLite::CPPTYPE_INT64,    // TYPE_SFIXED64
  WireFormatLite::CPPTYPE_INT32,    // TYPE_SINT32
  WireFormatLite::CPPTYPE_INT64,    // TYPE_SINT64
};

template<enum WireFormatLite::CppType cpp_type>
class TypeFromCppType {
 public:
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
 public:
#define cpp_type kFieldTypeToCppTypeMap[field_type]
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
 public:
    static_assert(L > 0 and L < 4, "nested vector length not in range");
    typedef typename std::conditional<L==1, std::vector<T>,
            typename std::conditional<L==2, std::vector<std::vector<T>>,
            typename std::conditional<L==3, std::vector<std::vector<std::vector<T>>>,
            std::vector<std::vector<std::vector<std::vector<T>>>>
            >::type>::type>::type type;
};

#endif
