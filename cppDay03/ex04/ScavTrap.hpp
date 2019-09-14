#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <string>


class ScavTrap : public virtual ClapTrap {
public:
    ScavTrap();

    ScavTrap(std::string name);

    ~ScavTrap();

    ScavTrap &operator=(ScavTrap const &rhs);

    ScavTrap(ScavTrap const &rhs);

    void meleeAttack(std::string const & target);

    void rangedAttack(std::string const & target);

    void challengeNewcomer();
};


#endif
