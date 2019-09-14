#ifndef SUPERTRAP_HPP
#define SUPERTRAP_HPP

#include <string>
#include "NinjaTrap.hpp"
#include "FragTrap.hpp"

class SuperTrap : public virtual NinjaTrap, public virtual FragTrap {
public:
    SuperTrap();

    SuperTrap(std::string name);

    ~SuperTrap();

    SuperTrap &operator=(SuperTrap const &rhs);

    SuperTrap(SuperTrap const &rhs);

    void rangedAttack(std::string const & target);

    void meleeAttack(std::string const & target);
};


#endif
