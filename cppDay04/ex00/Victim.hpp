#ifndef VICTIM_HPP
#define VICTIM_HPP

#include <string>
#include <iostream>


class Victim {
protected:
    std::string _name;

public:
    Victim();

    Victim(std::string name);

    virtual ~Victim();

    Victim &operator=(Victim const &rhs);

    Victim(Victim const &rhs);

    void getPolymorphed() const;

    virtual std::string getName() const;
};

std::ostream & operator<<(std::ostream & o, Victim const & rhs);

#endif
