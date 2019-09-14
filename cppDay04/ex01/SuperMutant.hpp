#ifndef SUPERMUTANT_HPP
#define SUPERMUTANT_HPP

#include <string>
#include <iostream>
#include "Enemy.hpp"


class SuperMutant : public Enemy {
public:
    SuperMutant();

    ~SuperMutant();

    SuperMutant &operator=(SuperMutant const &rhs);

    SuperMutant(SuperMutant const &rhs);

    void takeDamage(int);
};


#endif
