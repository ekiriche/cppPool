//
// Created by Evgeniy KIRICHENKO on 2019-06-25.
//
#include <string>
#include <iostream>
#include "Zombie.hpp"
#include "ZombieEvent.hpp"
#include <ctime>

int ZombieEvent::_seed = 0;

std::string randomNames[9] = {
        "Donkey",
        "Ugly One",
        "Spank God",
        "World Eater",
        "Sunfish",
        "Joe",
        "Officer Hannibal",
        "Monk",
        "Kevin"
};

ZombieEvent::ZombieEvent() {
    std::cout << "ZombieEvent created!" << std::endl;
}

ZombieEvent::~ZombieEvent() {
    std::cout << "ZombieEvent got killed!" << std::endl;
}

void ZombieEvent::setZombieType(std::string type) {
    _zombieType = type;
    std::cout << "Zombie's type is now " << type << "!" << std::endl;
}

Zombie* ZombieEvent::newZombie(std::string name) {
    return new Zombie(name, _zombieType);
}

Zombie* ZombieEvent::randomChump() {
    srand(time(0) + _seed);
    _seed++;
    Zombie* randomZombie = new Zombie(randomNames[rand() % 9], _zombieType);
    randomZombie->announce();
    return randomZombie;
}