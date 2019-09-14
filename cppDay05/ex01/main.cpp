#include "Bureaucrat.hpp"
#include <iostream>

int main() {

    try {
        Bureaucrat guy1 = Bureaucrat("Guy1", 150);
        Form form1 = Form("Form1", 150, 149);

        guy1.signForm(&form1);
        std::cout << form1;
    } catch (std::exception & e) {
        std::cout << e.what() << std::endl;
    }

    std::cout << "--------------------------------" << std::endl;

    try {
        Bureaucrat guy1 = Bureaucrat("Guy1", 150);
        Form form1 = Form("Form1", 149, 149);

        guy1.signForm(&form1);
        std::cout << form1;
    } catch (std::exception & e) {
        std::cout << e.what() << std::endl;
    }

    std::cout << "--------------------------------" << std::endl;

    try {
        Bureaucrat guy1 = Bureaucrat("Guy1", 150);
        Form form1 = Form("Form1", 151, 149);

        guy1.signForm(&form1);
        std::cout << form1;
    } catch (std::exception & e) {
        std::cout << e.what() << std::endl;
    }

    std::cout << "--------------------------------" << std::endl;

    try {
        Bureaucrat guy1 = Bureaucrat("Guy1", 140);
        Form form1 = Form("Form1", 150, 149);
        Form form2 = Form("Form2", 140, 149);

        guy1.signForm(&form2);
        form1 = form2;
        std::cout << form1;
    } catch (std::exception & e) {
        std::cout << e.what() << std::endl;
    }

    std::cout << "--------------------------------" << std::endl;

    try {
        Bureaucrat guy1 = Bureaucrat("Guy1", 140);
        Form form1 = Form("Form1", 150, 149);

        form1.beSigned(&guy1);
        std::cout << form1;
    } catch (std::exception & e) {
        std::cout << e.what() << std::endl;
    }

}