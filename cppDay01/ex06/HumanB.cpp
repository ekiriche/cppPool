#include <string>
#include <iostream>
#include "Weapon.hpp"
#include "HumanB.hpp"

HumanB::HumanB(std::string name) {
    this->name = name;
}

HumanB::~HumanB() {

}

void HumanB::setWeapon(Weapon& weapon) {
    this->weapon = &weapon;
}

void HumanB::attack() {
    std::cout << name << " attacks with his " << weapon->getType() << std::endl;
}