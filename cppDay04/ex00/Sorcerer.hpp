#ifndef SORCERER_HPP
#define SORCERER_HPP

#include <string>
#include "Victim.hpp"

class Sorcerer {
private:
    std::string _name;
    std::string _title;

    Sorcerer();

public:
    Sorcerer(std::string name, std::string title);

    virtual ~Sorcerer();

    Sorcerer &operator=(Sorcerer const &rhs);

    Sorcerer(Sorcerer const &rhs);

    virtual std::string getName() const;

    std::string getTitle() const;

    void polymorph(Victim const &) const;
};

std::ostream & operator<<(std::ostream & o, Sorcerer const & rhs);


#endif
