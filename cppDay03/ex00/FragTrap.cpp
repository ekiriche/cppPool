#include "FragTrap.hpp"
#include <ctime>
#include <iostream>

FragTrap::FragTrap(void) {
    _health = 100;
    _maxHealth = 100;
    _energy = 100;
    _maxEnergy = 100;
    _level = 1;
    _name = "Beep-Boop";
    _meleeDamage = 30;
    _rangedDamage = 20;
    _armor = 5;
    std::cout << _name << " is booted up and ready to go!" << std::endl;
}

FragTrap::FragTrap(std::string name) {
    _health = 100;
    _maxHealth = 100;
    _energy = 100;
    _maxEnergy = 100;
    _level = 1;
    _name = name;
    _meleeDamage = 30;
    _rangedDamage = 20;
    _armor = 5;
    std::cout << _name << " is booted up and ready to go!" << std::endl;
}

FragTrap::~FragTrap() {
    std::cout << _name << " is just sleeping, he is not dead..." << std::endl;
}

FragTrap::FragTrap(FragTrap const &rhs) {
    *this = rhs;
}

FragTrap& FragTrap::operator=(FragTrap const &rhs) {
    _name = rhs.getName();
    return *this;
}

void FragTrap::meleeAttack(const std::string &target) {
    std::cout << "FR4G-TP " << _name << " gets really pissed off. He grabs his OMEGA Hammer and lands it on "
              << target << "'s head, causing " << _meleeDamage << " damage!" << std::endl;
}

void FragTrap::rangedAttack(const std::string &target) {
    std::cout << "FR4G-TP " << _name << " blasting " << target << "'s ass with his OMEGA Blaster, causing "
              << _rangedDamage << " damage!" << std::endl;
}

void FragTrap::takeDamage(unsigned int amount) {
    if (amount > _health + _armor) {
        _health = 0;
    } else {
        _health -= ((int)amount - (int)_armor < 0 ? 0 : amount - _armor);
    }
    std::cout << "FR4G-TP " << _name << " gets some beating, taking " << ((int)amount - (int)_armor < 0 ? 0 : amount - _armor) << " damage! His health is now at "
         << _health << "!" << std::endl;
}

void FragTrap::beRepaired(unsigned int amount) {
    if (amount + _health > _maxHealth) {
        _health = _maxHealth;
    } else {
        _health += amount;
    }
    std::cout << "FR4G-TP " << _name << " making some weird noises, while he gets repaired for " << amount << ". His health is now at "
         << _health << "!" << std::endl;
}

void FragTrap::vaulthunter_dot_exe(const std::string &target) {
    if (_energy < 25) {
        std::cout << "FR4G-TP " << _name << " is too tired to perform omega attack. Call him later!" << std::endl;
    } else {
        _energy -= 25;
        srand(clock());
        int choice = rand() % 5;
        switch(choice) {
            case 0: {
                std::cout << "FR4G-TP " << _name << " tries to perform Dragon's Breath ability on " << target
                     << ", but fails miserably. Instead, he just punches enemy in the face, dealing " <<
                     _meleeDamage << " damage!" << std::endl;
                break ;
            case 1:
                std::cout << "FR4G-TP " << _name << "screams so loud, that " << target << " is loosing his mind and " << _rangedDamage
                     << " health!" << std::endl;
                break ;
            case 2:
                std::cout << "FR4G-TP " << _name << " throws his eye at " << target << ", causing " << _rangedDamage <<
                     "damage!" << std::endl;
                break ;
            case 3:
                std::cout << "FR4G-TP " << _name << " is bored. " << target << " feels sorry for him, so he hits himself for " <<
                    _meleeDamage << " damage to cheer robot up." << std::endl;
                break ;
            case 4:
                std::cout << "FR4G-TP " << _name << " gets really pissed off. He grabs his OMEGA Hammer and lands it on "
                          << target << "'s head, causing " << _meleeDamage << " damage!" << std::endl;
                break ;
            }
        }
    }
}

std::string FragTrap::getName() const {
    return _name;
}