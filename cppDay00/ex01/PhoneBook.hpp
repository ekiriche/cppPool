#include "Contact.hpp"

#ifndef PHONEBOOK_H
#define PHONEBOOK_H


class PhoneBook {
public:
    Contact contacts[8];
    int contactsLength;

    PhoneBook(void);
    ~PhoneBook(void);

    void addContact(Contact *contact);
};


#endif
