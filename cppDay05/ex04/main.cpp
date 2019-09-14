#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"
#include "OfficeBlock.hpp"
#include <iostream>

int main() {

    try {
        Intern idiotOne;

        Bureaucrat hermes = Bureaucrat("Hermes Conrad", 1);

        Bureaucrat bob = Bureaucrat("Bobby Bobson", 1);

        OfficeBlock ob;

        ob.setIntern(idiotOne);

        ob.setSign(bob);

        ob.setExec(hermes);

        try {
            ob.doBureaucracy("robotomy request", "Pigley");
        } catch (OfficeBlock::LowOnPeople & e) {
            std::cout << "Special thanks to our manager! " << e.what() << std::endl;
        } catch (std::exception & e) {
            std::cout << e.what() << std::endl;
        }
    } catch (std::exception & e) {
        std::cout << e.what() << std::endl;
    }

    std::cout << "-----------------------------" << std::endl;

    try {
        Intern idiotOne;

        Bureaucrat hermes = Bureaucrat("Hermes Conrad", 150);

        Bureaucrat bob = Bureaucrat("Bobby Bobson", 1);

        OfficeBlock ob;

        ob.setIntern(idiotOne);

        ob.setSign(bob);

        ob.setExec(hermes);

        try {
            ob.doBureaucracy("robotomy request", "Pigley");
        } catch (OfficeBlock::LowOnPeople & e) {
            std::cout << "Special thanks to our manager! " << e.what() << std::endl;
        } catch (std::exception & e) {
            std::cout << e.what() << std::endl;
        }
    } catch (std::exception & e) {
        std::cout << e.what() << std::endl;
    }

    std::cout << "-----------------------------" << std::endl;

    try {
        Intern idiotOne;

        Bureaucrat hermes = Bureaucrat("Hermes Conrad", 1);

        Bureaucrat bob = Bureaucrat("Bobby Bobson", 1);

        OfficeBlock ob;

        ob.setIntern(idiotOne);

//        ob.setSign(bob);

        ob.setExec(hermes);

        try {
            ob.doBureaucracy("robotomy request", "Pigley");
        } catch (OfficeBlock::LowOnPeople & e) {
            std::cout << "Special thanks to our manager! " << e.what() << std::endl;
        } catch (std::exception & e) {
            std::cout << e.what() << std::endl;
        }
    } catch (std::exception & e) {
        std::cout << e.what() << std::endl;
    }

    std::cout << "-----------------------------" << std::endl;

    try {
        Intern idiotOne;

        Bureaucrat hermes = Bureaucrat("Hermes Conrad", 1);

        Bureaucrat bob = Bureaucrat("Bobby Bobson", 1);

        OfficeBlock ob;

        ob.setIntern(idiotOne);

        ob.setSign(bob);

        ob.setExec(hermes);

        try {
            ob.doBureaucracy("unbearable to read", "");
        } catch (OfficeBlock::LowOnPeople & e) {
            std::cout << "Special thanks to our manager! " << e.what() << std::endl;
        } catch (std::exception & e) {
            std::cout << e.what() << std::endl;
        }
    } catch (std::exception & e) {
        std::cout << e.what() << std::endl;
    }


}