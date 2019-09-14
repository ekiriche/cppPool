#ifndef ICE_HPP
#define ICE_HPP

#include <string>
#include <iostream>


class Ice {
public:
    Ice();

    ~Ice();

    Ice &operator=(Ice const &rhs);

    Ice(Ice const &rhs);
};


#endif
