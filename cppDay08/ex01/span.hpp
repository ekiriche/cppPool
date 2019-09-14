#ifndef SPAN_HPP
#define SPAN_HPP

#include <string>
#include <iostream>
#include <vector>

class span {
private:
    std::vector<int> _vector;
    unsigned int _maxSize;

    span();

public:
    span(unsigned int);

    ~span();

    span &operator=(span const &rhs);

    span(span const &rhs);

    int shortestSpan() throw(std::exception);

    int longestSpan() throw(std::exception);

    void addNumber(int) throw(std::exception);
};


#endif
