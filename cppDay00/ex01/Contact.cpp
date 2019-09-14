#include "Contact.hpp"
#include <iostream>
#include <string>

Contact::Contact() {
    return ;
}

Contact::~Contact() {
    return ;
}

void Contact::displayInfo() {
    std::cout << "First name: " << firstName << std::endl;
    std::cout << "Last name: " << lastName << std::endl;
    std::cout << "Nickname: " << nickname << std::endl;
    std::cout << "Login: " << login << std::endl;
    std::cout << "Postal address: " << postalAddress << std::endl;
    std::cout << "Email address: " << emailAddress << std::endl;
    std::cout << "Phone number: " << phoneNumber << std::endl;
    std::cout << "Birthday date: " << birthdayDate << std::endl;
    std::cout << "Favorite meal: " << favoriteMeal << std::endl;
    std::cout << "Underwear color: " << underwearColor << std::endl;
    std::cout << "Darkest secret: " << darkestSecret << std::endl;
}

void Contact::displayVitalInfo() {
    std::cout << prepareColumn(std::to_string(id)) << "|" << prepareColumn(firstName) << "|"
              << prepareColumn(lastName) << "|" << prepareColumn(nickname) << std::endl;
}

std::string Contact::prepareColumn(std::string value) {
    std::string newValue= "";

    if (value.length() > 10) {
        newValue = value.substr(0, 10);
        newValue[9] = '.';
    } else {
        for (unsigned int i = 0; i < 10 - value.length(); ++i) {
            newValue += " ";
        }
        newValue += value;
    }
    return newValue;
}