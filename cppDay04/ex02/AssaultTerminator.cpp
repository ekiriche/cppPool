#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator(void) {
    std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::~AssaultTerminator() {
    std::cout << "I’ll be back ..." << std::endl;
}

AssaultTerminator::AssaultTerminator(AssaultTerminator const &rhs) {
    *this = rhs;
}

AssaultTerminator &AssaultTerminator::operator=(AssaultTerminator const &rhs) {
    if (&rhs != nullptr)
    {
        return *this;
    }
    return *this;
}

void AssaultTerminator::battleCry() const {
    std::cout << "This code is unclean. PURIFY IT !" << std::endl;
}

void AssaultTerminator::rangedAttack() const {
    std::cout << "* does nothing *" << std::endl;
}

void AssaultTerminator::meleeAttack() const {
    std::cout << "* attacks with chainfists *" << std::endl;
}

AssaultTerminator* AssaultTerminator::clone() const {
    return new AssaultTerminator();
}