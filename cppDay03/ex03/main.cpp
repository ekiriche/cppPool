#include <iostream>
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main() {
    NinjaTrap ninja = NinjaTrap("The Champ");
    NinjaTrap fool = NinjaTrap("The Fool");
    ClapTrap clapper = ClapTrap();
    FragTrap fragger = FragTrap("Monk");
    ScavTrap scaver = ScavTrap("Blap");

    std::cout << "-----------------------------------------" << std::endl;
    ninja.ninjaShoebox(fragger);
    std::cout << "-----------------------------------------" << std::endl;
    ninja.ninjaShoebox(fool);
    std::cout << "-----------------------------------------" << std::endl;
    ninja.ninjaShoebox(clapper);
    std::cout << "-----------------------------------------" << std::endl;
    ninja.ninjaShoebox(scaver);
    std::cout << "-----------------------------------------" << std::endl;
}