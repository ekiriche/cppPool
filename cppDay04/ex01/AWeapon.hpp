#ifndef AWEAPON_HPP
#define AWEAPON_HPP

#include <string>
#include <iostream>


class AWeapon {
protected:
    int _damage;
    int _apCost;
    std::string _name;

public:
    AWeapon();

    AWeapon(std::string const & name, int apCost, int damage);

    virtual ~AWeapon();

    AWeapon &operator=(AWeapon const &rhs);

    AWeapon(AWeapon const &rhs);

    std::string virtual getName() const;

    int getAPCost() const;

    int getDamage() const;

    virtual void attack() const = 0;
};


#endif
