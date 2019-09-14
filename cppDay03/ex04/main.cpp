#include <iostream>
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "SuperTrap.hpp"

int main() {
    std::cout << "------------------------------------------------" << std::endl;
    SuperTrap supaSoldier = SuperTrap("Supa Soldier");
    std::cout << "------------------------------------------------" << std::endl;
    ClapTrap clapper = ClapTrap();
    std::cout << "------------------------------------------------" << std::endl;
    FragTrap fragger = FragTrap("Officer Kevin");
    std::cout << "------------------------------------------------" << std::endl;
    ScavTrap scaver = ScavTrap("Angry one");
    std::cout << "------------------------------------------------" << std::endl;
    NinjaTrap ninja = NinjaTrap("The Fool");
    std::cout << "------------------------------------------------" << std::endl;

    supaSoldier.meleeAttack("Donkey");
    std::cout << "------------------------------------------------" << std::endl;

    supaSoldier.rangedAttack("Donkey");
    std::cout << "------------------------------------------------" << std::endl;

    supaSoldier.meleeAttack("Scum");
    std::cout << "------------------------------------------------" << std::endl;

    supaSoldier.ninjaShoebox(clapper);
    std::cout << "------------------------------------------------" << std::endl;

    supaSoldier.ninjaShoebox(fragger);
    std::cout << "------------------------------------------------" << std::endl;

    supaSoldier.ninjaShoebox(scaver);
    std::cout << "------------------------------------------------" << std::endl;

    supaSoldier.ninjaShoebox(ninja);
    std::cout << "------------------------------------------------" << std::endl;

    supaSoldier.vaulthunter_dot_exe("Vault Hunter");
    std::cout << "------------------------------------------------" << std::endl;

    std::cout << supaSoldier.getMeleeDamage() << std::endl;
    std::cout << supaSoldier.getHealth() << std::endl;

}