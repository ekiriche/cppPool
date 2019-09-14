#include "Squad.hpp"

Squad::Squad(void) {
    _size = 0;
}

Squad::~Squad() {
    for (int i = 0; i < _size; i++) {
        delete _boys[i];
    }
}

Squad::Squad(Squad const &rhs) {
    *this = rhs;
}

Squad &Squad::operator=(Squad const &rhs) {
    if (this != &rhs) {
        for (int i = 0; i < _size; i++) {
            delete _boys[i];
        }
        _size = rhs.getCount();

        for (int i = 0; i < rhs.getCount(); i++) {
            _boys[i] = rhs.getUnit(i)->clone();
        }
    }
    return *this;
}

int Squad::getCount() const {
    return _size;
}

int Squad::push(ISpaceMarine * marine) {
    if (marine != nullptr && _size < _maxSize) {
        for (int i = 0; i < _size; i++) {
            if (_boys[i] == marine) {
                return 0;
            }
        }
        _boys[_size] = marine;
        _size++;
    }
    return _size;
}

ISpaceMarine* Squad::getUnit(int index) const {
    if (index < 0 || index >= _size) {
        return nullptr;
    }
    return _boys[index];
}