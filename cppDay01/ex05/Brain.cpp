#include <iostream>
#include <sstream>
#include <string>
#include "Brain.hpp"

Brain::Brain() {
    std::stringstream ss;
    ss << this;
    _address = ss.str();
}

Brain::~Brain() {

}

std::string Brain::identify() {
    return _address;
}
