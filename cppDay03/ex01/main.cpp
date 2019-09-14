#include "ScavTrap.hpp"

int main() {
    ScavTrap robo = ScavTrap("The Champ");
    ScavTrap robo2 = ScavTrap("The Fool");

    robo = robo2;

    robo.challengeNewcomer();

    robo.takeDamage(30);
    robo.takeDamage(2);
    robo.takeDamage(100);
    robo.beRepaired(5);
    robo.beRepaired(100);

    robo.rangedAttack("Yolo");
    robo.meleeAttack("Junker");
}