#include "Peon.hpp"

Peon::Peon(void) : Victim() {
    _name = "Monkey";
    std::cout << "Zog zog." << std::endl;
}

Peon::Peon(std::string name) : Victim(name) {
    _name = name;
    std::cout << "Zog zog." << std::endl;
}

Peon::~Peon() {
    std::cout << "Bleuark..." << std::endl;
}

Peon::Peon(Peon const &rhs) {
    *this = rhs;
}

Peon &Peon::operator=(Peon const &rhs) {
    _name = rhs.getName();
    return *this;
}

void Peon::getPolymorphed() const {
    std::cout << _name << " has been turned into a pink pony !" << std::endl;
}