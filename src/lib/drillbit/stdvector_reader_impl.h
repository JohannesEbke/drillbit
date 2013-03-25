#ifndef STDVECTOR_READER_IMPL_H_
#define STDVECTOR_READER_IMPL_H_

#include "stdvector_reader.h"
#include "stripe_reader_impl.h"

template<typename T>
TypedPODReader<T>* TypedPODReader<T>::Make(StripeReader *sreader) {
    assert(sreader->is_correct_type<T>());
    assert(0 == sreader->info().level());
    TypedPODReader<T>* reader = new TypedPODReader<T>();
    reader->_reader = sreader;
    return reader;
}

template<typename T>
bool TypedPODReader<T>::next() {
    return _dstream->Place((decoded_data*)&_buf, 1);
}

template<typename T, int level>
TypedStdVectorReader<T,level>* TypedStdVectorReader<T,level>::Make(StripeReader *sreader) {
    assert(sreader->is_correct_type<T>());
    assert(level == sreader->info().level());
    TypedStdVectorReader<T,level>* reader = new TypedStdVectorReader<T,level>();
    reader->_reader = sreader;
    return reader;
}

template<typename T>
void empty_vector(std::vector<T> &v, int rl, int dl, int d=0) {
    assert(false); // An empty vector cannot have dl == level!
}

template<typename T, typename U>
inline void empty_vector(std::vector<std::vector<U>> &v, int rl, int dl, int d=0) {
    if (d < rl) {
        empty_vector(v.back(), rl, dl, d+1);
    } else if (d <= dl) {
        v.emplace_back();
        empty_vector(v.back(), rl, dl, d+1);
    }
}

template<int level>
void decode_into(std::vector<bool> &v, int rl, int count, int d, DatastripeInputStream *ds) {
    assert(d == level);
    for (int i = 0; i < count; i++) {
        ds->Place((decoded_data*)&v[i], 1);
    }
}

template<int level, typename T>
void decode_into(std::vector<T> &v, int rl, int count, int d, DatastripeInputStream *ds) {
    assert(d == level);
    //if (sizeof(T) == sizeof(decoded_data)) {
    //    T & x = v[0];
    //    ds->Place((decoded_data*)&x, count);
    //} else {
        for (int i = 0; i < count; i++) {
            ds->Place((decoded_data*)&v[i], 1);
        }
    //}
}

template<int level, typename T, typename U>
void decode_into(std::vector<std::vector<U>> &v, int rl, int count, int d, DatastripeInputStream *ds) {
    if (d < rl) {
        decode_into<level, T>(v.back(), rl, count, d+1, ds);
    } else if (d+1 == level) {
        v.emplace_back(count);
        decode_into<level, T>(v.back(), rl, count, d+1, ds);
    } else {
        v.emplace_back();
        decode_into<level, T>(v.back(), rl, count, d+1, ds);
    }
}


template<typename T, int level>
bool TypedStdVectorReader<T,level>::next() {
    _vbuf.clear();
    unsigned int n_elements = 0;
    uint8_t last_rl = 0;
    
    // return false if the last next() marked the stream as finished
    if (_dl == UINT8_MAX) return false;

    // Special case handling of the first tag in the event
    // if the event is empty, read the next tag and return
    if (_dl == 0 and _rl == 0) {
        if (not _reader->next_line<T,level>(_rl, _dl)) _dl = UINT8_MAX;
        return true;
    } else if (_rl == 0) {
        if (_dl == level) {
            n_elements++;
            last_rl = _rl;
        } else {
            empty_vector<T>(_vbuf, _rl, _dl);
        }
        // deal with end-of-stream
        if (not _reader->next_line<T,level>(_rl, _dl)) {
            _dl = UINT8_MAX; // look at the next tag
            if (n_elements > 0) decode_into<level, T>(_vbuf, last_rl, n_elements, 0, _dstream);
            return true;
        }
    } else assert(false); // this should never happen (rl>0 at start of event)

    // Now go into the loop...
    while (true) {
        assert(_dl >= _rl); // mandated by the anti-corruption authority
        if (_dl == UINT8_MAX) return false;
        //std::cerr << "DLRL " << dl_rl << std::endl;
        if (_rl == 0) {
            // Reached next event. Flush and return.
            if (n_elements > 0) decode_into<level, T>(_vbuf, last_rl, n_elements, 0, _dstream);
            return true;
        } else {
            if (_rl != level) { 
                // skipped to a new "leaf" vector, so flush.
                if (n_elements > 0) decode_into<level, T>(_vbuf, last_rl, n_elements, 0, _dstream);
                n_elements = 0;
                last_rl = _rl;
            }
            if (_dl == level) {
                // new entry in a "leaf" vector
                n_elements++;
            } else {
                // an empty vector must be created 
                empty_vector<T>(_vbuf, _rl, _dl);
            }
            // read next tag!
            if (not _reader->next_line<T,level>(_rl, _dl)) {
                _dl = UINT8_MAX; // end of stream
                if (n_elements > 0) decode_into<level, T>(_vbuf, last_rl, n_elements, 0, _dstream);
                return true;
            }
        }
    }
    assert(false); // "Control flow should never reach this point
}




#endif
