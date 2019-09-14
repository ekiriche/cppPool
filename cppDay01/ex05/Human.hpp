#include <string>
#include "Brain.hpp"

#ifndef HUMAN_HPP
#define HUMAN_HPP


class Human {
public:
    const Brain _brain;

    Human();
    ~Human();
    Brain& getBrain();
    std::string identify();
};


#endif
