#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include <string>


class FragTrap : public ClapTrap {
//private:
//    unsigned int _health;
//    unsigned int _maxHealth;
//    unsigned int _energy;
//    unsigned int _maxEnergy;
//    unsigned int _level;
//    std::string _name;
//    unsigned int _meleeDamage;
//    unsigned int _rangedDamage;
//    unsigned int _armor;

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
