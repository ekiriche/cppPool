#include "Character.hpp"

Character::Character(void) {

}

Character::Character(std::string name) {
    _name = name;
    _size = 0;
    for (int i = 0; i < 4; i++) {
        _inventory[i] = nullptr;
    }
}

Character::~Character() {

}

Character::Character(Character const &rhs) {
    *this = rhs;
}

Character &Character::operator=(Character const &rhs) {
    _name = rhs.getName();
    _size = rhs.getSize();
    for (int i = 0; i < 4; i++) {
        _inventory[i] = rhs.
    }
}

const std::string & Character::getName() {
    return _name;
}

int Character::getSize() {
    return _size;
}