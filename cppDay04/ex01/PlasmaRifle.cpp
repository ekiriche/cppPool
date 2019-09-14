#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(void) : AWeapon("Plasma Rifle", 5, 21) {

}

PlasmaRifle::~PlasmaRifle() {

}

PlasmaRifle::PlasmaRifle(PlasmaRifle const &rhs) {
    *this = rhs;
}

PlasmaRifle &PlasmaRifle::operator=(PlasmaRifle const &rhs) {
    _name = rhs.getName();
    _damage = rhs.getDamage();
    _apCost = rhs.getAPCost();
    return *this;
}

void PlasmaRifle::attack() const {
    std::cout << "* piouuu piouuu piouuu *" << std::endl;
}