#ifndef FORM_HPP
#define FORM_HPP

#include <string>
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
private:
    std::string const _name;
    bool _isSigned;
    int const _gradeToSign;
    int const _gradeToExecute;

public:
    class GradeTooHighException : public std::exception {
    public:
        GradeTooHighException() throw();
        GradeTooHighException(const GradeTooHighException & rhs) throw();
        Form::GradeTooHighException& operator=(const GradeTooHighException & rhs) throw();
        ~GradeTooHighException() throw();
        const char * what() const throw();
    };

    class GradeTooLowException : public std::exception {
    public:
        GradeTooLowException() throw();
        GradeTooLowException(const GradeTooLowException & rhs) throw();
        Form::GradeTooLowException& operator=(const GradeTooLowException & rhs) throw();
        ~GradeTooLowException() throw();
        const char * what() const throw();
    };

    class FormIsNotSigned : public std::exception {
    public:
        FormIsNotSigned() throw();
        FormIsNotSigned(const FormIsNotSigned & rhs) throw();
        Form::FormIsNotSigned& operator=(const FormIsNotSigned & rhs) throw();
        ~FormIsNotSigned() throw();
        const char * what() const throw();
    };

    Form();

    Form(std::string, int gradeToSign, int gradeToExecute);

    ~Form();

    Form &operator=(Form const &rhs);

    Form(Form const &rhs);

    void beSigned(Bureaucrat*);

    bool getIsSigned() const;

    std::string getName() const;

    int getGradeToSign() const;

    int getGradeToExecute() const;

    virtual void execute(Bureaucrat const & executor) const = 0;
};

std::ostream & operator<<(std::ostream & o, Form const & rhs);

#endif
