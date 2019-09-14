#include "Zombie.hpp"

#ifndef ZOMBIEHORDE_HPP
#define ZOMBIEHORDE_HPP


class ZombieHorde {
public:
    Zombie* _zombies;
    int _hordeSize;

    ZombieHorde(int N);
    ~ZombieHorde();
    void announce();
};


#endif //ZOMBIEHORDE_HPP
