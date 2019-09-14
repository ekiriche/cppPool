#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <string>
#include <iostream>
#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character {
protected:
    std::string _name;
    int _ap;
    AWeapon* _weapon;

public:
    Character();

    Character(std::string const & name);

    ~Character();

    Character &operator=(Character const &rhs);

    Character(Character const &rhs);

    void recoverAP();

    void equip(AWeapon*);

    void attack(Enemy*);

    std::string virtual getName() const;

    int getAP() const;

    AWeapon* getWeapon() const;
};

std::ostream & operator<<(std::ostream & o, Character const & rhs);

#endif
