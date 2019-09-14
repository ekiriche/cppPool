#include "Victim.hpp"

Victim::Victim(void) {
    _name = "Donkey";
    std::cout << "Some random victim called " << _name << " just popped !" << std::endl;
}

Victim::Victim(std::string name) {
    _name = name;
    std::cout << "Some random victim called " << _name << " just popped !" << std::endl;
}

Victim::~Victim() {
    std::cout << "Victim " << _name << " just died for no apparent reason !" << std::endl;
}

Victim::Victim(Victim const &rhs) {
    *this = rhs;
}

Victim &Victim::operator=(Victim const &rhs) {
    _name = rhs.getName();
    return *this;
}

void Victim::getPolymorphed() const {
    std::cout << _name << " has been turned into a cute little sheep !" << std::endl;
}

std::string Victim::getName() const {
    return _name;
}

std::ostream& operator<<(std::ostream& o, const Victim& rhs) {
    o << "I am " << rhs.getName() << ", and I like otters !" << std::endl;
    return o;
}