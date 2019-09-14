#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <string>


class ScavTrap {
private:
    unsigned int _health;
    unsigned int _maxHealth;
    unsigned int _energy;
    unsigned int _maxEnergy;
    unsigned int _level;
    std::string _name;
    unsigned int _meleeDamage;
    unsigned int _rangedDamage;
    unsigned int _armor;

public:
    ScavTrap();

    ScavTrap(std::string name);

    ~ScavTrap();

    ScavTrap &operator=(ScavTrap const &rhs);

    ScavTrap(ScavTrap const &rhs);

    void rangedAttack(std::string const & target);

    void meleeAttack(std::string const & target);

    void takeDamage(unsigned int amount);

    void beRepaired(unsigned int amount);

    std::string getName() const;

    void challengeNewcomer();
};


#endif
