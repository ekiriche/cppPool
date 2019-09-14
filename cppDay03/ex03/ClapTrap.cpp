#include "ClapTrap.hpp"
#include <string>
#include <iostream>

ClapTrap::ClapTrap(void) {
    _health = 30;
    _maxHealth = 30;
    _energy = 50;
    _maxEnergy = 50;
    _level = 1;
    _name = "Beep-Boop";
    _meleeDamage = 1;
    _rangedDamage = 1;
    _armor = 0;
    std::cout << "Blip-blap " << _name << " initialized!" << std::endl;
}

ClapTrap::~ClapTrap() {
    std::cout << "Blip-blap " << _name << " is going for sleep!" << std::endl;
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

unsigned int ClapTrap::getHealth() {
    return _health;
}

std::string ClapTrap::getName() const {
    return _name;
}

unsigned int ClapTrap::getMeleeDamage() {
    return _meleeDamage;
}

void ClapTrap::increaseMeleeDamage(unsigned int amount) {
    _meleeDamage += amount;
    std::cout << _name << "'s melee damage increased by " << amount << "!" << std::endl;
}