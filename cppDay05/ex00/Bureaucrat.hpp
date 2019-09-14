#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>


class Bureaucrat {
private:
    std::string const _name;
    int _grade;

    Bureaucrat();

public:
    class GradeTooHighException : public std::exception {
    public:
        GradeTooHighException() throw();
        GradeTooHighException(const GradeTooHighException & rhs) throw();
        Bureaucrat::GradeTooHighException& operator=(const GradeTooHighException & rhs) throw();
        ~GradeTooHighException() throw();
        const char * what() const throw();
    };

    class GradeTooLowException : public std::exception {
    public:
        GradeTooLowException() throw();
        GradeTooLowException(const GradeTooLowException & rhs) throw();
        Bureaucrat::GradeTooLowException& operator=(const GradeTooLowException & rhs) throw();
        ~GradeTooLowException() throw();
        const char * what() const throw();
    };

    Bureaucrat(std::string name, int grade);

    ~Bureaucrat();

    Bureaucrat &operator=(Bureaucrat const &rhs);

    Bureaucrat(Bureaucrat const &rhs);

    std::string getName() const;

    int getGrade() const;

    void incrementGrade();

    void decrementGrade();
};

std::ostream & operator<<(std::ostream & o, Bureaucrat const & rhs);

#endif
