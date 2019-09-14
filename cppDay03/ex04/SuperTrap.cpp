#include "SuperTrap.hpp"
#include <iostream>

SuperTrap::SuperTrap(void) : NinjaTrap(), FragTrap() {
    _health = 100;
    _maxHealth = 100;
    _energy = 120;
    _maxEnergy = 120;
    _level = 1;
    _name = "Beep-Boop";
    _meleeDamage = 60;
    _rangedDamage = 20;
    _armor = 5;

    std::cout << "The strongest robot ever created - " << _name << "! Applause for this gentleman, or whatever he is!"
              << std::endl;
}

SuperTrap::SuperTrap(std::string name) : NinjaTrap(name), FragTrap(name) {
    _health = 100;
    _maxHealth = 100;
    _energy = 120;
    _maxEnergy = 120;
    _level = 1;
    _name = name;
    _meleeDamage = 60;
    _rangedDamage = 20;
    _armor = 5;

    std::cout << "The strongest robot ever created - " << _name << "! Applause for this gentleman, or whatever he is!"
              << std::endl;
}

SuperTrap::~SuperTrap() {
}

SuperTrap::SuperTrap(SuperTrap const &rhs) {
    *this = rhs;
}

SuperTrap &SuperTrap::operator=(SuperTrap const &rhs) {
    _name = rhs.getName();
    return *this;
}

void SuperTrap::meleeAttack(const std::string &target) {
    NinjaTrap::meleeAttack(target);
}

void SuperTrap::rangedAttack(const std::string &target) {
    FragTrap::rangedAttack(target);
}