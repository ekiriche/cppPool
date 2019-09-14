#include <iostream>
#include <cmath>
#include "Fixed.hpp"

const int Fixed::_bitsNum = 8;

Fixed::Fixed() {
    std::cout << "Default constructor called" << std::endl;
    _value = 0;
}

Fixed::Fixed(int const value) {
    std::cout << "Int constructor called" << std::endl;
    _value = value << _bitsNum;
}

Fixed::Fixed(float const value) {
    std::cout << "Float constructor called" << std::endl;
    _value = roundf(value * (1 << _bitsNum));
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixedInstance) {
    std::cout << "Copy constructor called" << std::endl;
    *this = fixedInstance;
}

Fixed& Fixed::operator=(Fixed const &rhs) {
    std::cout << "Assignation operator called" << std::endl;
    _value = rhs.getRawBits();
    return *this;
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