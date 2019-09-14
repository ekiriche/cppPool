#include "LaserBeam.hpp"

LaserBeam::LaserBeam(void) {
    BasicCharacter(-1, -1, '|');
    _isActive = false;
    _prevX = -1;
    _prevY = -1;
}

LaserBeam::~LaserBeam() {

}

LaserBeam::LaserBeam(LaserBeam const &rhs) {
    *this = rhs;
}

LaserBeam &LaserBeam::operator=(LaserBeam const &rhs) {
    if (this != &rhs) {
        _x = rhs.getX();
        _y = rhs.getY();
        _whoShot = rhs.getWhoShot();
    }
    return *this;
}

void LaserBeam::displayPlayersBeam(WINDOW* _window) {
    mvwaddch(_window, _y, _x, ' ');
    mvwaddch(_window, _y - 1, _x, ' ');
    mvwaddch(_window, _y + 1, _x, ' ');
    if (_y - 1 > 2) {
        setY(_y - 1);
        wattron(_window, COLOR_PAIR(3));
        mvwaddch(_window, _y, _x, '|');
        wattroff(_window, COLOR_PAIR(3));
    } else {
        disableLaserBeam();
    }
}

void LaserBeam::displayEnemiesBeam(WINDOW* _window) {
    mvwaddch(_window, _y, _x, ' ');
    mvwaddch(_window, _y + 1, _x, ' ');
    if (_y + 1 < WIN_HEIGHT - 2 && _y + 1 > 2) {
        setY(_y + 1);
        wattron(_window, COLOR_PAIR(1));
        mvwaddch(_window, _y + 1, _x, '|');
        wattroff(_window, COLOR_PAIR(1));
    } else {
        disableLaserBeam();
    }
}

void LaserBeam::displayBeam(WINDOW * _window) {
    if (_isActive) {
        if (_whoShot == "player") {
            displayPlayersBeam(_window);
        } else if (_whoShot == "enemy") {
            displayEnemiesBeam(_window);
        }
    }
}

std::string LaserBeam::getWhoShot() const {
    return _whoShot;
}

void LaserBeam::setIsActive(bool isActive) {
    _isActive = isActive;
}

void LaserBeam::setWhoShot(std::string & whoShot) {
    _whoShot = whoShot;
}

bool LaserBeam::getIsActive() {
    return _isActive;
}

void LaserBeam::activateLaserBeam(int x, int y, std::string whoShot) {
    _x = x;
    _y = y;
    _whoShot = whoShot;
    _isActive = true;
}

void LaserBeam::disableLaserBeam() {
    _prevX = _x;
    _prevY = _y;
    _x = -1;
    _y = -1;
    _whoShot = "";
    _isActive = false;
}

int LaserBeam::getPrevX() {
    return _prevX;
}

int LaserBeam::getPrevY() {
    return _prevY;
}

void LaserBeam::setPrevX(int prevX) {
    _prevX = prevX;
}

void LaserBeam::setPrevY(int prevY) {
    _prevY = prevY;
}