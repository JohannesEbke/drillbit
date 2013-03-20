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
    uint8_t dummy1, dummy2;
    return _reader->next_line<T,0>(dummy1, dummy2, &_buf);
}

template<typename T, int level>
TypedStdVectorReader<T,level>* TypedStdVectorReader<T,level>::Make(StripeReader *sreader) {
    assert(sreader->is_correct_type<T>());
    assert(level == sreader->info().level());
    TypedStdVectorReader<T,level>* reader = new TypedStdVectorReader<T,level>();
    reader->_reader = sreader;
    return reader;
}

template<typename T, int level>
bool TypedStdVectorReader<T,level>::next() {
    _vbuf.clear();
    bool first = true;
    while (true) {
        if (_dl == UINT8_MAX) return false;
        //std::cerr << "DLRL " << dl_rl << std::endl;
        if (_dl == 0 and _rl == 0) {
            if (first) {
                //std::cerr << i << ":" << "NULL" << std::endl;
                if (not _reader->next_line<T,level>(_rl, _dl, &_buf)) _dl = UINT8_MAX;
                break; // no fields in this event
            } else {
                break; // no more fields in this event
            }
        } else if (_rl == 0) {
            if (first) {
                if (_dl == level) {
                    decode_into(_vbuf, _rl);
                }
                if (not _reader->next_line<T,level>(_rl, _dl, &_buf)) {
                    _dl = UINT8_MAX; // look at the next tag
                    break;
                }
            } else {
                // more than one field read, but this one belongs to the next event
                // - leave tag in place
                break;
            }
        } else {
            if (_dl == level) {
                decode_into(_vbuf, _rl);
            }
            if (not _reader->next_line<T,level>(_rl, _dl, &_buf)) {
                _dl = UINT8_MAX; // look at the next tag
                break;
            }
        }
        first = false;
    }
    //std::cerr << "Have vector of size " << v.size() << std::endl;
    //for (int i = 0; i < v.size(); i++) {
    //    std::cerr << v[i] << " ";
    //}
    //std::cerr << std::endl;
    return true;
}

template<typename T, int level>
void TypedStdVectorReader<T,level>::decode_into(std::vector<T> &v, int rl) {
    assert(rl == 0 || rl == 1);
    v.push_back(_buf);
}

template<typename T, int level>
template<typename U>
void TypedStdVectorReader<T,level>::decode_into(std::vector<std::vector<U>> &v, int rl) {
    if (rl == 0 || rl == 1) {
        assert(v.empty() or rl == 1);
        v.push_back(std::vector<U>());
        rl = 1;
    }
    decode_into(v[v.size()-1], rl - 1);
}

#endif
