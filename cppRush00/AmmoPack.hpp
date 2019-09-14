#ifndef AMMOPACK_HPP
#define AMMOPACK_HPP

#include <string>
#include <iostream>
#include "BasicCharacter.hpp"
#include "ncurses.h"

class AmmoPack : public BasicCharacter {
public:
    AmmoPack();

    ~AmmoPack();

    AmmoPack &operator=(AmmoPack const &rhs);

    AmmoPack(AmmoPack const &rhs);

    void displayAmmoPack(WINDOW*);

    void respawnAmmoPack();
};


#endif
