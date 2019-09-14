#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <list>

template<typename T>
class MutantStack {
private:
    std::list<T> _list;

public:
    typedef typename std::list<T>::iterator iterator;

    MutantStack() {};

    ~MutantStack() {};

    MutantStack &operator=(MutantStack const &rhs) {
        if (this != &rhs) {
            _list = rhs._lis
        }
        return *this;
    };

    MutantStack(MutantStack const &rhs) {
        *this = rhs;
    };

    iterator begin() {
        return _list.begin();
    };

    iterator end() {
        return _list.end();
    };

    void push(T & value) {
        _list.push_back(value);
    };

    void push(T const & value) {
        _list.push_back(value);
    };

    T & top() {
        return _list.back();
    };

    void pop() {
        if (_list.size() > 0) {
            _list.pop_back();
        }
    };

    unsigned int size() {
        return _list.size();
    };

    operator std::stack<T>() {
        std::stack<T> stack;
        iterator it = _list.begin();
        iterator ite = _list.end();

        while (it != ite) {
            stack.push(*it);
            it++;
        }
        return stack;
    };

    bool empty() {
        if (_list.size == 0) {
            return true;
        }
        return false;
    }
};


#endif
