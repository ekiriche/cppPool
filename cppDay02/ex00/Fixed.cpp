//
// Created by Evgeniy KIRICHENKO on 2019-06-26.
//
#include <iostream>
#include "Fixed.hpp"

const int Fixed::_bitsNum = 8;

Fixed::Fixed() {
    std::cout << "Default constructor called" << std::endl;
    _value = 0;
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(Fixed const &fixedInstance) {
    std::cout << "Copy constructor called" << std::endl;
    *this = fixedInstance;
}

Fixed& Fixed::operator=(Fixed const &rhs) {
    std::cout << "Assignation operator called" << std::endl;
    _value = rhs.getRawBits();
    return *this;
}

int Fixed::getRawBits() const {
    std::cout << "getRawBits member function called" << std::endl;
    return _value;
}

void Fixed::setRawBits(int const raw) {
    std::cout << "setRawBits member function called" << std::endl;
    _value = raw;
}