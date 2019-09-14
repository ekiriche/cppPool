#include "Player.hpp"

Player::Player(void) {

}

Player::Player(int x, int y, WINDOW* window) : BasicCharacter(x, y, '^') {
    _window = window;
    keypad(window, true);
    _ammo = 50;
}

Player::~Player() {

}

Player::Player(Player const &rhs) {
    *this = rhs;
}

Player &Player::operator=(Player const &rhs) {
    if (this == &rhs) {
        _x = rhs.getX();
        _y = rhs.getY();
        _score = rhs.getScore();
        _hp = rhs.getHP();
    }
    return *this;
}

void Player::moveCharacter(int keyCode, LaserBeam* beams) {
    mvwaddch(_window, _y, _x, ' ');
    mvwaddch(_window, _y, _x + 1, ' ');
    mvwaddch(_window, _y, _x + 2, ' ');
    mvwaddch(_window, _y, _x + 3, ' ');

    mvwaddch(_window, _y, _x - 1, ' ');
    mvwaddch(_window, _y, _x - 2, ' ');
    mvwaddch(_window, _y, _x - 3, ' ');
    switch (keyCode) {
        case KEY_UP:
            if (_y - 1 > 1) {
                setY(_y - 1);
            }
            break ;
        case KEY_DOWN:
            if (_y + 1 < WIN_HEIGHT - 1) {
                setY(_y + 1);
            }
            break ;
        case KEY_LEFT:
            if (_x - 1 > 2) {
                setX(_x - 1);
            }
            break ;
        case KEY_RIGHT:
            if (_x + 1 < WIN_WIDTH - 3) {
                setX(_x + 1);
            }
            break ;
        case 'z' :
        case 'Z' :
            shoot(beams);
            break ;
    }
}

void Player::displayPlayer() {
    if (_type == '^') {
        mvwaddch(_window, _y, _x, '*');
        mvwaddch(_window, _y, _x + 1, ')');
        mvwaddch(_window, _y, _x + 2, '-');
        mvwaddch(_window, _y, _x + 3, '|');

        mvwaddch(_window, _y, _x - 1, '(');
        mvwaddch(_window, _y, _x - 2, '-');
        mvwaddch(_window, _y, _x - 3, '|');
    } else {
        mvwaddch(_window, _y, _x, _type);
    }
}
bool Player::isPlayer(unsigned int playerSymbol) {
    char player[7] = {'|','-','(','*', ')', '-', '|'};
    for (int i = 0; i < 7; ++i) {
        if ((unsigned int)player[i] == playerSymbol) {
            return true;
        }

    }
    return false;
}

void Player::shoot(LaserBeam* beams) {
    if (_ammo <= 0) {
        return ;
    }
    for (int i = 0; i < MAX_LASER_BEAMS; i++) {
        if (!beams[i].getIsActive()) {
            beams[i].activateLaserBeam(_x, _y - 1, "player");
            _ammo--;
            break ;
        }
    }
}

void Player::hitByEnemy(Enemy* enemies) {
    int hpTaken = false;

    for (int i = 0; i < MAX_ENEMIES; i++) {
        int x = enemies[i].getX();
        int y = enemies[i].getY();
        if ((x == _x || x - 1 == _x || x - 2 == _x || _x == x + 1 || _x == x + 2 || _x == x + 3 || _x == x - 3) && y == _y) {
            enemies[i].setY(-5 - rand() % 20);
            if (!hpTaken) {
                if (enemies[i].getType() == '*') {
                    _hp = 0;
                } else {
                    _hp -= 1;
                }
            }
        }
    }
}

void Player::hitByLaserBeam(LaserBeam * beams) {
    int y;
    int x;

    for (int i = 0; i < MAX_LASER_BEAMS; i++) {
        if (beams[i].getIsActive() && beams[i].getWhoShot() == "enemy") {
            x = beams[i].getX();
            y = beams[i].getY();

            if ((x == _x || x - 1 == _x || x - 2 == _x || x - 3 == _x || x + 1 == _x || x + 2 == _x || x + 3 == _x) && y == _y) {
                _hp--;
                beams[i].disableLaserBeam();
                break ;
            }
        }
    }
}

void Player::hitByAmmoPack(AmmoPack * ammoPack) {
    int x = ammoPack->getX();
    int y = ammoPack->getY();

    if (y == _y && (x == _x || x - 1 == _x || x - 2 == _x || x - 3 == _x || x + 1 == _x || x + 2 == _x || x + 3 == _x)) {
        _ammo = 50;
        ammoPack->respawnAmmoPack();
    }
}

int Player::getAmmo() const {
    return _ammo;
}