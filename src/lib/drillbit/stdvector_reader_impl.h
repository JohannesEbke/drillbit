#ifndef STDVECTOR_READER_IMPL_H_
#define STDVECTOR_READER_IMPL_H_

#include "data_codec_impl.h"
#include "stdvector_reader.h"
#include "metadata_stream_impl.h"

template<WireFormatLite::FieldType type>
TypedPODReader<type>* TypedPODReader<type>::Make(MetaReader *sreader, ZeroCopyInputStream *d) {
    assert(0 == sreader->info().max_rl());
    TypedPODReader<type>* reader = new TypedPODReader<type>();
    reader->_reader = sreader;
    reader->_decoder.connect(d);
    return reader;
}

template<WireFormatLite::FieldType type>
bool TypedPODReader<type>::next() {
    if (_max_dl == 0) {
        bool success;
        _buf = _decoder.Decode(success);
        return success;
    } else {
        uint8_t dl;
        if (not _reader->next_dl(dl)) return false;
        if (dl == _max_dl) {
            _buf = _decoder.Decode();
        } else {
            _buf = InvalidValueOf<type>::value();
        } // else - nested optional fields;
        return true;
    }
}

template<WireFormatLite::FieldType type, int max_rl>
TypedStdVectorReader<type,max_rl>* TypedStdVectorReader<type,max_rl>::Make(MetaReader *sreader, ZeroCopyInputStream *d) {
    assert(max_rl == sreader->info().max_dl());
    TypedStdVectorReader<type,max_rl>* reader = new TypedStdVectorReader<type,max_rl>();
    reader->_reader = sreader;
    reader->_decoder.connect(d);
    return reader;
}

template<typename T>
void empty_vector(std::vector<T> &v, int rl, int dl, int d=1) {
    assert(false); // An empty vector cannot have dl == max_dl!
}

template<typename T, typename U>
inline void empty_vector(std::vector<std::vector<U>> &v, int rl, int dl, int d=1) {
    if (d < rl) {
        empty_vector(v.back(), rl, dl, d+1);
    } else if (d <= dl) {
        v.emplace_back();
        if (d != dl) empty_vector(v.back(), rl, dl, d+1);
    }
}

template<WireFormatLite::FieldType type, int max_rl>
void TypedStdVectorReader<type,max_rl>::decode_into(std::vector<T> &v, int rl, int count, int d) {
    if (max_rl == 1) {
        assert(rl == 0);
        v.resize(count);
        for (int i = 0; i < count; i++) {
            v[i] = _decoder.Decode();
        }
    } else {
        assert(d == max_rl);
        for (int i = 0; i < count; i++) {
            v[i] = _decoder.Decode();
        }
    }
}

template<WireFormatLite::FieldType type, int max_rl>
template<typename U>
void TypedStdVectorReader<type,max_rl>::decode_into(std::vector<std::vector<U>> &v, int rl, int count, int d) {
    if (d < rl) {
        decode_into(v.back(), rl, count, d+1);
    } else if (d+1 == max_rl) {
        v.emplace_back(count);
        decode_into(v.back(), rl, count, d+1);
    } else {
        v.emplace_back();
        decode_into(v.back(), rl, count, d+1);
    }
}

template<WireFormatLite::FieldType type, int max_rl>
bool TypedStdVectorReader<type,max_rl>::next() {
    if (max_rl > 1) _vbuf.clear();
    unsigned int n_elements = 0;
    uint8_t last_rl = 0;
    
    // return false if the last next() marked the stream as finished
    if (_dl == UINT8_MAX) return false;

    // Special case handling of the first tag in the event
    // if the event is empty, read the next tag and return
    if (_dl == 0 and _rl == 0) {
        if (not _reader->next_rldl(_rl, _dl)) _dl = UINT8_MAX;
        if (max_rl == 1) _vbuf.clear();
        return true;
    } else if (_rl == 0) {
        if (_dl == max_rl) {
            n_elements++;
            last_rl = _rl;
        } else {
            empty_vector<T>(_vbuf, _rl, _dl);
        }
        // deal with end-of-stream
        if (not _reader->next_rldl(_rl, _dl)) {
            _dl = UINT8_MAX; // look at the next tag
            if (n_elements > 0) decode_into(_vbuf, last_rl, n_elements);
            return true;
        }
    } else assert(false); // this should never happen (rl>0 at start of event)

    // Now go into the loop...
    while (true) {
        //std::cerr << "DLRL " << dl_rl << std::endl;
        if (_rl == 0) {
            // Reached next event. Flush and return.
            if (n_elements > 0) decode_into(_vbuf, last_rl, n_elements);
            return true;
        } else {
            if (_rl != max_rl) { 
                // skipped to a new "leaf" vector, so flush.
                if (n_elements > 0) decode_into(_vbuf, last_rl, n_elements);
                n_elements = 0;
                last_rl = _rl;
            }
            if (_dl == max_rl) {
                // new entry in a "leaf" vector
                n_elements++;
            } else {
                // an empty vector must be created 
                empty_vector<T>(_vbuf, _rl, _dl);
            }
            // read next tag!
            if (not _reader->next_rldl(_rl, _dl)) {
                _dl = UINT8_MAX; // end of stream
                if (n_elements > 0) decode_into(_vbuf, last_rl, n_elements);
                return true;
            }
        }
    }
    assert(false); // "Control flow should never reach this point
}




#endif
