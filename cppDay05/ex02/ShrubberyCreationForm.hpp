#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <string>
#include <iostream>
#include "Form.hpp"
#include "Bureaucrat.hpp"

class ShrubberyCreationForm : public Form {
private:
    std::string _target;

public:
    ShrubberyCreationForm();

    ShrubberyCreationForm(std::string target);

    ~ShrubberyCreationForm();

    ShrubberyCreationForm &operator=(ShrubberyCreationForm const &rhs);

    ShrubberyCreationForm(ShrubberyCreationForm const &rhs);

    virtual void execute(Bureaucrat const & executor) const;

    std::string getTarget() const;
};


#endif
