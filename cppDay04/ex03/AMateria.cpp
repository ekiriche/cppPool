#include "AMateria.hpp"

AMateria::AMateria(void) {
    _xp = 0;
    _type = "ice";
}

AMateria::AMateria(const std::string &type) {
    _type = type;
    _xp = 9;
}

AMateria::~AMateria() {

}

AMateria::AMateria(AMateria const &rhs) {
    *this = rhs;
}

AMateria &AMateria::operator=(AMateria const &rhs) {
    _xp = rhs.getXP();
    _type = rhs.getType();
    return *this;
}

const std::string & AMateria::getType() const {
    return _type;
}

unsigned int AMateria::getXP() const {
    return _xp;
}