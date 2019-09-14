#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <string>
#include <iostream>
#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter {
private:
    AMateria* _inventory[4];
    std::string _name;
    int _size;

public:
    Character();

    Character(std::string name);

    ~Character();

    Character &operator=(Character const &rhs);

    Character(Character const &rhs);

    virtual std::string const & getName();

    int getSize();

    virtual void equip(AMateria* m);

    virtual void unequip(int idx);

    virtual void use(int idx, ICharacter& target);
};


#endif
