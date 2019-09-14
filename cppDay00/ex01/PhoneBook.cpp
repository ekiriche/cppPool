//
// Created by Evgeniy KIRICHENKO on 2019-06-24.
//

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() {
    contactsLength = 0;
    return ;
}

PhoneBook::~PhoneBook() {
    return ;
}

void PhoneBook::addContact(Contact *contact) {
    contacts[contactsLength] = *contact;
    contactsLength++;
}