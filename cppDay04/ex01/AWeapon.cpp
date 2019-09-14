#include "AWeapon.hpp"

AWeapon::AWeapon(void) {
    _name = "Branch";
    _damage = 1;
    _apCost = 10;
}

AWeapon::AWeapon(const std::string &name, int apCost, int damage) {
    _name = name;
    _damage = damage;
    _apCost = apCost;
}

AWeapon::~AWeapon() {

}

AWeapon::AWeapon(AWeapon const &rhs) {
    *this = rhs;
}

AWeapon &AWeapon::operator=(AWeapon const &rhs) {
    _name = rhs.getName();
    _damage = rhs.getDamage();
    _apCost = rhs.getAPCost();
    return *this;
}

std::string AWeapon::getName() const {
    return _name;
}

int AWeapon::getAPCost() const {
    return _apCost;
}

int AWeapon::getDamage() const {
    return _damage;
}