//
// Created by Evgeniy KIRICHENKO on 2019-06-25.
//

#include "ZombieHorde.hpp"
#include <iostream>
#include <string>

int main() {
    ZombieHorde* horde = new ZombieHorde(5);
    horde->announce();
    delete horde;

    std::cout << "Another horde..." << std::endl;

    ZombieHorde* anotherHorde = new ZombieHorde(2);
    anotherHorde->announce();
    delete anotherHorde;

    return 0;
}