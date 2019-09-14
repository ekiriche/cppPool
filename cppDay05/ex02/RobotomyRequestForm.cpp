#include "RobotomyRequestForm.hpp"
#include <ctime>

RobotomyRequestForm::RobotomyRequestForm(void) {

}

RobotomyRequestForm::RobotomyRequestForm(std::string target) :
    Form("Robotomy Request Form", 72, 45)
{
    _target = target;
}

RobotomyRequestForm::~RobotomyRequestForm() {

}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &rhs) {
    *this = rhs;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &rhs) {
    if (this != &rhs) {
        _target = rhs.getTarget();
    }
    return *this;
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const {
    try {
        Form::execute(executor);
        srand(clock());
        std::cout << "* drilling noises *" << std::endl;
        if (rand() % 2) {
            std::cout << _target << " was successfully robotomized!" << std::endl;
        } else {
            std::cout << _target << "'s robotomize was a complete failure!" << std::endl;
        }
    } catch (std::exception & e) {
        std::cout << "Robotomy Request Form with target - " << _target << " was failed to be executed, because "
                  << e.what() << std::endl;
    }
}

std::string RobotomyRequestForm::getTarget() const {
    return _target;
}