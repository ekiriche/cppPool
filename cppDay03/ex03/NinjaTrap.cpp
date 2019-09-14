#include "NinjaTrap.hpp"
#include <string>
#include <iostream>

NinjaTrap::NinjaTrap(void) {
    _health = 60;
    _maxHealth = 60;
    _energy = 120;
    _maxEnergy = 120;
    _level = 1;
    _name = "Beep-Boop";
    _meleeDamage = 60;
    _rangedDamage = 5;
    _armor = 0;
    std::cout << _name << " is booted up and ready to go!" << std::endl;
}

NinjaTrap::NinjaTrap(std::string name) {
    _health = 60;
    _maxHealth = 60;
    _energy = 120;
    _maxEnergy = 120;
    _level = 1;
    _name = name;
    _meleeDamage = 60;
    _rangedDamage = 5;
    _armor = 0;
    std::cout << _name << " is booted up and ready to go!" << std::endl;
}

NinjaTrap::~NinjaTrap() {
    std::cout << _name << " is just sleeping, he is not dead..." << std::endl;
}

NinjaTrap::NinjaTrap(NinjaTrap const &rhs) {
    *this = rhs;
}

NinjaTrap &NinjaTrap::operator=(NinjaTrap const &rhs) {
    _name = rhs.getName();
    return *this;
}

void NinjaTrap::meleeAttack(const std::string &target) {
    std::cout << _name << " gets really pissed off. He grabs his OMEGA Katana and lands it on "
              << target << "'s head, causing " << _meleeDamage << " damage!" << std::endl;
}

void NinjaTrap::rangedAttack(const std::string &target) {
    std::cout << _name << " blasting " << target << "'s ass with his OMEGA shuriken, causing "
              << _rangedDamage << " damage!" << std::endl;
}

void NinjaTrap::ninjaShoebox(ClapTrap &clapTrap) {
    std::cout << "Ninja " << _name << " really hates this filthy clappers, so he slices "
              << clapTrap.getName() << " to little pieces, causing " << _meleeDamage << " damage!" << std::endl;
    clapTrap.takeDamage(_meleeDamage);
}

void NinjaTrap::ninjaShoebox(FragTrap &fragTrap) {
    std::cout << "Ninja " << _name << " actually likes fraggers, so he offers to him some of his spare parts. "
              << fragTrap.getName() << " get's all sensitive and gives to " << _name << " a friendly hug!" << std::endl;
    fragTrap.beRepaired(20);
    beRepaired(5);
}

void NinjaTrap::ninjaShoebox(ScavTrap &scavTrap) {
    std::cout << "Ninja " << _name << " calls scaver " << scavTrap.getName() << " a *****. " << scavTrap.getName()
              << " gets OMEGA angry because of this, so he slaps " << _name << " twice!" << std::endl;
    takeDamage(scavTrap.getMeleeDamage());
    takeDamage(scavTrap.getMeleeDamage());
}

void NinjaTrap::ninjaShoebox(NinjaTrap &ninjaTrap) {
    std::cout << "Ninja " << _name << " meets another Ninja - " << ninjaTrap.getName() << "! This two are the good old friends. "
              << "They decide to do a little sparring for fun, like in ninja school, before they grow up."
              << "The result is impressive!" << std::endl;
    increaseMeleeDamage(5);
    ninjaTrap.increaseMeleeDamage(5);
}