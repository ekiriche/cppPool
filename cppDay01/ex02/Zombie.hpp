//
// Created by Evgeniy KIRICHENKO on 2019-06-25.
//
#include <string>

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP


class Zombie {
public:
    std::string _name,
                _type;

    Zombie(std::string name, std::string type);
    ~Zombie();
    void announce();
};


#endif //CPPDAY01_ZOMBIE_HPP
