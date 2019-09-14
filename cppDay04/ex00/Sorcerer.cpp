#include "Sorcerer.hpp"

Sorcerer::Sorcerer(void) {
    _name = "Joe";
    _title = "The Champ";
    std::cout << _name << ", " << _title << ", is born !" << std::endl;
}

Sorcerer::Sorcerer(std::string name, std::string title) {
    _name = name;
    _title = title;
    std::cout << _name << ", " << _title << ", is born !" << std::endl;
}

Sorcerer::~Sorcerer() {
    std::cout << _name << ", " << _title << ", is dead. Consequences will never be the same !" << std::endl;
}

Sorcerer::Sorcerer(Sorcerer const &rhs) {
    *this = rhs;
}

Sorcerer &Sorcerer::operator=(Sorcerer const &rhs) {
    _name = rhs.getName();
    _title = rhs.getTitle();
    return *this;
}

std::string Sorcerer::getName() const {
    return _name;
}

std::string Sorcerer::getTitle() const {
    return _title;
}

void Sorcerer::polymorph(Victim const & victim) const {
    victim.getPolymorphed();
}

std::ostream& operator<<(std::ostream& o, const Sorcerer& rhs) {
    o << "I am " << rhs.getName() << ", " << rhs.getTitle() << ", and I like ponies !" << std::endl;
    return o;
}