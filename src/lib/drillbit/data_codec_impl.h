#ifndef DRILLBIT_DATA_CODEC_IMPL_H_
#define DRILLBIT_DATA_CODEC_IMPL_H_

#include "data_codec.h"
#include <google/protobuf/wire_format_lite_inl.h>

template <>
bool DataDecoder<WireFormatLite::TYPE_STRING>::DecodeInto(std::string *data, int size) {
    for (int i = 0; i < size; i++) {
        uint32_t ssize;
        if(_sub_stream->ReadVarint32(&ssize)) {
            assert(_sub_stream->ReadString(&(data[i]), ssize));
        } else return false;
    }
    return true;
}

template <>
bool DataDecoder<WireFormatLite::TYPE_BYTES>::DecodeInto(std::string *data, int size) {
    for (int i = 0; i < size; i++) {
        uint32_t ssize;
        if(_sub_stream->ReadVarint32(&ssize)) {
            assert(_sub_stream->ReadString(&(data[i]), ssize));
        } else return false;
    }
    return true;
}

template<WireFormatLite::FieldType type>
bool DataDecoder<type>::DecodeInto(typename TypeFromFieldType<type>::type *data, int size) { 
    for (int i = 0; i < size; i++) {
        if (not WireFormatLite::ReadPrimitive<typename TypeFromFieldType<type>::type, type>(_sub_stream.get(), &data[i])) {
            return false;
        }
    }
    return true;
}

template<WireFormatLite::FieldType type>
bool DataDecoder<type>::DecodeInto(typename TypeFromFieldType<type>::type &data) {
    return DecodeInto(&data, 1);
}

template<WireFormatLite::FieldType type>
typename TypeFromFieldType<type>::type DataDecoder<type>::Decode(bool &success) {
    typename TypeFromFieldType<type>::type tmp;
    success = DecodeInto(tmp);
    return tmp;
}

template<WireFormatLite::FieldType type>
typename TypeFromFieldType<type>::type DataDecoder<type>::Decode() {
    typename TypeFromFieldType<type>::type tmp;
    assert(DecodeInto(tmp));
    return tmp;
}

template<>
void DataEncoder<WireFormatLite::TYPE_STRING>::Encode(const std::string *data, int size) {
    for (int i = 0; i < size; i++) {
        _sub_stream->WriteVarint32(data[i].size());
        _sub_stream->WriteString(data[i]);
    }
}

template<>
void DataEncoder<WireFormatLite::TYPE_BYTES>::Encode(const std::string *data, int size) {
    for (int i = 0; i < size; i++) {
        _sub_stream->WriteVarint32(data[i].size());
        _sub_stream->WriteString(data[i]);
    }
}

template<WireFormatLite::FieldType type>
void DataEncoder<type>::Encode(const typename TypeFromFieldType<type>::type *data, int size) {
    #define WRITE(cpptype, enumtype, wfunc) \
    case WireFormatLite::TYPE_ ## enumtype: \
        for (int i = 0; i < size; i++) { \
            WireFormatLite::Write ## wfunc ## NoTag(data[i], _sub_stream.get()); \
        }\
        break;
    switch(type) {
        WRITE(int32_t, INT32, Int32);
        WRITE(int32_t, SFIXED32, SFixed32);
        WRITE(int32_t, SINT32, SInt32);
        WRITE(int, ENUM, Enum);
        WRITE(uint32_t, UINT32, UInt32);
        WRITE(uint32_t, FIXED32, Fixed32);
        WRITE(int64_t, INT64, Int64);
        WRITE(int64_t, SFIXED64, SFixed64);
        WRITE(int64_t, SINT64, SInt64);
        WRITE(uint64_t, UINT64, UInt64);
        WRITE(uint64_t, FIXED64, Fixed64);
        WRITE(float, FLOAT, Float);
        WRITE(double, DOUBLE, Double);
        WRITE(bool, BOOL, Bool);
        default:
            assert(false);
    }
}

template<WireFormatLite::FieldType type>
void DataEncoder<type>::Encode(const typename TypeFromFieldType<type>::type &data) {
    Encode(&data, 1);
}

#endif

