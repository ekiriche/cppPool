#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <exception>
#include <algorithm>

template<typename T>
void easyfind(T const & container, int value) throw(std::exception) {
    if (std::find(container.begin(), container.end(), value) != container.end()) {
        std::cout << "Value " << value << " was found!" << std::endl;
    } else {
        throw(std::out_of_range("Value was not found!"));
    }
}

#endif
