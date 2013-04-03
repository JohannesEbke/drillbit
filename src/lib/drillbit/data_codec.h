#ifndef DRILLBIT_DATA_CODEC_H_
#define DRILLBIT_DATA_CODEC_H_

#include <common.h>
#include <memory>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite.h>
using google::protobuf::io::CodedInputStream;
using google::protobuf::io::CodedOutputStream;
using google::protobuf::internal::WireFormatLite;

// Stateless class for decoding types from a CodedInputStream
template<WireFormatLite::FieldType type>
class DataDecoder {
 public:
    // Construct an empty DataDecoder
    explicit DataDecoder() : _sub_stream(NULL) {};
    // Connect to a ZeroCopyInputStream
    void connect(ZeroCopyInputStream* sub_stream) {
        _sub_stream.reset(new CodedInputStream(sub_stream)); 
        _sub_stream->SetTotalBytesLimit(1024*1024*1024, 1024*1024*1024);
    }

    // Decode <size> values into the space pointed at by <data>
    bool DecodeInto(typename TypeFromFieldType<type>::type *data, int size);
    // Decode only one value into the space pointed at by <data>
    bool DecodeInto(typename TypeFromFieldType<type>::type &data);
    // Decode and return one value, storing success or failure in <success>
    typename TypeFromFieldType<type>::type Decode(bool &success);
    // Decode and return one value and assert(success)
    typename TypeFromFieldType<type>::type Decode();

 private:
    std::shared_ptr<CodedInputStream> _sub_stream;

    GOOGLE_DISALLOW_EVIL_CONSTRUCTORS(DataDecoder);
};

// Stateless class for encoding types to a CodedOutputStream
template<WireFormatLite::FieldType type>
class DataEncoder {
 public:
    // Construct an empty DataEncoder
    explicit DataEncoder() : _sub_stream(NULL) {};
    // Connect to a ZeroCopyOutputStream
    void connect(ZeroCopyOutputStream* sub_stream) {
        _sub_stream.reset(new CodedOutputStream(sub_stream));
    }

    // Encode <size> values from <data> to the stream
    void Encode(const typename TypeFromFieldType<type>::type *data, int size);
    // Encode only one value from <data> to the stream
    void Encode(const typename TypeFromFieldType<type>::type &data);

 private:
    std::shared_ptr<CodedOutputStream> _sub_stream;

    GOOGLE_DISALLOW_EVIL_CONSTRUCTORS(DataEncoder);
};

#endif
