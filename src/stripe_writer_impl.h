#ifndef DRILLBIT_STRIPE_WRITER_IMPL_H_
#define DRILLBIT_STRIPE_WRITER_IMPL_H_

#include <string>
#include <iostream>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/wire_format_lite_inl.h>

using google::protobuf::internal::WireFormatLite;
using google::protobuf::io::CodedOutputStream;

#include "stripe_writer.h"

template<typename T>
bool StripeWriter::is_correct_type() const {
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

template<int level> void StripeWriter::write_line(uint8_t rl, uint8_t dl) {
    assert(dl != level);
    if (level == 1) {
        _meta->WriteVarint32(rl*2 + dl);
    } else if (level >= 2 and level <= 3) {
        _meta->WriteVarint32(rl*4 + dl);
    } else {
        static_assert(level < 4, "The level is too damn high!");
    }
}

// returns repetition and definition level of the next metadata line
// if the definition level is equal to the maximum possible, the 
// corresponding data is written to buffer, which is otherwise untouched.
template<typename T, int level> void StripeWriter::write_line(uint8_t rl, uint8_t dl, const T &_buffer) {
    const T *buffer = &_buffer;
    if (level == 1) {
        _meta->WriteVarint32(rl*2 + dl);
        if (dl != level) return;
    } else if (level >= 2 and level <= 3) {
        _meta->WriteVarint32(rl*4 + dl);
        if (dl != level) return;
    } else {
        static_assert(level < 4, "The level is too damn high!");
    }

    if (std::is_same<T, int32_t>::value) {
        // TYPE_INT32, TYPE_SFIXED32, TYPE_SINT32
        switch(WireFormatLite::FieldType(_field_type)) {
            case WireFormatLite::TYPE_INT32:
                WireFormatLite::WriteInt32NoTag(*(int32_t*)buffer, _data);
                break;
            case WireFormatLite::TYPE_SFIXED32:
                WireFormatLite::WriteSFixed32NoTag(*(int32_t*)buffer, _data);
                break;
            case WireFormatLite::TYPE_SINT32:
                WireFormatLite::WriteSInt32NoTag(*(int32_t*)buffer, _data);
                break;
            // enum is listed unter INT32 as well as INT64 since it can be both.
            case WireFormatLite::TYPE_ENUM:
                WireFormatLite::WriteEnumNoTag(*(int*)buffer, _data);
                break;
            default:
                assert(false);
        }
    } else if (std::is_same<T, uint32_t>::value) {
        // TYPE_UINT32, TYPE_FIXED32
        switch(WireFormatLite::FieldType(_field_type)) {
            case WireFormatLite::TYPE_UINT32:
                WireFormatLite::WriteUInt32NoTag(*(uint32_t*)buffer, _data);
                break;
            case WireFormatLite::TYPE_FIXED32:
                WireFormatLite::WriteFixed32NoTag(*(uint32_t*)buffer, _data);
                break;
            default:
                assert(false);
        }
    } else if (std::is_same<T, int64_t>::value) {
        // TYPE_INT64, TYPE_SFIXED64, TYPE_SINT64
        switch(WireFormatLite::FieldType(_field_type)) {
            case WireFormatLite::TYPE_INT64:
                WireFormatLite::WriteInt64NoTag(*(int64_t*)buffer, _data);
                break;
            case WireFormatLite::TYPE_SFIXED64:
                WireFormatLite::WriteSFixed64NoTag(*(int64_t*)buffer, _data);
                break;
            case WireFormatLite::TYPE_SINT64:
                WireFormatLite::WriteSInt64NoTag(*(int64_t*)buffer, _data);
                break;
            case WireFormatLite::TYPE_ENUM:
                WireFormatLite::WriteEnumNoTag(*(int*)buffer, _data);
                break;
            default:
                assert(false);
        }
    } else if (std::is_same<T, uint64_t>::value) {
        // TYPE_UINT64, TYPE_FIXED64
        switch(WireFormatLite::FieldType(_field_type)) {
            case WireFormatLite::TYPE_UINT64:
                WireFormatLite::WriteUInt64NoTag(*(uint64_t*)buffer, _data);
                break;
            case WireFormatLite::TYPE_FIXED64:
                WireFormatLite::WriteFixed64NoTag(*(uint64_t*)buffer, _data);
                break;
            default:
                assert(false);
        }
    } else if (std::is_same<T, float>::value) {
        WireFormatLite::WriteFloatNoTag(*(float*)buffer, _data);
    } else if (std::is_same<T, double>::value) {
        WireFormatLite::WriteDoubleNoTag(*(double*)buffer, _data);
    } else if (std::is_same<T, bool>::value) {
        WireFormatLite::WriteBoolNoTag(*(bool*)buffer, _data);
    } else if (std::is_same<T, std::string>::value) {
        uint32_t size;
        _data->WriteVarint32(size);
        _data->WriteString(*(std::string*)buffer);
    } else assert (false);
}

#endif
