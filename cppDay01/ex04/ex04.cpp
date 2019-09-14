//
// Created by Evgeniy KIRICHENKO on 2019-06-25.
//
#include <iostream>
#include <string>

int main() {
    std::string brain = "HI THIS IS BRAIN";
    std::string* pointBrain = &brain;
    std::string& refBrain = brain;

    std::cout << *pointBrain << std::endl;
    std::cout << refBrain << std::endl;

    return 0;
}