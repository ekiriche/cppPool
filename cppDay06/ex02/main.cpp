#include <iostream>
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include "Base.hpp"
#include <ctime>

Base * generate() {
    int random = rand() % 3;
    Base * base;

    switch (random) {
        case 0:
            base = new A();
            break ;
        case 1:
            base = new B();
            break ;
        case 2:
            base = new C();
            break ;
    }

    return base;
}

void identify_from_pointer( Base * p ) {
    if (dynamic_cast<A*>(p) != nullptr) {
        std::cout << "A" << std::endl;
    } else if (dynamic_cast<B*>(p) != nullptr) {
        std::cout << "B" << std::endl;
    } else if (dynamic_cast<C*>(p) != nullptr) {
        std::cout << "C" << std::endl;
    }
}

void identify_from_reference( Base & p ) {
    try {
        A & a = dynamic_cast<A&>(p);
        if (&a != nullptr) std::cout << "A" << std::endl;
    } catch (std::bad_cast & e) {

    }

    try {
        B & b = dynamic_cast<B&>(p);
        if (&b != nullptr) std::cout << "B" << std::endl;
    } catch (std::bad_cast & e) {

    }

    try {
        C & c = dynamic_cast<C&>(p);
        if (&c != nullptr) std::cout << "C" << std::endl;
    } catch (std::bad_cast & e) {

    }
}

int main() {
    std::srand(clock());

    Base *base = generate();
    identify_from_pointer(base);
    identify_from_reference(*base);

    std::cout << "-------------------------------------" << std::endl;

    Base *base1 = generate();
    identify_from_reference(*base1);
    identify_from_pointer(base1);

    return (0);
}