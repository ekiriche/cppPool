#include "SuperMutant.hpp"

SuperMutant::SuperMutant(void) : Enemy(170, "Super Mutant") {
    std::cout << "Gaaah. Me want smash heads !" << std::endl;
}

SuperMutant::~SuperMutant() {
    std::cout << "Aaargh ..." << std::endl;
}

SuperMutant::SuperMutant(SuperMutant const &rhs) {
    *this = rhs;
}

SuperMutant &SuperMutant::operator=(SuperMutant const &rhs) {
    _hp = rhs.getHP();
    _type = rhs.getType();
    return *this;
}

void SuperMutant::takeDamage(int damage) {
    if (damage - 3 > 0) {
        _hp -= damage - 3;
    }
}