#ifndef DRILLBIT_DATA_CODEC_H_
#define DRILLBIT_DATA_CODEC_H_

#include <common.h>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite.h>
using google::protobuf::io::CodedInputStream;
using google::protobuf::io::CodedOutputStream;
using google::protobuf::internal::WireFormatLite;

// A ZeroCopyInputStream that reads compressed data through GenericCompression
template<WireFormatLite::FieldType type>
class DataDecoder {
 public:
    explicit DataDecoder() : _sub_stream(NULL) {};
    void connect(CodedInputStream* sub_stream) { assert(!_sub_stream); _sub_stream = sub_stream; };

    bool DecodeInto(typename TypeFromFieldType<type>::type *data, int size);
    bool DecodeInto(typename TypeFromFieldType<type>::type &data);
    typename TypeFromFieldType<type>::type Decode(bool &success);
    typename TypeFromFieldType<type>::type Decode(); //asserts success

 private:
    CodedInputStream *_sub_stream;

    GOOGLE_DISALLOW_EVIL_CONSTRUCTORS(DataDecoder);
};

template<WireFormatLite::FieldType type>
class DataEncoder {
 public:
    explicit DataEncoder() : _sub_stream(NULL) {};
    void connect(CodedOutputStream* sub_stream) { assert(!_sub_stream); _sub_stream = sub_stream; };

    void Encode(const typename TypeFromFieldType<type>::type *data, int size);
    void Encode(const typename TypeFromFieldType<type>::type &data);

 private:
    CodedOutputStream* _sub_stream;

    GOOGLE_DISALLOW_EVIL_CONSTRUCTORS(DataEncoder);
};

#endif
