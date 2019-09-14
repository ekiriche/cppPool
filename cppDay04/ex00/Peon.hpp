#ifndef PEON_HPP
#define PEON_HPP

#include <string>
#include "Victim.hpp"

class Peon : public Victim {
public:
    Peon();

    Peon(std::string name);

    virtual ~Peon();

    Peon &operator=(Peon const &rhs);

    Peon(Peon const &rhs);

    void getPolymorphed() const;
};


#endif
