#include <iostream>
#include <string>
#include "Contact.hpp"
#include "PhoneBook.hpp"

bool isNumber(const std::string& s)
{
    std::string::const_iterator it = s.begin();
    while (it != s.end() && std::isdigit(*it)) ++it;
    return !s.empty() && it == s.end();
}

int main () {
    std::string currentInput;
    PhoneBook phoneBook;

    while (1) {
        std::cout << "Enter one of the following commands: ADD, SEARCH or EXIT" << std::endl;
        std::getline(std::cin, currentInput);
        if (currentInput == "EXIT") {
            return 0;
        } else if (currentInput == "ADD") {
            if (phoneBook.contactsLength == 8) {
                std::cout << "Phone book is full, sorry!" << std::endl;
            } else {
                Contact newContact;
                std::cout << "Your first name" << std::endl;
                std::getline(std::cin, newContact.firstName);
                std::cout << "Your last name" << std::endl;
                std::getline(std::cin, newContact.lastName);
                std::cout << "Your nickname" << std::endl;
                std::getline(std::cin, newContact.nickname);
                std::cout << "Your login" << std::endl;
                std::getline(std::cin, newContact.login);
                std::cout << "Your postal address" << std::endl;
                std::getline(std::cin, newContact.postalAddress);
                std::cout << "Your email address" << std::endl;
                std::getline(std::cin, newContact.emailAddress);
                std::cout << "Your phone number" << std::endl;
                std::getline(std::cin, newContact.phoneNumber);
                std::cout << "Your birthday date" << std::endl;
                std::getline(std::cin, newContact.birthdayDate);
                std::cout << "Your favorite meal" << std::endl;
                std::getline(std::cin, newContact.favoriteMeal);
                std::cout << "Your underwear color" << std::endl;
                std::getline(std::cin, newContact.underwearColor);
                std::cout << "Your darkest secret" << std::endl;
                std::getline(std::cin, newContact.darkestSecret);
                newContact.id = phoneBook.contactsLength;
                phoneBook.addContact(&newContact);
                std::cout << "Contact added!" << std::endl;
            }
        } else if (currentInput == "SEARCH") {
            std::cout << "     index|first name| last name|  nickname" << std::endl;
            for (int i = 0; i < phoneBook.contactsLength; ++i) {
                phoneBook.contacts[i].displayVitalInfo();
            }
            std::cout << "Insert contact's index to see more" << std::endl;
            std::getline(std::cin, currentInput);
            if (isNumber(currentInput) && std::stoi(currentInput) < phoneBook.contactsLength) {
                phoneBook.contacts[std::stoi(currentInput)].displayInfo();
            } else {
                std::cout << "Wrong index provided" << std::endl;
            }
        }
    }
}