#include "OfficeBlock.hpp"

OfficeBlock::OfficeBlock(void) {
    _intern = nullptr;
    _execBureaucrat = nullptr;
    _signBureaucrat = nullptr;
}

OfficeBlock::OfficeBlock(Intern &intern, Bureaucrat &exec, Bureaucrat &sign) {
    _intern = &intern;
    _execBureaucrat = &exec;
    _signBureaucrat = &sign;
}

OfficeBlock::~OfficeBlock() {

}

OfficeBlock::OfficeBlock(OfficeBlock const &rhs) {
    *this = rhs;
}

OfficeBlock &OfficeBlock::operator=(OfficeBlock const &rhs) {
    if (this != &rhs) {

    }
    return *this;
}

OfficeBlock::LowOnPeople::LowOnPeople() throw() {

}

OfficeBlock::LowOnPeople::LowOnPeople(const OfficeBlock::LowOnPeople &rhs) throw() {
    *this = rhs;
}

OfficeBlock::LowOnPeople& OfficeBlock::LowOnPeople::operator=(const OfficeBlock::LowOnPeople &rhs) throw() {
    rhs.what();
    return *this;
}

OfficeBlock::LowOnPeople::~LowOnPeople() throw() {

}

const char* OfficeBlock::LowOnPeople::what() const throw() {
    return "Not enough people to do it!";
}

void OfficeBlock::doBureaucracy(std::string formName, std::string target) {
    if (_intern != nullptr && _execBureaucrat != nullptr && _signBureaucrat != nullptr) {
        Form * form = _intern->makeForm(formName, target);
        _signBureaucrat->signForm(form, target);
        _execBureaucrat->executeForm(*form, target);
        std::cout << "That'll do, " << target << ". That'll do ..." << std::endl;
    } else {
        throw LowOnPeople();
    }
}

void OfficeBlock::setExec(Bureaucrat & exec) {
    _execBureaucrat = &exec;
}

void OfficeBlock::setIntern(Intern & intern) {
    _intern = &intern;
}

void OfficeBlock::setSign(Bureaucrat & sign) {
    _signBureaucrat = &sign;
}