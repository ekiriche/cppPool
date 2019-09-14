#include <iostream>

#ifndef CONTACT_H
#define CONTACT_H


class Contact {
public:
    int id;
    std::string firstName,
                lastName,
                nickname,
                login,
                postalAddress,
                emailAddress,
                phoneNumber,
                birthdayDate,
                favoriteMeal,
                underwearColor,
                darkestSecret;

    Contact(void);
    ~Contact(void);
    void displayInfo(void);
    void displayVitalInfo(void);
    std::string prepareColumn(std::string value);
};


#endif