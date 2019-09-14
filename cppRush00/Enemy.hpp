#ifndef ENEMY_HPP
#define ENEMY_HPP

#include <string>
#include <iostream>
#include "ncurses.h"
#include "BasicCharacter.hpp"
#include "LaserBeam.hpp"

class Enemy : public BasicCharacter {
private:
    char getRandomType() const;
public:
    Enemy();

    Enemy(int x, int y);

    ~Enemy();

    Enemy &operator=(Enemy const &rhs);

    Enemy(Enemy const &rhs);

    void moveCharacter(WINDOW*, int);

    void displayEnemy(WINDOW*);

    void getHit();

    bool hitByLaser(WINDOW*, LaserBeam*);

    void shoot(LaserBeam*);
};


#endif
