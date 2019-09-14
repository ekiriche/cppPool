//
// Created by Evgeniy KIRICHENKO on 2019-06-25.
//

#include "ZombieHorde.hpp"
#include "Zombie.hpp"
#include <iostream>
#include <string>

ZombieHorde::ZombieHorde(int N) {
    std::cout << "Creating some horde down here..." << std::endl;
    _hordeSize = N;
    _zombies = new Zombie[N];
}

ZombieHorde::~ZombieHorde() {
    std::cout << "Killing some horde down here..." << std::endl;
    delete [] _zombies;
}

void ZombieHorde::announce() {
    std::cout << "Zombies are exited!" << std::endl;
    for (int i = 0; i < _hordeSize; ++i) {
        _zombies[i].announce();
    }
}
