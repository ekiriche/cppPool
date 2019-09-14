#ifndef ENEMY_HPP
#define ENEMY_HPP

#include <string>
#include <iostream>


class Enemy {
protected:
    int _hp;
    std::string _type;

public:
    Enemy();

    Enemy(int hp, std::string const & type);

    virtual ~Enemy();

    Enemy &operator=(Enemy const &rhs);

    Enemy(Enemy const &rhs);

    std::string virtual getType() const;

    int getHP() const;

    virtual void takeDamage(int);
};


#endif
