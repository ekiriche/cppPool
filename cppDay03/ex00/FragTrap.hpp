#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <string>


class FragTrap {
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
    FragTrap();

    FragTrap(std::string name);

    ~FragTrap();

    FragTrap &operator=(FragTrap const &rhs);

    FragTrap(FragTrap const &rhs);

    void rangedAttack(std::string const & target);

    void meleeAttack(std::string const & target);

    void takeDamage(unsigned int amount);

    void beRepaired(unsigned int amount);

    std::string getName() const;

    void vaulthunter_dot_exe(std::string const & target);
};


#endif
