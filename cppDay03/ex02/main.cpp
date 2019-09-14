#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>

int main() {
    ScavTrap roboScav = ScavTrap("The Scav Champ");
    ScavTrap roboScav2 = ScavTrap("The Scav Fool");

    roboScav = roboScav2;

    roboScav.challengeNewcomer();

    roboScav.takeDamage(30);
    roboScav.takeDamage(2);
    roboScav.takeDamage(100);
    roboScav.beRepaired(5);
    roboScav.beRepaired(100);

    roboScav.rangedAttack("Yolo");
    roboScav.meleeAttack("Junker");

    std::cout << "-------------------------------------" << std::endl;

    FragTrap roboFrag = FragTrap("The Frag Champ");

    roboFrag.vaulthunter_dot_exe("Donkey");
    roboFrag.vaulthunter_dot_exe("Kevin");
    roboFrag.vaulthunter_dot_exe("joe");
    roboFrag.vaulthunter_dot_exe("Officer");
    roboFrag.vaulthunter_dot_exe("Chump");

    roboFrag.takeDamage(30);
    roboFrag.takeDamage(4);
    roboFrag.takeDamage(100);
    roboFrag.beRepaired(5);
    roboFrag.beRepaired(100);

    roboFrag.rangedAttack("Yolo");
    roboFrag.meleeAttack("Junker");
    roboFrag.takeDamage(-5);
}