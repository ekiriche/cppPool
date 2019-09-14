#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

Intern::Intern(void) {

}

Intern::~Intern() {

}

Intern::Intern(Intern const &rhs) {
    *this = rhs;
}

Intern &Intern::operator=(Intern const &rhs) {
    if (this != &rhs) {

    }
    return *this;
}

Intern::FormNotFound::FormNotFound() throw() {

}

Intern::FormNotFound::FormNotFound(const Intern::FormNotFound &rhs) throw() {
    *this = rhs;
}

Intern::FormNotFound& Intern::FormNotFound::operator=(const Intern::FormNotFound &rhs) throw() {
    rhs.what();
    return *this;
}

Intern::FormNotFound::~FormNotFound() throw() {

}

const char* Intern::FormNotFound::what() const throw() {
    return "Form not found!";
}

Form* Intern::makeForm(std::string formName, std::string target) {
    Form* form;

    if (formName == "robotomy request") {
        form = new RobotomyRequestForm(target);
    } else if (formName == "shrubbery request") {
        form = new ShrubberyCreationForm(target);
    } else if (formName == "pardon request") {
        form = new PresidentialPardonForm(target);
    } else {
        throw FormNotFound();
    }

    std::cout << "Intern creates a " << formName << " Form (s.grade " << form->getGradeToSign()
              << ", ex.grade " << form->getGradeToExecute() << ") targeted on " << target << " (Unsigned)" << std::endl;

    return form;
}