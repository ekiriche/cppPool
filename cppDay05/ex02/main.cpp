#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <iostream>

int main() {

    try {
        Bureaucrat guy1 = Bureaucrat("Guy1", 20);
        Bureaucrat guy2 = Bureaucrat("Guy2", 5);
        PresidentialPardonForm form1 = PresidentialPardonForm("Ugly");

        form1.execute(guy1);
        guy1.signForm(&form1);
        form1.execute(guy1);
        form1.execute(guy2);
        std::cout << form1;
    } catch (std::exception & e) {
        std::cout << e.what() << std::endl;
    }

    std::cout << "---------------------------" << std::endl;

    try {
        Bureaucrat guy1 = Bureaucrat("Guy1", 72);
        Bureaucrat guy2 = Bureaucrat("Guy2", 45);
        RobotomyRequestForm form1 = RobotomyRequestForm("Ugly");

        form1.execute(guy1);
        guy1.signForm(&form1);
        form1.execute(guy1);
        form1.execute(guy2);
        std::cout << form1;
    } catch (std::exception & e) {
        std::cout << e.what() << std::endl;
    }

    std::cout << "---------------------------" << std::endl;

    try {
        Bureaucrat guy1 = Bureaucrat("Guy1", 72);
        Bureaucrat guy2 = Bureaucrat("Guy2", 45);
        ShrubberyCreationForm form1 = ShrubberyCreationForm("Ugly");

        form1.execute(guy1);
        guy1.signForm(&form1);
        form1.execute(guy2);
        std::cout << form1;
    } catch (std::exception & e) {
        std::cout << e.what() << std::endl;
    }

    std::cout << "---------------------------" << std::endl;

    try {
        Bureaucrat guy1 = Bureaucrat("Guy1", 72);
        Bureaucrat guy2 = Bureaucrat("Guy2", 1);
        RobotomyRequestForm form1 = RobotomyRequestForm("Ugly");
        PresidentialPardonForm form2 = PresidentialPardonForm("Ugly");

        form1.execute(guy1);
        guy1.signForm(&form1);
        guy2.executeForm(form1);
        guy1.executeForm(form2);
        std::cout << form1;
    } catch (std::exception & e) {
        std::cout << e.what() << std::endl;
    }

}