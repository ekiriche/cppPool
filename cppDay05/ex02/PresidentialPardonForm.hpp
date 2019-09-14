#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include <string>
#include <iostream>
#include "Form.hpp"
#include "Bureaucrat.hpp"


class PresidentialPardonForm : public Form {
private:
    std::string _target;

public:

    PresidentialPardonForm();

    PresidentialPardonForm(std::string target);

    ~PresidentialPardonForm();

    PresidentialPardonForm &operator=(PresidentialPardonForm const &rhs);

    PresidentialPardonForm(PresidentialPardonForm const &rhs);

    virtual void execute(Bureaucrat const & executor) const;

    std::string getTarget() const;
};


#endif
