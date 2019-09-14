#include "Character.hpp"

Character::Character(void) {
    _name = "Charlie";
    _ap = 40;
    _weapon = nullptr;
}

Character::Character(const std::string &name) {
    _name = name;
    _ap = 40;
    _weapon = nullptr;
}

Character::~Character() {
    std::cout << "Yep, i'm dead!" << std::endl;
}

Character::Character(Character const &rhs) {
    *this = rhs;
}

Character &Character::operator=(Character const &rhs) {
    _name = rhs.getName();
    _ap = rhs.getAP();
    _weapon = rhs.getWeapon();
    return *this;
}

std::ostream& operator<<(std::ostream& o, const Character& rhs) {
    if (rhs.getWeapon() == nullptr) {
        o << rhs.getName() << " has " << rhs.getAP() << " AP and is unarmed" << std::endl;
    } else {
        o << rhs.getName() << " has " << rhs.getAP() << " AP and wields a " << rhs.getWeapon()->getName() << std::endl;
    }
    return o;
}

void Character::equip(AWeapon * weapon) {
    _weapon = weapon;
}

void Character::recoverAP() {
    if (_ap + 10 > 40) {
        _ap = 40;
    } else {
        _ap += 10;
    }
}

void Character::attack(Enemy * enemy) {
    if (_weapon != nullptr && _weapon->getAPCost() < _ap && enemy != nullptr && enemy->getHP() > 0)
    {
        std::cout << _name << " attacks " << enemy->getType() << " with a " << _weapon->getName() << std::endl;
        _weapon->attack();
        enemy->takeDamage(_weapon->getDamage());
        if (enemy->getHP() <= 0) {
            delete enemy;
        }
        if (_ap - _weapon->getAPCost() < 0) {
            _ap = 0;
        } else {
            _ap -= _weapon->getAPCost();
        }
    }
}

std::string Character::getName() const {
    return _name;
}

AWeapon* Character::getWeapon() const {
    return _weapon;
}

int Character::getAP() const {
    return _ap;
}