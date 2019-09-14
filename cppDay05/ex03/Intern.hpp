#ifndef INTERN_HPP
#define INTERN_HPP

#include <string>
#include <iostream>
#include "Form.hpp"

class Intern {
public:
    class FormNotFound : public std::exception {
    public:
        FormNotFound() throw();
        FormNotFound(const FormNotFound & rhs) throw();
        Intern::FormNotFound& operator=(const FormNotFound & rhs) throw();
        ~FormNotFound() throw();
        const char * what() const throw();
    };

    Intern();

    ~Intern();

    Intern &operator=(Intern const &rhs);

    Intern(Intern const &rhs);

    Form* makeForm(std::string formName, std::string target);
};


#endif
