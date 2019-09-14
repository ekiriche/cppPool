#include "Enemy.hpp"
#include <ctime>

Enemy::Enemy(void) :
    BasicCharacter(rand() % (WIN_WIDTH - 2) + 1, -5 - rand() % 100, getRandomType()) {

}

Enemy::~Enemy() {

}

Enemy::Enemy(Enemy const &rhs) {
    *this = rhs;
}

Enemy &Enemy::operator=(Enemy const &rhs) {
    if (this != &rhs) {
        _x = rhs.getX();
        _y = rhs.getY();
        _hp = rhs.getHP();
    }
    return *this;
}
void Enemy::displayEnemy(WINDOW * window) {
    mvwaddch(window, _y, _x, ' ');
    if (_y + 1 == 0) {
        setY(_y + 2);
    } else if (_y + 1 < WIN_HEIGHT - 1) {
        setY(_y + 1);
    } else {
        getHit();
    }

    mvwaddch(window, _y, _x, _type);
}

char Enemy::getRandomType() const {
    int random = rand() % 7;

    if (random == 0) {
        return '*';
    }
    return 'o';
}

void Enemy::getHit() {
    setY(-5 - rand() % 20);
    setX(rand() % (WIN_WIDTH - 2) + 1);
}

bool Enemy::hitByLaser(WINDOW* window, LaserBeam * beams) {
    bool hit = false;

    for (int i = 0; i < MAX_LASER_BEAMS; i++) {
        if (beams[i].getIsActive() && beams[i].getWhoShot() != "enemy"
                                   &&  _x == beams[i].getX() && _y == beams[i].getY()) {
            getHit();
            mvwaddch(window, _y, _x, ' ');
            mvwaddch(window, _y - 1, _x, ' ');
            hit = true;
        }
    }
    if (hit) {
        beams->disableLaserBeam();
    }
    return hit;
}

void Enemy::shoot(LaserBeam * beams) {
    for (int i = 0; i < MAX_LASER_BEAMS; i++) {
        if (!beams[i].getIsActive()) {
            beams[i].activateLaserBeam(_x, _y, "enemy");
            break ;
        }
    }
}