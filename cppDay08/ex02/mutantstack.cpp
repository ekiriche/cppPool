//#include "mutantstack.hpp"
//
//MutantStack::MutantStack(void) {
//
//}
//
//MutantStack::~MutantStack() {
//
//}
//
//MutantStack::MutantStack(MutantStack const &rhs) {
//    *this = rhs;
//}
//
//MutantStack &MutantStack::operator=(MutantStack const &rhs) {
//    if (this != &rhs) {
//
//    }
//    return *this;
//}
//
//T & MutantStack::top() {
//    return _list.back();
//}
//
//void MutantStack::pop() {
//    if (_list.size() > 0) {
//        _list.pop_back();
//        _listSize--;
//    }
//}
//
//unsigned int MutantStack::size() {
//    return _list.size();
//}
//
//void MutantStack::push(T &value) {
//    _list.push_back(value);
//}
//
//std::list<T>::iterator MutantStack::begin() {
//    return _list.begin();
//}
//
//std::list<T>::iterator MutantStack::end() {
//    return _list.end();
//}
//
//std::stack<T> MutantStack::operator std::stack<T>() {
//
//}