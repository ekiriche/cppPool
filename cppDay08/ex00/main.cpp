#include "easyfind.hpp"
#include <iostream>
#include <vector>

int main() {
    std::vector<int> vector(5);

    for (int i = 0; i < 5; i++) {
        vector[i] = i + 1;
    }

    easyfind(vector, 1);
    easyfind(vector, 2);
    easyfind(vector, 5);
    try {
        easyfind(vector, -1);
    } catch (std::exception & e) {
        std::cout << e.what() << std::endl;
    }

}