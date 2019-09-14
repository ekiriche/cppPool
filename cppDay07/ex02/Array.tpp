#ifndef ARRAY_TPP
# define ARRAY_TPP

#include <iostream>
#include <exception>

template <typename T>
class Array {
private:
    T* _array;
    unsigned int _size;

public:
    Array() {
        _size = 0;
        _array = 0;
    }

    ~Array() {
        delete [] _array;
    }

    Array(unsigned int size) {
        _size = size;
        _array = new T[size];
    }

    Array(const Array<T> & array) {
        _size = array.size();
        _array = new T[_size];

        for (unsigned int i = 0; i < _size; ++i) {
            _array[i] = array[i];
        }
    }

    Array<T> & operator=(Array<T> const & array) {
        delete [] _array;
        _size = array.size();
        _array = new T[_size];

        for (unsigned int i = 0; i < _size; i++) {
            _array[i] = array[i];
        }
        return *this;
    }

    T & operator[](unsigned int index) const throw(std::exception) {
        if (_array == nullptr || index >= _size) {
            throw(std::out_of_range("Out of range!"));
        }
        return _array[index];
    }

    unsigned int size() const {
        return _size;
    }
};

#endif