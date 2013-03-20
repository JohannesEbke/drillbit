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
template<typename T, int level> bool StripeReader::next_line(uint8_t &rl, uint8_t &dl, T *buffer) {
    if (level > 0) {
        uint32_t tag = 0;
        if (not _meta->ReadVarint32(&tag)) return false;
        if (level == 1) {
            dl = tag % 2;
            rl = tag / 2;
        } else {
            dl = tag % 4;
            rl = tag / 4;
        }
        if (dl != level) return true;
    }

    bool r = false;
    if (std::is_same<T, int32_t>::value) {
        // TYPE_INT32, TYPE_SFIXED32, TYPE_SINT32
        switch(WireFormatLite::FieldType(_field_type)) {
            case WireFormatLite::TYPE_INT32:
                r = WireFormatLite::ReadPrimitive<int32_t, WireFormatLite::TYPE_INT32>(_data, (int32_t*)buffer);
                break;
            case WireFormatLite::TYPE_SFIXED32:
                r = WireFormatLite::ReadPrimitive<int32_t, WireFormatLite::TYPE_SFIXED32>(_data, (int32_t*)buffer);
                break;
            case WireFormatLite::TYPE_SINT32:
                r = WireFormatLite::ReadPrimitive<int32_t, WireFormatLite::TYPE_SINT32>(_data, (int32_t*)buffer);
                break;
            // enum is listed unter INT32 as well as INT64 since it can be both.
            case WireFormatLite::TYPE_ENUM:
                r = WireFormatLite::ReadPrimitive<int, WireFormatLite::TYPE_ENUM>(_data, (int*)buffer);
                break;
            default:
                assert(false);
        }
    } else if (std::is_same<T, uint32_t>::value) {
        // TYPE_UINT32, TYPE_FIXED32
        switch(WireFormatLite::FieldType(_field_type)) {
            case WireFormatLite::TYPE_UINT32:
                r = WireFormatLite::ReadPrimitive<uint32_t, WireFormatLite::TYPE_UINT32>(_data, (uint32_t*)buffer);
                break;
            case WireFormatLite::TYPE_FIXED32:
                r = WireFormatLite::ReadPrimitive<uint32_t, WireFormatLite::TYPE_FIXED32>(_data, (uint32_t*)buffer);
                break;
            default:
                assert(false);
        }
    } else if (std::is_same<T, int64_t>::value) {
        // TYPE_INT64, TYPE_SFIXED64, TYPE_SINT64
        switch(WireFormatLite::FieldType(_field_type)) {
            case WireFormatLite::TYPE_INT64:
                r = WireFormatLite::ReadPrimitive<int64_t, WireFormatLite::TYPE_INT64>(_data, (int64_t*)buffer);
                break;
            case WireFormatLite::TYPE_SFIXED64:
                r = WireFormatLite::ReadPrimitive<int64_t, WireFormatLite::TYPE_SFIXED64>(_data, (int64_t*)buffer);
                break;
            case WireFormatLite::TYPE_SINT64:
                r = WireFormatLite::ReadPrimitive<int64_t, WireFormatLite::TYPE_SINT64>(_data, (int64_t*)buffer);
                break;
            case WireFormatLite::TYPE_ENUM:
                r = WireFormatLite::ReadPrimitive<int, WireFormatLite::TYPE_ENUM>(_data, (int*)buffer);
                break;
            default:
                assert(false);
        }
    } else if (std::is_same<T, uint64_t>::value) {
        // TYPE_UINT64, TYPE_FIXED64
        switch(WireFormatLite::FieldType(_field_type)) {
            case WireFormatLite::TYPE_UINT64:
                r = WireFormatLite::ReadPrimitive<uint64_t, WireFormatLite::TYPE_UINT64>(_data, (uint64_t*)buffer);
                break;
            case WireFormatLite::TYPE_FIXED64:
                r = WireFormatLite::ReadPrimitive<uint64_t, WireFormatLite::TYPE_FIXED64>(_data, (uint64_t*)buffer);
                break;
            default:
                assert(false);
        }
    } else if (std::is_same<T, float>::value) {
        r = WireFormatLite::ReadPrimitive<float, WireFormatLite::TYPE_FLOAT>(_data, (float*)buffer);
    } else if (std::is_same<T, double>::value) {
        r = WireFormatLite::ReadPrimitive<double, WireFormatLite::TYPE_DOUBLE>(_data, (double*)buffer);
    } else if (std::is_same<T, bool>::value) {
        r = WireFormatLite::ReadPrimitive<bool, WireFormatLite::TYPE_BOOL>(_data, (bool*)buffer);
    } else if (std::is_same<T, std::string>::value) {
        uint32_t size;
        r = _data->ReadVarint32(&size);
        if (r) {
            r = _data->ReadString((std::string*)buffer, size);
        } 
    } else assert (false);

    // If the data read fails here we have a corrupted file/stream
    if (level > 0) assert(r);
    return r;
}

#endif
