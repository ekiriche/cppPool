#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>


class ClapTrap {
protected:
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
    ClapTrap();

    ~ClapTrap();

    ClapTrap &operator=(ClapTrap const &rhs);

    ClapTrap(ClapTrap const &rhs);

    void takeDamage(unsigned int amount);

    void beRepaired(unsigned int amount);

    std::string getName() const;
};


#endif
