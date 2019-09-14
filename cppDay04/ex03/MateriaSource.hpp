#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include <string>
#include <iostream>


class MateriaSource {
public:
    MateriaSource();

    ~MateriaSource();

    MateriaSource &operator=(MateriaSource const &rhs);

    MateriaSource(MateriaSource const &rhs);
};


#endif
