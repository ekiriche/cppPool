#ifndef ASSAULTTERMINATOR_HPP
#define ASSAULTTERMINATOR_HPP

#include <string>
#include <iostream>
#include "ISpaceMarine.hpp"


class AssaultTerminator : public ISpaceMarine {
public:
    AssaultTerminator();

    ~AssaultTerminator();

    AssaultTerminator &operator=(AssaultTerminator const &rhs);

    AssaultTerminator(AssaultTerminator const &rhs);

    void battleCry() const;

    void rangedAttack() const;

    void meleeAttack() const;

    AssaultTerminator* clone() const;
};


#endif
