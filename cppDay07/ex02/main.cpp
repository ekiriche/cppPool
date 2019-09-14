#include "Array.tpp"
#include <iostream>

int main() {
    Array <int>test1(5);
    Array <int>test2(5);

    for (int i = 0; i < 5; i++)
    {
        test1[i] = 123 + i;
        test2[i] = 456 + i;
    }

    std::cout << "test1 elements:" << std::endl;

    for (int i = 0; i < 5; i++)
        std::cout << test1[i] << std::endl;

    std::cout << "test2 elements:" << std::endl;

    for (int i = 0; i < 5; i++)
        std::cout << test2[i] << std::endl;

    test1 = test2;

    std::cout << "test1 elements after test1 = test2:" << std::endl;

    for (int i = 0; i < 5; i++)
        std::cout << test1[i] << std::endl;

    try {
        std:: cout << test2[99];
    }
    catch(std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }

    Array <std::string>str1(2);
    Array <std::string>str2(2);

    str1[0] = "First string str1";
    str1[1] = "Second string str1";
    str2[0] = "First of str2";
    str2[1] = "Second of str2";

    try {
        std::cout << "minus 2 element of string array:" << std::endl;
        std::cout << str2[-1] << std::endl;
    }
    catch(std::exception & e) {
        std::cout << e.what() << std::endl;
    }

    std::cout << "str1 elements:" << std::endl;

    for (int i = 0; i < 2; i++)
        std::cout << str1[i] << std::endl;

    std::cout << "str2 elements:" << std::endl;

    for (int i = 0; i < 2; i++)
        std::cout << str2[i] << std::endl;

    str1 = str2;

    std::cout << "str1 elements after str1 = str2:" << std::endl;

    for (int i = 0; i < 2; i++)
        std::cout << str1[i] << std::endl;

    try {
        std:: cout << str1[99];
    }
    catch(std::exception & e) {
        std::cout << e.what() << std::endl;
    }
}