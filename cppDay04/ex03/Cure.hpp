#ifndef CURE_HPP
#define CURE_HPP

#include <string>
#include <iostream>


class Cure {
public:
    Cure();

    ~Cure();

    Cure &operator=(Cure const &rhs);

    Cure(Cure const &rhs);
};


#endif
