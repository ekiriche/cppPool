#include "Form.hpp"

Form::Form(void) :
        _name("form"),
        _gradeToSign(150),
        _gradeToExecute(150)
{
    _isSigned = false;
}

Form::Form(std::string name, int gradeToSign, int gradeToExecute) : _name(name),
    _gradeToSign(gradeToSign),
    _gradeToExecute(gradeToExecute) {
    _isSigned = false;

    if (_gradeToSign < 1 || _gradeToExecute < 1) {
        throw GradeTooHighException();
    } else if (_gradeToSign > 150 || _gradeToExecute > 150) {
        throw GradeTooLowException();
    }
}

Form::GradeTooLowException::GradeTooLowException() throw() {

}

Form::GradeTooLowException::GradeTooLowException(const Form::GradeTooLowException &rhs) throw() {
    *this = rhs;
}

Form::GradeTooLowException& Form::GradeTooLowException::operator=(const Form::GradeTooLowException &rhs) throw() {
    rhs.what();
    return *this;
}

Form::GradeTooLowException::~GradeTooLowException() throw() {

}

const char* Form::GradeTooLowException::what() const throw() {
    return "Grade is too low!";
}

Form::GradeTooHighException::GradeTooHighException() throw() {

}

Form::GradeTooHighException::GradeTooHighException(const Form::GradeTooHighException &rhs) throw() {
    *this = rhs;
}

Form::GradeTooHighException::~GradeTooHighException() throw() {

}

Form::GradeTooHighException& Form::GradeTooHighException::operator=(const Form::GradeTooHighException &rhs) throw() {
    rhs.what();
    return *this;
}

const char* Form::GradeTooHighException::what() const throw() {
    return "Grade is too high!";
}

Form::~Form() {

}

Form::Form(Form const &rhs) :
        _name(rhs.getName()),
    _gradeToSign(rhs.getGradeToSign()),
    _gradeToExecute(rhs.getGradeToExecute())
{
    *this = rhs;
}

Form &Form::operator=(Form const &rhs) {
    if (this != &rhs) {
        _isSigned = rhs.getIsSigned();
    }
    return *this;
}

std::string Form::getName() const {
    return _name;
}

bool Form::getIsSigned() const {
    return _isSigned;
}

int Form::getGradeToExecute() const {
    return _gradeToExecute;
}

int Form::getGradeToSign() const {
    return _gradeToSign;
}

void Form::beSigned(Bureaucrat * bureaucrat) {
    if (bureaucrat->getGrade() > _gradeToSign) {
        throw GradeTooLowException();
    }
    _isSigned = true;
}

std::ostream& operator<<(std::ostream& o, const Form & rhs) {
    if (rhs.getIsSigned()) {
        o << "Form " << rhs.getName() << ", grade to sign: " << rhs.getGradeToSign()
                     << ", grade to execute: " << rhs.getGradeToExecute()
                     << ", is signed!" << std::endl;
    } else {
        o << "Form " << rhs.getName() << ", grade to sign: " << rhs.getGradeToSign()
          << ", grade to execute: " << rhs.getGradeToExecute()
          << ", is not signed!" << std::endl;
    }
    return o;
}