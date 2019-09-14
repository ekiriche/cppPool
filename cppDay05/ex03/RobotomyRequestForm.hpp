#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <string>
#include <iostream>
#include "Form.hpp"
#include "Bureaucrat.hpp"

class RobotomyRequestForm : public Form {
private:
    std::string _target;

public:
    RobotomyRequestForm();

    RobotomyRequestForm(std::string target);

    ~RobotomyRequestForm();

    RobotomyRequestForm &operator=(RobotomyRequestForm const &rhs);

    RobotomyRequestForm(RobotomyRequestForm const &rhs);

    virtual void execute(Bureaucrat const & executor) const;

    std::string getTarget() const;
};


#endif
