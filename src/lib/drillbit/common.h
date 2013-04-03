// This is a file with useful template magic bits for working with
// the protobuf wire format.
#ifndef DRILLBIT_COMMON_H_
#define DRILLBIT_COMMON_H_

#include <vector>
#include <limits>

#include <google/protobuf/wire_format_lite.h>
using google::protobuf::internal::WireFormatLite;

// C++ template magic that gives you a real type from a CppType enum
// e.g. "TypeFromCppType<WireFormatLite::CPPTYPE_FLOAT>::type f;" initialises
// a float named f.
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

// A copy of the kFieldTypeToCppTypeMap from protobuf - unfortunately, the 
// declaration there is not inline, but the compiler must be able to see this
// during compilation.
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

// More compiler magic to give you the C++ type from a FieldType enum. 
// Example: "TypeFromFieldType<WireFormatLite::TYPE_FIXED32>::type i;"
// is the same as writing "uint32_t i;".
template<enum WireFormatLite::FieldType field_type>
class TypeFromFieldType {
 public:
    static constexpr enum WireFormatLite::CppType cpp_type = kFieldTypeToCppTypeMap[static_cast<const int>(field_type)];
    typedef typename TypeFromCppType<cpp_type>::type type;
};

// Class to get a sensible "invalid" value for a certain field type
// Example: "InvalidValueOf<WireFormatLite::TYPE_FIXED32>::value()" returns
// UINT32_MAX.
// value() returns the maximum numeric value for all integer types, 
// returns a (signaling) NaN for floating point types, false for bools and
// the empty string for byte and string fields.
template<enum WireFormatLite::FieldType type>
class InvalidValueOf {
 public:
    // Return type must be defined separately as const char* for strings
    // since std::string cannot be returned by a constexpr
    typedef typename std::conditional<
            type == WireFormatLite::TYPE_STRING || type == WireFormatLite::TYPE_BYTES, const char*,
            typename TypeFromFieldType<type>::type
        >::type T;
    // This definition is only called for integers, other types are overridden
    static constexpr T value() { return std::numeric_limits<T>::max(); };
};

// Override the value() function for different types
template<>
constexpr float InvalidValueOf<WireFormatLite::TYPE_FLOAT>::value() { return std::numeric_limits<float>::signaling_NaN(); };
template<>
constexpr double InvalidValueOf<WireFormatLite::TYPE_DOUBLE>::value() { return std::numeric_limits<double>::signaling_NaN(); };
// A bool has a bit too little information... :(
template<>
constexpr bool InvalidValueOf<WireFormatLite::TYPE_BOOL>::value() { return false; };
// Note: Using NULL in the following instead of "" does not work, since this
// would throw a std::logic_error at string construction time.
template<>
constexpr const char* InvalidValueOf<WireFormatLite::TYPE_STRING>::value() { return ""; };
template<>
constexpr const char* InvalidValueOf<WireFormatLite::TYPE_BYTES>::value() { return ""; };

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

// More Magic to obtain a nested vector of depth L and type T
// NestedVector<float,3>::type v; // is the same as...
// vector<vector<vector<float>>> v;
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
