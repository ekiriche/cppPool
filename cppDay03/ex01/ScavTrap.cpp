#include "ScavTrap.hpp"
#include <ctime>
#include <iostream>

ScavTrap::ScavTrap(void) {
    _health = 100;
    _maxHealth = 100;
    _energy = 50;
    _maxEnergy = 50;
    _level = 1;
    _name = "Beep-Boop";
    _meleeDamage = 20;
    _rangedDamage = 15;
    _armor = 3;
    std::cout << _name << " is booted up and ready to challenge everything he sees!!" << std::endl;
}

ScavTrap::ScavTrap(std::string name) {
    _health = 100;
    _maxHealth = 100;
    _energy = 50;
    _maxEnergy = 50;
    _level = 1;
    _name = name;
    _meleeDamage = 20;
    _rangedDamage = 15;
    _armor = 3;
    std::cout << _name << " is booted up and ready to challenge everything he sees!" << std::endl;
}

ScavTrap::~ScavTrap() {
    std::cout << _name << " is just sleeping, don't touch him..." << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &rhs) {
    *this = rhs;
}

ScavTrap& ScavTrap::operator=(ScavTrap const &rhs) {
    _name = rhs.getName();
    return *this;
}

void ScavTrap::meleeAttack(const std::string &target) {
    std::cout << "SC4V-TP " << _name << " gets really pissed off. He grabs his OMEGA Stick and lands it on "
              << target << "'s head, causing " << _meleeDamage << " damage!" << std::endl;
}

void ScavTrap::rangedAttack(const std::string &target) {
    std::cout << "SC4V-TP " << _name << " blasting " << target << "'s ass with his OMEGA Laser, causing "
              << _rangedDamage << " damage!" << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount) {
    if (amount > _health + _armor) {
        _health = 0;
    } else {
        _health -= ((int)amount - (int)_armor < 0 ? 0 : amount - _armor);
    }
    std::cout << "SC4V-TP " << _name << " gets some beating, taking " << ((int)amount - (int)_armor < 0 ? 0 : amount - _armor) << " damage! His health is now at "
         << _health << "!" << std::endl;
}

void ScavTrap::beRepaired(unsigned int amount) {
    if (amount + _health > _maxHealth) {
        _health = _maxHealth;
    } else {
        _health += amount;
    }
    std::cout << "SC4V-TP " << _name << " making some weird noises, while he gets repaired for " << amount << ". His health is now at "
         << _health << "!" << std::endl;
}

void ScavTrap::challengeNewcomer() {
    srand(clock());
    int choice = rand() % 3;
    switch(choice) {
        case 0:
            std::cout << "SC4V-TP " << _name << " challenges you to buy a beer from local store after midnight!"
                      << std::endl;
            break;
        case 1:
            std::cout << "SC4V-TP " << _name << " challenges you to jump off the cliff!" << std::endl;
            break;
        case 2:
            std::cout << "SC4V-TP " << _name
                      << " challenges you to not watch meme compilations on YouTube for a week!"
                      << std::endl;
            break;
    }
}

std::string ScavTrap::getName() const {
    return _name;
}