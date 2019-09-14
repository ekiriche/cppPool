#ifndef NINJATRAP_HPP
#define NINJATRAP_HPP

#include <string>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"


class NinjaTrap : public ClapTrap {
public:
    NinjaTrap();

    NinjaTrap(std::string name);

    ~NinjaTrap();

    NinjaTrap &operator=(NinjaTrap const &rhs);

    NinjaTrap(NinjaTrap const &rhs);

    void meleeAttack(std::string const & target);

    void rangedAttack(std::string const & target);

    void ninjaShoebox(ClapTrap & clapTrap);

    void ninjaShoebox(FragTrap & fragTrap);

    void ninjaShoebox(ScavTrap & scavTrap);

    void ninjaShoebox(NinjaTrap & ninjaTrap);
};


#endif
