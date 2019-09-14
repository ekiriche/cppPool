#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) {

}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name) {
    if (grade < 1) {
        throw GradeTooHighException();
    } else if (grade > 150) {
        throw GradeTooLowException();
    } else {
        _grade = grade;
    }
}

Bureaucrat::~Bureaucrat() {

}

Bureaucrat::Bureaucrat(Bureaucrat const &rhs) {
    *this = rhs;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &rhs) {
    if (this != &rhs) {
        _grade = rhs.getGrade();
    }
    return *this;
}

Bureaucrat::GradeTooLowException::GradeTooLowException() throw() {

}

Bureaucrat::GradeTooLowException::GradeTooLowException(const Bureaucrat::GradeTooLowException &rhs) throw() {
    *this = rhs;
}

Bureaucrat::GradeTooLowException& Bureaucrat::GradeTooLowException::operator=(const Bureaucrat::GradeTooLowException &rhs) throw() {
    rhs.what();
    return *this;
}

Bureaucrat::GradeTooLowException::~GradeTooLowException() throw() {

}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
    return "Grade is too low!";
}

Bureaucrat::GradeTooHighException::GradeTooHighException() throw() {

}

Bureaucrat::GradeTooHighException::GradeTooHighException(const Bureaucrat::GradeTooHighException &rhs) throw() {
    *this = rhs;
}

Bureaucrat::GradeTooHighException::~GradeTooHighException() throw() {

}

Bureaucrat::GradeTooHighException& Bureaucrat::GradeTooHighException::operator=(const Bureaucrat::GradeTooHighException &rhs) throw() {
    rhs.what();
    return *this;
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
    return "Grade is too high!";
}

std::string Bureaucrat::getName() const {
    return _name;
}

int Bureaucrat::getGrade() const {
    return _grade;
}

void Bureaucrat::incrementGrade() {
    if (_grade - 1 >= 1) {
        _grade--;
    } else {
        throw GradeTooHighException();
    }
}

void Bureaucrat::decrementGrade() {
    if (_grade + 1 <= 150) {
        _grade++;
    } else {
        throw GradeTooLowException();
    }
}

std::ostream& operator<<(std::ostream& o, const Bureaucrat & rhs) {
    o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << "." << std::endl;
    return o;
}

void Bureaucrat::signForm(Form * form, std::string target) {
        form->beSigned(this);
        std::cout << "Bureaucrat " << _name << " (Grade " << _grade << ") signs a " << form->getName() << " Form "
                  << "(s.grade " << form->getGradeToSign() << ", ex.grade " << form->getGradeToExecute()
                  << ") targeted on " << target << " (Unsigned)" << std::endl;
}

void Bureaucrat::executeForm(Form const &form, std::string target) const {
        form.execute(*this);
        std::cout << "Bureaucrat " << _name << " (Grade " << _grade << ") executes a " << form.getName() << " Form "
                  << "(s.grade " << form.getGradeToSign() << ", ex.grade " << form.getGradeToExecute()
                  << ") targeted on " << target << " (Signed)" << std::endl;
}