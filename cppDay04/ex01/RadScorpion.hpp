#ifndef RADSCORPION_HPP
#define RADSCORPION_HPP

#include <string>
#include <iostream>
#include "Enemy.hpp"


class RadScorpion : public Enemy {
public:
    RadScorpion();

    ~RadScorpion();

    RadScorpion &operator=(RadScorpion const &rhs);

    RadScorpion(RadScorpion const &rhs);
};


#endif
