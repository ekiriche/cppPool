#include "AmmoPack.hpp"

AmmoPack::AmmoPack(void) : BasicCharacter(rand() % (WIN_WIDTH - 2) + 1, -5 - rand() % 50, 'A') {

}

AmmoPack::~AmmoPack() {

}

AmmoPack::AmmoPack(AmmoPack const &rhs) {
    *this = rhs;
}

AmmoPack &AmmoPack::operator=(AmmoPack const &rhs) {
    if (this != &rhs) {
        _x = rhs.getX();
        _y = rhs.getY();
    }
    return *this;
}

void AmmoPack::displayAmmoPack(WINDOW * window) {
    mvwaddch(window, _y, _x, ' ');
    if (_y + 1 == 0) {
        setY(_y + 2);
    } else if (_y + 1 < WIN_HEIGHT - 1) {
        setY(_y + 1);
    } else {
        respawnAmmoPack();
    }
    mvwaddch(window, _y, _x, _type);
}

void AmmoPack::respawnAmmoPack() {
    setY(-5 - rand() % 20);
    setX(rand() % (WIN_WIDTH - 2) + 1);
}