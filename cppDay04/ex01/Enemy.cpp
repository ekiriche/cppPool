#include "Enemy.hpp"

Enemy::Enemy(void) {

}

Enemy::Enemy(int hp, const std::string &type) {
    _hp = hp;
    _type = type;
}

Enemy::~Enemy() {

}

Enemy::Enemy(Enemy const &rhs) {
    *this = rhs;
}

Enemy &Enemy::operator=(Enemy const &rhs) {
    _hp = rhs.getHP();
    _type = rhs.getType();
    return *this;
}

void Enemy::takeDamage(int damage) {
    if (damage > 0) {
        _hp -= damage;
    }
}

int Enemy::getHP() const {
    return _hp;
}

std::string Enemy::getType() const {
    return _type;
}