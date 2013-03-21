#include "datastripe_stream.h"

#include <assert.h>

#include <google/protobuf/wire_format_lite_inl.h>


using std::string;

DatastripeInputStream::DatastripeInputStream(CodedInputStream* sub_stream, WireFormatLite::FieldType type):
    _sub_stream(sub_stream), _type(type) {
    // Construct in-place std::string structures
    if (_type == WireFormatLite::TYPE_STRING or _type == WireFormatLite::TYPE_BYTES) {
        for (int i = 0; i < _buffer_size; i++) {
            new (&_buffer[i]._string) std::string();
        }
    }
    // Check for nonsensical types for stripes
    assert(_type > 0);
    assert(_type != WireFormatLite::TYPE_GROUP);
    assert(_type != WireFormatLite::TYPE_MESSAGE);
    assert(_type <= WireFormatLite::MAX_FIELD_TYPE);
}

DatastripeInputStream::~DatastripeInputStream() {
    // Destroy in-place string structures 
    if (_type == WireFormatLite::TYPE_STRING or _type == WireFormatLite::TYPE_BYTES) {
        for (int i = 0; i < _buffer_size; i++) {
            _buffer[i]._string.~string();
        }
    }
}

bool DatastripeInputStream::Place(decoded_data * data, int size) {
    #define READ(cpptype, enumtype) \
    case WireFormatLite::TYPE_ ## enumtype: \
        for (int i = 0; i < size; i++) { \
            if (not WireFormatLite::ReadPrimitive<cpptype, WireFormatLite::TYPE_ ## enumtype>(_sub_stream, data->_ ## cpptype)) {\
                return false;\
            }\
        }\
        break;
    switch(_type) {
        READ(int32_t, INT32);
        READ(int32_t, SFIXED32);
        READ(int32_t, SINT32);
        READ(int, ENUM);
        READ(uint32_t, UINT32);
        READ(uint32_t, FIXED32);
        READ(int64_t, INT64);
        READ(int64_t, SFIXED64);
        READ(int64_t, SINT64);
        READ(uint64_t, UINT64);
        READ(uint64_t, FIXED64);
        READ(float, FLOAT);
        READ(double, DOUBLE);
        READ(bool, BOOL);
        case WireFormatLite::TYPE_STRING:
        case WireFormatLite::TYPE_BYTES:
            for (*size = 0; *size < _buffer_size; (*size)++) {
                uint32_t ssize;
                if(_sub_stream->ReadVarint32(&ssize)) {
                    assert(_sub_stream->ReadString(&_buffer[*size]._string, ssize));
                } else break;
            }
        default:
            assert(false);
            break;
    }
    return true;
}
  
bool DatastripeInputStream::Next(decoded_data ** data, int* size) {
    // we always provide the full buffer to the user, therefore
    // we have to refill the buffer from scratch at this point

    *size = 0;
    *data = _buffer;
    #define READ(cpptype, enumtype) \
    case WireFormatLite::TYPE_ ## enumtype: \
        for (*size = 0; *size < _buffer_size; (*size)++) { \
            if (not WireFormatLite::ReadPrimitive<cpptype, WireFormatLite::TYPE_ ## enumtype>(_sub_stream, &_buffer[*size]._ ## cpptype)) {\
                break;\
            }\
        }\
        break;
    switch(_type) {
        READ(int32_t, INT32);
        READ(int32_t, SFIXED32);
        READ(int32_t, SINT32);
        READ(int, ENUM);
        READ(uint32_t, UINT32);
        READ(uint32_t, FIXED32);
        READ(int64_t, INT64);
        READ(int64_t, SFIXED64);
        READ(int64_t, SINT64);
        READ(uint64_t, UINT64);
        READ(uint64_t, FIXED64);
        READ(float, FLOAT);
        READ(double, DOUBLE);
        READ(bool, BOOL);
        case WireFormatLite::TYPE_STRING:
        case WireFormatLite::TYPE_BYTES:
            for (*size = 0; *size < _buffer_size; (*size)++) {
                uint32_t ssize;
                if(_sub_stream->ReadVarint32(&ssize)) {
                    assert(_sub_stream->ReadString(&_buffer[*size]._string, ssize));
                } else break;
            }
        default:
            assert(false);
            break;
    }
    return (*size != 0);
}

DatastripeOutputStream::DatastripeOutputStream(CodedOutputStream* sub_stream, WireFormatLite::FieldType type):
    _sub_stream(sub_stream), _type(type), _committed(0) {
    // Construct in-place std::string structures
    if (_type == WireFormatLite::TYPE_STRING or _type == WireFormatLite::TYPE_BYTES) {
        for (int i = 0; i < _buffer_size; i++) {
            new (&_buffer[i]._string) std::string();
        }
    }
}
DatastripeOutputStream::~DatastripeOutputStream() {
    Flush();
    if (_type == WireFormatLite::TYPE_STRING or _type == WireFormatLite::TYPE_BYTES) {
        for (int i = 0; i < _buffer_size; i++) {
            _buffer[i]._string.~string();
        }
    }
}
  
bool DatastripeOutputStream::Place(const decoded_data &data) {
    if (_committed == _buffer_size) Flush();
    _buffer[_committed] = data;
    _committed++;
}

bool DatastripeOutputStream::Place(decoded_data *data, int size) {
    while (size > 0) {
        int free_space = _buffer_size - _committed;
        if (size <= free_space) {
            memcpy(_buffer + _committed, data, size);
            _committed += size;
            return true;
        } else {
            memcpy(_buffer + _committed, data, free_space);
            size -= free_space;
            data += free_space;
            Flush();
        }
    }
    return true;
}
bool DatastripeOutputStream::Next(decoded_data** data, int* size) {
    if (_committed < _buffer_size) {
        *size = _buffer_size - _committed;
        *data = _buffer + _committed;
        return true;
    }
    Flush();
    *size = _buffer_size;
    *data = _buffer;
    _committed = _buffer_size;
    return true;
}

bool DatastripeOutputStream::BackUp(int count) {
    if (count < 0) return false;
    if (count > _committed) return false;
    _committed -= count;
    return true;
}

bool DatastripeOutputStream::Flush() {
    #define WRITE(cpptype, enumtype, wfunc) \
    case WireFormatLite::TYPE_ ## enumtype: \
        for (int i = 0; i < _committed; i++) { \
            WireFormatLite::Write ## wfunc ## NoTag(_buffer[i]._ ## cpptype, _sub_stream); \
        }\
        _committed = 0;\
        break;
    switch(_type) {
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
        case WireFormatLite::TYPE_STRING:
        case WireFormatLite::TYPE_BYTES:
            for (int i = 0; i < _committed; i++) {
                _sub_stream->WriteVarint32(_buffer[i]._string.size());
                _sub_stream->WriteString(_buffer[i]._string);
            }
            _committed = 0;
            break;
        default:
            assert(false);
            break;
    }
    return true;
}

bool DatastripeOutputStream::Close() {
    Flush();
}
