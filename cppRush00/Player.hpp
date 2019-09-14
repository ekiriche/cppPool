#ifndef PLAYER_HPP
#define PLAYER_HPP

#include <string>
#include <iostream>
#include "BasicCharacter.hpp"
#include "ncurses.h"
#include "Enemy.hpp"
#include "LaserBeam.hpp"
#include "AmmoPack.hpp"

class Player : public BasicCharacter {
private:
    WINDOW* _window;
    bool isPlayer(unsigned int);
    int _ammo;

public:
    Player();

    Player(int x, int y, WINDOW* window);

    ~Player();

    Player &operator=(Player const &rhs);

    Player(Player const &rhs);

    void moveCharacter(int keyCode, LaserBeam*);

    void displayPlayer();

    void shoot(LaserBeam*);

    void hitByEnemy(Enemy*);

    void hitByLaserBeam(LaserBeam*);

    void hitByAmmoPack(AmmoPack*);

    int getAmmo() const;
};


#endif
