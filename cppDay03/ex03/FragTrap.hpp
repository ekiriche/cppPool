#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include <string>


class FragTrap : public ClapTrap {
public:
    FragTrap();

    FragTrap(std::string name);

    ~FragTrap();

    FragTrap &operator=(FragTrap const &rhs);

    FragTrap(FragTrap const &rhs);

    void meleeAttack(std::string const & target);

    void rangedAttack(std::string const & target);

    void vaulthunter_dot_exe(std::string const & target);
};


#endif
