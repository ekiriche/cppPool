#ifndef LASERBEAM_HPP
#define LASERBEAM_HPP

#include <string>
#include <iostream>
#include "ncurses.h"
#include "BasicCharacter.hpp"

class LaserBeam : public BasicCharacter {
private:
    std::string _whoShot;
    bool _isActive;
    int _prevX;
    int _prevY;

public:
    LaserBeam();

    ~LaserBeam();

    LaserBeam &operator=(LaserBeam const &rhs);

    LaserBeam(LaserBeam const &rhs);

    void displayPlayersBeam(WINDOW*);

    void displayEnemiesBeam(WINDOW*);

    void displayBeam(WINDOW*);

    std::string getWhoShot() const;

    void setWhoShot(std::string &);

    void setIsActive(bool);

    void disableLaserBeam();

    void activateLaserBeam(int x, int y, std::string whoShot);

    bool getIsActive();

    int getPrevX();

    int getPrevY();

    void setPrevX(int);

    void setPrevY(int);
};


#endif
