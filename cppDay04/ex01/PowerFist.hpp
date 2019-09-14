#ifndef POWERFIST_HPP
#define POWERFIST_HPP

#include <string>
#include <iostream>
#include "AWeapon.hpp"


class PowerFist : public AWeapon  {
public:
    PowerFist();

    ~PowerFist();

    PowerFist &operator=(PowerFist const &rhs);

    PowerFist(PowerFist const &rhs);

    void attack() const;
};


#endif
