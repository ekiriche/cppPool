#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) {

}

PresidentialPardonForm::PresidentialPardonForm(std::string target) :
    Form("Presidential Pardon Form", 25, 5)
{
    _target = target;
}

PresidentialPardonForm::~PresidentialPardonForm() {

}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &rhs) {
    *this = rhs;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &rhs) {
    if (this != &rhs) {
        _target = rhs.getTarget();
    }
    return *this;
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const {
    try {
        Form::execute(executor);
        std::cout << _target  << " has been pardoned by Zaphod Beeblebrox!" << std::endl;
    } catch (std::exception & e) {
        std::cout << "Presidential Pardon Form with target - " << _target << " was failed to be executed, because "
                  << e.what() << std::endl;
    }
}

std::string PresidentialPardonForm::getTarget() const {
    return _target;
}