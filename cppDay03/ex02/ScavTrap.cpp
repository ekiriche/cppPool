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
    std::cout << _name << " is booted up and ready to go!" << std::endl;
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
    std::cout << _name << " is booted up and ready to go!" << std::endl;
}

ScavTrap::~ScavTrap() {
    std::cout << _name << " is just sleeping, he is not dead..." << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &rhs) {
    *this = rhs;
}

ScavTrap& ScavTrap::operator=(ScavTrap const &rhs) {
    _name = rhs.getName();
    return *this;
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
            std::cout << "SC4V-TP " << _name << " challenges you to run away, before he gets angry!" << std::endl;
            break;
        case 2:
            std::cout << "SC4V-TP " << _name
                      << " challenges you to not watch meme compilations on YouTube for a week!"
                      << std::endl;
            break;
    }
}

void ScavTrap::meleeAttack(const std::string &target) {
    std::cout << _name << " gets really pissed off. He grabs his OMEGA Stick and lands it on "
              << target << "'s head, causing " << _meleeDamage << " damage!" << std::endl;
}

void ScavTrap::rangedAttack(const std::string &target) {
    std::cout << _name << " blasting " << target << "'s ass with his OMEGA Laser, causing "
              << _rangedDamage << " damage!" << std::endl;
}