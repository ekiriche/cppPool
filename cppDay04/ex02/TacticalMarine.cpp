#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine(void) {
    std::cout << "Tactical Marine ready for battle" << std::endl;
}

TacticalMarine::~TacticalMarine() {
    std::cout << "Aaargh ..." << std::endl;
}

TacticalMarine::TacticalMarine(TacticalMarine const &rhs) {
    *this = rhs;
}

TacticalMarine &TacticalMarine::operator=(TacticalMarine const &rhs) {
    if (&rhs != nullptr)
    {
        return *this;
    }
    return *this;
}

void TacticalMarine::battleCry() const {
    std::cout << "For the holy PLOT !" << std::endl;
}

void TacticalMarine::rangedAttack() const {
    std::cout << "* attacks with bolter *" << std::endl;
}

void TacticalMarine::meleeAttack() const {
    std::cout << "* attacks with chainsword *" << std::endl;
}

TacticalMarine* TacticalMarine::clone() const {
    return new TacticalMarine();
}