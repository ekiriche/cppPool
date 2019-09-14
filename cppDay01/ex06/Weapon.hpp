#include <string>

#ifndef WEAPON_HPP
#define WEAPON_HPP


class Weapon {
public:
    std::string type;

    Weapon(std::string type);
    ~Weapon();
    const std::string& getType();
    void setType(std::string type);
};


#endif
