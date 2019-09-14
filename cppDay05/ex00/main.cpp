#include "Bureaucrat.hpp"
#include <iostream>

int main() {

    try {
        Bureaucrat guy1 = Bureaucrat("Guy1", 151);
    } catch (std::exception & e) {
        std::cout << e.what() << std::endl;
    }

    try {
        Bureaucrat guy2 = Bureaucrat("Guy2", 0);
    } catch (std::exception & e) {
        std::cout << e.what() << std::endl;
    }

    try {
        Bureaucrat guy3 = Bureaucrat("Guy3", 1);
        std::cout << guy3;
        guy3.incrementGrade();
    } catch (std::exception & e) {
        std::cout << e.what() << std::endl;
    }

    try {
        Bureaucrat guy4 = Bureaucrat("Guy4", 150);
        std::cout << guy4;
        guy4.decrementGrade();
    } catch (std::exception & e) {
        std::cout << e.what() << std::endl;
    }

    try {
        Bureaucrat guy5 = Bureaucrat("Guy5", 150);
        Bureaucrat guy6 = Bureaucrat("Guy6", 1);
        guy5 = guy6;
        std::cout << guy5;
    } catch (std::exception & e) {
        std::cout << e.what() << std::endl;
    }

}