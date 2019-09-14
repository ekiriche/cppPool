//
// Created by Evgeniy KIRICHENKO on 2019-06-25.
//
#include <string>
#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type) {
    _name = name;
    _type = type;
    std::cout << "Fresh new zombie " << name << " created!" << std::endl;
}

Zombie::~Zombie() {
    std::cout << "Zombie " << _name << " got killed!" << std::endl;
}

void Zombie::announce() {
    std::cout << "Hi, i'm zombie " << _name << " with type " << _type << "!" << std::endl;
}