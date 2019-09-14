#include "Pony.hpp"
#include <iostream>

Pony::Pony() {
    std::cout << "Pony created!" << std::endl;
}

Pony::~Pony() {
    std::cout << "Pony got killed!" << std::endl;
}