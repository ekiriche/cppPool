#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(void) {

}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) :
    Form("Shrubbery Creation Form", 145, 137)
{
    _target = target;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {

}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &rhs) {
    *this = rhs;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rhs) {
    if (this != &rhs) {
        _target = rhs.getTarget();
    }
    return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const {
    Form::execute(executor);

    std::ofstream o;

    o.open(_target + "_shrubbery", std::ofstream::out | std::ofstream::trunc);

    if (o.fail()) {
        std::cout << "Something if wrong with output file!" << std::endl;
        return ;
    }

    o << "  /|\\" << std::endl;
    o << " / | \\" << std::endl;
    o << "/  |  \\" << std::endl;
    o.close();
}

std::string ShrubberyCreationForm::getTarget() const {
    return _target;
}