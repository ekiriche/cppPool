#ifndef PLASMARIFLE_HPP
#define PLASMARIFLE_HPP

#include <string>
#include <iostream>
#include "AWeapon.hpp"


class PlasmaRifle : public AWeapon {
public:
    PlasmaRifle();

    ~PlasmaRifle();

    PlasmaRifle &operator=(PlasmaRifle const &rhs);

    PlasmaRifle(PlasmaRifle const &rhs);

    void attack() const;
};


#endif
