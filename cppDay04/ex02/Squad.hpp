#ifndef SQUAD_HPP
#define SQUAD_HPP

#include <string>
#include <iostream>
#include "ISquad.hpp"
#include "ISpaceMarine.hpp"


class Squad : public ISquad {
private:
    int _size;
    static const int _maxSize = 100;
    ISpaceMarine* _boys[_maxSize];

public:
    Squad();

    ~Squad();

    Squad &operator=(Squad const &rhs);

    Squad(Squad const &rhs);

    int getCount() const;

    ISpaceMarine* getUnit(int) const;

    int push(ISpaceMarine*);

    ISpaceMarine* getUnits() const;
};


#endif
