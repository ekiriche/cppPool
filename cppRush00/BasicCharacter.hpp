#ifndef BASICCHARACTER_HPP
#define BASICCHARACTER_HPP

#include <string>
#include <iostream>
#include "ncurses.h"

#define WIN_HEIGHT 40
#define WIN_WIDTH 100
#define MAX_ENEMIES 100
#define MAX_LASER_BEAMS 100

class BasicCharacter {
protected:
    int _x;
    int _y;
    int _hp;
    int _score;
    char _type;

public:
    BasicCharacter();

    BasicCharacter(int x, int y, char type);

    virtual ~BasicCharacter();

    virtual BasicCharacter &operator=(BasicCharacter const &rhs);

    BasicCharacter(BasicCharacter const &rhs);

    virtual int getX() const;

    virtual int getY() const;

    virtual int getHP() const;

    virtual char getType() const;

    virtual int getScore() const;

    virtual void setHP(int);

    virtual void setX(int);

    virtual void setY(int);

    virtual void addScore(int);

    virtual void setType(char);
};


#endif
