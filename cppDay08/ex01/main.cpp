#include "span.hpp"
#include <exception>
#include <ctime>

int		main(void) {

    srand(clock());
    try {
        span s1(2);
        s1.addNumber(5);
        s1.addNumber(5);
    }
    catch (std::exception & e) {
        std::cout << e.what() << std::endl;
    }
    try {
        span s1(2);
        s1.addNumber(5);
        s1.addNumber(5);
        s1.addNumber(5);
    }
    catch (std::exception & e) {
        std::cout << e.what() << std::endl;
    }

    try {
        span s1(4);

        s1.addNumber(1);
        s1.addNumber(1);
        s1.addNumber(3);
        s1.addNumber(101);

        std::cout << "Longest span: " << s1.longestSpan() << std::endl;
        std::cout << "Shortest span: " << s1.shortestSpan() << std::endl;

    } catch (std::exception & e) {
        std::cout << e.what() << std::endl;
    }

    try {
        span s1(10000);
        for (int i = 0; i < 10000; i++)
            s1.addNumber(i + rand() % 100);
        std::cout << "end of 10 mln elem. to array adding" << std::endl;
        std::cout << "Longest span: " << s1.longestSpan() << std::endl;
        std::cout << "Shortest span: " << s1.shortestSpan() << std::endl;
    }
    catch (const char * e) {
        std::cout << e << std::endl;
    }


}
