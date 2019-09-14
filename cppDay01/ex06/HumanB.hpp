#include <string>
#include "Weapon.hpp"
#ifndef HUMANB_HPP
#define HUMANB_HPP


class HumanB {
public:
    std::string name;
    Weapon* weapon;

    HumanB(std::string name);
    ~HumanB();
    void attack();
    void setWeapon(Weapon& weapon);
};


#endif
