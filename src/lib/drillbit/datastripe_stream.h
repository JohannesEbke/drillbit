#ifndef DRILLBIT_DATASTRIPE_STREAM_H__
#define DRILLBIT_DATASTRIPE_STREAM_H__

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite.h>
using google::protobuf::io::CodedInputStream;
using google::protobuf::io::CodedOutputStream;
using google::protobuf::internal::WireFormatLite;

// An 64-bit union capable of holding all individual data types
typedef union _decoded_data {
    _decoded_data() : _int64_t(0) {};
    ~_decoded_data() {};
    bool _bool;
    int _int;
    int32_t _int32_t;
    uint32_t _uint32_t;
    float _float;
    double _double;
    int64_t _int64_t;
    uint64_t _uint64_t;
    std::string _string;
} decoded_data;

// A ZeroCopyInputStream that reads compressed data through GenericCompression
class DatastripeInputStream {
 public:

  explicit DatastripeInputStream(CodedInputStream* sub_stream, WireFormatLite::FieldType type);
  virtual ~DatastripeInputStream();
  
  // implement similar interface than a ZeroCopyInputStream
  bool Next(decoded_data ** data, int* size);
  // Place <size> decoded elements in data
  bool Place(decoded_data * data, int size);
  bool BackUp(int count);
  
  const WireFormatLite::FieldType type() const { return _type; };
 private:
  static const size_t _buffer_size = 128; // 1k buffer
  decoded_data _buffer[_buffer_size];
  int _backedup;
  int _fill;

  CodedInputStream *_sub_stream;
  WireFormatLite::FieldType _type; 
   
  GOOGLE_DISALLOW_EVIL_CONSTRUCTORS(DatastripeInputStream);
};

class DatastripeOutputStream {
 public:
  // Create a GenericCompressionOutputStream with default options.
  explicit DatastripeOutputStream(CodedOutputStream* sub_stream, WireFormatLite::FieldType type);
  virtual ~DatastripeOutputStream();
  
  // implements some kind of ZeroCopyOutputStream
  bool Place(const decoded_data &data);
  bool Place(decoded_data *data, int size);
  bool Next(decoded_data **data, int* size);
  bool BackUp(int count);
  bool Flush();
  bool Close();

 private:
  static const size_t _buffer_size = 128; // 1k buffer
  decoded_data _buffer[_buffer_size];
  int _committed;
  
  CodedOutputStream* _sub_stream;
  WireFormatLite::FieldType _type;

  GOOGLE_DISALLOW_EVIL_CONSTRUCTORS(DatastripeOutputStream);
};

#endif  // A4_IO_SNAPPY_STREAM_H__
