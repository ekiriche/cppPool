#ifndef OFFICEBLOCK_HPP
#define OFFICEBLOCK_HPP

#include <string>
#include <iostream>
#include "Intern.hpp"
#include "Bureaucrat.hpp"


class OfficeBlock {
private:
    Intern * _intern;
    Bureaucrat * _execBureaucrat;
    Bureaucrat * _signBureaucrat;

    OfficeBlock &operator=(OfficeBlock const &rhs);

    OfficeBlock(OfficeBlock const &rhs);

public:
    OfficeBlock();

    class LowOnPeople : public std::exception {
    public:
        LowOnPeople() throw();
        LowOnPeople(const LowOnPeople & rhs) throw();
        OfficeBlock::LowOnPeople& operator=(const LowOnPeople & rhs) throw();
        ~LowOnPeople() throw();
        const char * what() const throw();
    };

    OfficeBlock(Intern & intern, Bureaucrat & exec, Bureaucrat & sign);

    ~OfficeBlock();

    void setIntern(Intern &);

    void setExec(Bureaucrat &);

    void setSign(Bureaucrat &);

    void doBureaucracy(std::string formName, std::string target);
};


#endif
