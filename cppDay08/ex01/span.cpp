#include "span.hpp"
#include <iostream>

span::span(void) {

}

span::span(unsigned int maxSize) {
    _maxSize = maxSize;
}

span::~span() {

}

span::span(span const &rhs) {
    *this = rhs;
}

span &span::operator=(span const &rhs) {
    if (this != &rhs) {

    }
    return *this;
}

void span::addNumber(int number) throw(std::exception) {
    if (_vector.size() == _maxSize) {
        throw std::out_of_range("Vector is full!");
    }

    _vector.push_back(number);
}

int span::longestSpan() throw(std::exception) {
    if (_vector.size() == 0 || _vector.size() == 1) {
        throw std::out_of_range("Vector's size is too small!");
    }

    return *std::max_element(_vector.begin(), _vector.end()) - *std::min_element(_vector.begin(), _vector.end());
}

int span::shortestSpan() throw(std::exception) {
    if (_vector.size() == 0 || _vector.size() == 1) {
        throw std::out_of_range("Vector's size is too small!");
    }

    std::vector<int> tmp = _vector;
    std::sort(tmp.begin(), tmp.end());
    return tmp[1] - tmp[0];
}