#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"
#include <iostream>

int main()
{
    Sorcerer robert("Robert", "the Magnificent");
    Sorcerer junk("Junk", "Claster Tracker");
    Victim jim("Jimmy");
    Peon joe("Joe");
    std::cout << robert << jim << joe;
    robert.polymorph(jim);
    robert.polymorph(joe);

    robert = junk;
    std::cout << robert;

    joe.getPolymorphed();
    jim.getPolymorphed();
    return 0;
}