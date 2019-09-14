#include "BasicCharacter.hpp"

BasicCharacter::BasicCharacter(void) {

}

BasicCharacter::BasicCharacter(int x, int y, char type) {
    _x = x;
    _y = y;
    _type = type;
    _score = 0;
    if (type == '0') {
        _hp = 1;
    } else if (type == '^') {
        _hp = 3;
    } else {
        _hp = 5;
    }
}

BasicCharacter::~BasicCharacter() {

}

BasicCharacter::BasicCharacter(BasicCharacter const &rhs) {
    *this = rhs;
}

BasicCharacter &BasicCharacter::operator=(BasicCharacter const &rhs) {
    if (this != &rhs) {
        _x = rhs.getX();
        _y = rhs.getY();
        _type = rhs.getType();
        _score = rhs.getScore();
        _hp = rhs.getHP();
    }
    return *this;
}

int BasicCharacter::getScore() const {
    return _score;
}

char BasicCharacter::getType() const {
    return _type;
}

int BasicCharacter::getY() const {
    return _y;
}

int BasicCharacter::getX() const {
    return _x;
}

int BasicCharacter::getHP() const {
    return _hp;
}

void BasicCharacter::setHP(int hp) {
    _hp = hp;
}

void BasicCharacter::setType(char type) {
    _type = type;
}

void BasicCharacter::setX(int x) {
    _x = x;
}

void BasicCharacter::setY(int y) {
    _y = y;
}

void BasicCharacter::addScore(int score) {
    _score += score;
}