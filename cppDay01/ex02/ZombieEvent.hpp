#include <string>
#include "Zombie.hpp"
#ifndef ZOMBIEEVENT_HPP
#define ZOMBIEEVENT_HPP


class ZombieEvent {
public:
    static int _seed;
    std::string _zombieType;

    ZombieEvent();
    ~ZombieEvent();
    void setZombieType(std::string type);
    Zombie* newZombie(std::string name);
    Zombie* randomChump();
};


#endif
