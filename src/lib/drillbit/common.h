#ifndef DRILLBIT_COMMON_H_
#define DRILLBIT_COMMON_H_

#include <vector>

#include <google/protobuf/wire_format_lite.h>
using google::protobuf::internal::WireFormatLite;

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

static constexpr WireFormatLite::CppType kFieldTypeToCppTypeMap[WireFormatLite::MAX_FIELD_TYPE + 1] = {
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

template<enum WireFormatLite::FieldType field_type>
class TypeFromFieldType {
 public:
    // Redeclare kFieldTypeToCppTypeMap to be constexpr

    static constexpr enum WireFormatLite::CppType cpp_type = kFieldTypeToCppTypeMap[static_cast<const int>(field_type)];
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

// Macro to switch a dynamic type into a statically compiled type
// Due to variadic macros, you can write any code on the right-hand side
// In that code, "type" is a const WireFormatLite::FieldType which you can use e.g.
// in templates.
#define SWITCH_TYPE_TO_CONST(ftype, ...) switch(ftype) {\
    case WireFormatLite::TYPE_DOUBLE: { const WireFormatLite::FieldType type = WireFormatLite::TYPE_DOUBLE; { __VA_ARGS__ ;}; break; }\
    case WireFormatLite::TYPE_FLOAT: { const WireFormatLite::FieldType type = WireFormatLite::TYPE_FLOAT; { __VA_ARGS__ ;}; break; }\
    case WireFormatLite::TYPE_INT64: { const WireFormatLite::FieldType type = WireFormatLite::TYPE_INT64; { __VA_ARGS__ ;}; break; }\
    case WireFormatLite::TYPE_UINT64: { const WireFormatLite::FieldType type = WireFormatLite::TYPE_UINT64; { __VA_ARGS__ ;}; break; }\
    case WireFormatLite::TYPE_INT32: { const WireFormatLite::FieldType type = WireFormatLite::TYPE_INT32; { __VA_ARGS__ ;}; break; }\
    case WireFormatLite::TYPE_FIXED64: { const WireFormatLite::FieldType type = WireFormatLite::TYPE_FIXED64; { __VA_ARGS__ ;}; break; }\
    case WireFormatLite::TYPE_FIXED32: { const WireFormatLite::FieldType type = WireFormatLite::TYPE_FIXED32; { __VA_ARGS__ ;}; break; }\
    case WireFormatLite::TYPE_BOOL: { const WireFormatLite::FieldType type = WireFormatLite::TYPE_BOOL; { __VA_ARGS__ ;}; break; }\
    case WireFormatLite::TYPE_STRING: { const WireFormatLite::FieldType type = WireFormatLite::TYPE_STRING; { __VA_ARGS__ ;}; break; }\
    case WireFormatLite::TYPE_BYTES: { const WireFormatLite::FieldType type = WireFormatLite::TYPE_BYTES; { __VA_ARGS__ ;}; break; }\
    case WireFormatLite::TYPE_UINT32: { const WireFormatLite::FieldType type = WireFormatLite::TYPE_UINT32; { __VA_ARGS__ ;}; break; }\
    case WireFormatLite::TYPE_ENUM: { const WireFormatLite::FieldType type = WireFormatLite::TYPE_ENUM; { __VA_ARGS__ ;}; break; }\
    case WireFormatLite::TYPE_SFIXED32: { const WireFormatLite::FieldType type = WireFormatLite::TYPE_SFIXED32; { __VA_ARGS__ ;}; break; }\
    case WireFormatLite::TYPE_SFIXED64: { const WireFormatLite::FieldType type = WireFormatLite::TYPE_SFIXED64; { __VA_ARGS__ ;}; break; }\
    case WireFormatLite::TYPE_SINT32: { const WireFormatLite::FieldType type = WireFormatLite::TYPE_SINT32; { __VA_ARGS__ ;}; break; }\
    case WireFormatLite::TYPE_SINT64: { const WireFormatLite::FieldType type = WireFormatLite::TYPE_SINT64; { __VA_ARGS__ ;}; break; }\
}

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
