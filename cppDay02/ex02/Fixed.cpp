#include <iostream>
#include <cmath>
#include "Fixed.hpp"

const int Fixed::_bitsNum = 8;

Fixed::Fixed() {
    _value = 0;
}

Fixed::Fixed(int const value) {
    _value = value << _bitsNum;
}

Fixed::Fixed(float const value) {
    _value = roundf(value * (1 << _bitsNum));
}

Fixed::~Fixed() {
}

Fixed::Fixed(const Fixed &fixedInstance) {
    *this = fixedInstance;
}

Fixed& Fixed::operator=(Fixed const &rhs) {
    _value = rhs.getRawBits();
    return *this;
}

Fixed Fixed::operator+(Fixed const &rhs) const {
    return Fixed(this->toFloat() + rhs.toFloat());
}

Fixed Fixed::operator-(Fixed const &rhs) const {
    return Fixed(this->toFloat() - rhs.toFloat());
}

Fixed Fixed::operator*(Fixed const &rhs) const {
    return Fixed(this->toFloat() * rhs.toFloat());
}

Fixed Fixed::operator/(Fixed const &rhs) const {
    return Fixed(this->toFloat() / rhs.toFloat());
}

bool Fixed::operator<(Fixed const &rhs) const {
    return (this->_value < rhs.getRawBits());
}

bool Fixed::operator>(Fixed const &rhs) const {
    return (this->_value > rhs.getRawBits());
}

bool Fixed::operator<=(Fixed const &rhs) const {
    return (this->_value <= rhs.getRawBits());
}

bool Fixed::operator>=(Fixed const &rhs) const {
    return (this->_value >= rhs.getRawBits());
}

bool Fixed::operator==(Fixed const &rhs) const {
    return (this->_value == rhs.getRawBits());
}

bool Fixed::operator!=(Fixed const &rhs) const {
    return (this->_value != rhs.getRawBits());
}

Fixed& Fixed::operator++() {
    this->setRawBits(this->_value + 1);
    return *this;
}

Fixed& Fixed::operator--() {
    this->setRawBits(this->_value - 1);
    return *this;
}

Fixed Fixed::operator++(int) {
    Fixed tmp = Fixed(*this);
    this->setRawBits(this->_value + 1);
    return tmp;
}

Fixed Fixed::operator--(int) {
    Fixed tmp = Fixed(*this);
    this->setRawBits(this->_value - 1);
    return tmp;
}

std::ostream& operator<<(std::ostream& o, const Fixed& rhs) {
    o << rhs.toFloat();
    return o;
}

int Fixed::getRawBits() const {
    return _value;
}

void Fixed::setRawBits(int const raw) {
    _value = raw;
}

int Fixed::toInt() const {
    return _value >> _bitsNum;
}

float Fixed::toFloat() const {
    return (float)(_value) / (1 << _bitsNum);
}

const Fixed& Fixed::min(Fixed &f1, Fixed &f2) {
    if (f1.getRawBits() > f2.getRawBits()) {
        return f2;
    } else {
        return f1;
    }
}

const Fixed& Fixed::max(Fixed &f1, Fixed &f2) {
    if (f1.getRawBits() < f2.getRawBits()) {
        return f2;
    } else {
        return f1;
    }
}

const Fixed& Fixed::max(Fixed const & f1, Fixed const & f2) {
    if (f1.getRawBits() < f2.getRawBits()) {
        return f2;
    } else {
        return f1;
    }
}

const Fixed& Fixed::min(Fixed const & f1, Fixed const & f2) {
    if (f1.getRawBits() < f2.getRawBits()) {
        return f2;
    } else {
        return f1;
    }
}