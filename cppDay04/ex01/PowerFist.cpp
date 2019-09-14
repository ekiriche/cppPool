#include "PowerFist.hpp"

PowerFist::PowerFist(void) : AWeapon("Power Fist", 8, 50) {

}

PowerFist::~PowerFist() {

}

PowerFist::PowerFist(PowerFist const &rhs) {
    *this = rhs;
}

PowerFist &PowerFist::operator=(PowerFist const &rhs) {
    _name = rhs.getName();
    _damage = rhs.getDamage();
    _apCost = rhs.getAPCost();
    return *this;
}

void PowerFist::attack() const {
    std::cout << "* pschhh... SBAM! *" << std::endl;
}