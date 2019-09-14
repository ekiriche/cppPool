#include <string>

#ifndef BRAIN_HPP
#define BRAIN_HPP


class Brain {
public:
    std::string _address;

    Brain();
    ~Brain();
    std::string identify();
};


#endif
