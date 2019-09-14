#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"
#include <iostream>

int main() {

    try {
        Intern someRandomIntern;
        Form* rrf;
        Bureaucrat guy1 = Bureaucrat("The Champ", 1);

        rrf = someRandomIntern.makeForm("robotomy request", "Bender");
        guy1.executeForm(*rrf);
        guy1.signForm(rrf);
        guy1.executeForm(*rrf);
    } catch (std::exception e) {
        std::cout << e.what() << std::endl;
    }

    std::cout << "--------------------------------" << std::endl;

    try {
        Intern someRandomIntern;
        Form* rrf;
        Bureaucrat guy1 = Bureaucrat("The Champ", 1);

        rrf = someRandomIntern.makeForm("shrubbery request", "Bender");
        guy1.executeForm(*rrf);
        guy1.signForm(rrf);
        guy1.executeForm(*rrf);
    } catch (std::exception e) {
        std::cout << e.what() << std::endl;
    }

    std::cout << "--------------------------------" << std::endl;

    try {
        Intern someRandomIntern;
        Form* rrf;
        Bureaucrat guy1 = Bureaucrat("The Champ", 1);

        rrf = someRandomIntern.makeForm("pardon request", "Bender");
        guy1.executeForm(*rrf);
        guy1.signForm(rrf);
        guy1.executeForm(*rrf);
    } catch (std::exception e) {
        std::cout << e.what() << std::endl;
    }

    std::cout << "--------------------------------" << std::endl;

    try {
        Intern someRandomIntern;
        Form* rrf;
        Bureaucrat guy1 = Bureaucrat("The Champ", 1);

        rrf = someRandomIntern.makeForm("unbearable to read", "Bender");
        guy1.executeForm(*rrf);
        guy1.signForm(rrf);
        guy1.executeForm(*rrf);
    } catch (std::exception & e) {
        std::cout << e.what() << std::endl;
    }
}