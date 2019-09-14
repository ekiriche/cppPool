#include "ClapTrap.hpp"
#include <string>
#include <iostream>

ClapTrap::ClapTrap(void) {
    std::cout << "Blip-blap Clap-Trap initialized!" << std::endl;
}

ClapTrap::~ClapTrap() {
    std::cout << "Blip-blap Clap-trap is going for sleep!" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &rhs) {
    *this = rhs;
}

ClapTrap& ClapTrap::operator=(ClapTrap const &rhs) {
    _name = rhs.getName();
    return *this;
}

void ClapTrap::takeDamage(unsigned int amount) {
    if (amount > _health + _armor) {
        _health = 0;
    } else {
        _health -= ((int)amount - (int)_armor < 0 ? 0 : amount - _armor);
    }
    std::cout << _name << " gets some beating, taking " << ((int)amount - (int)_armor < 0 ? 0 : amount - _armor) << " damage! His health is now at "
              << _health << "!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (amount + _health > _maxHealth) {
        _health = _maxHealth;
    } else {
        _health += amount;
    }
    std::cout << _name << " making some weird noises, while he gets repaired for " << amount << ". His health is now at "
              << _health << "!" << std::endl;
}

std::string ClapTrap::getName() const {
    return _name;
}