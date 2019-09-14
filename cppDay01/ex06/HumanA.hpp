#include <string>
#include "Weapon.hpp"
#ifndef HUMANA_HPP
#define HUMANA_HPP


class HumanA {
public:
    std::string name;
    Weapon& weapon;

    HumanA(std::string name, Weapon& weapon);
    ~HumanA();
    void attack();
};


#endif
