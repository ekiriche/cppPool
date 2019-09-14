#include "RadScorpion.hpp"

RadScorpion::RadScorpion(void) : Enemy(80, "RadScorpion") {
    std::cout << "* click click click *" << std::endl;
}

RadScorpion::~RadScorpion() {
    std::cout << "* SPROTCH *" << std::endl;
}

RadScorpion::RadScorpion(RadScorpion const &rhs) {
    *this = rhs;
}

RadScorpion &RadScorpion::operator=(RadScorpion const &rhs) {
    _hp = rhs.getHP();
    _type = rhs.getType();
    return *this;
}