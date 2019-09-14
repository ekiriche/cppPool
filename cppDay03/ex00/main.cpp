#include "FragTrap.hpp"

int main() {
    FragTrap robo = FragTrap("The Champ");
    FragTrap robo2 = FragTrap("The Fool");

    robo = robo2;

    robo.vaulthunter_dot_exe("Donkey");
    robo.vaulthunter_dot_exe("Kevin");
    robo.vaulthunter_dot_exe("joe");
    robo.vaulthunter_dot_exe("Officer");
    robo.vaulthunter_dot_exe("Chump");

    robo.takeDamage(30);
    robo.takeDamage(4);
    robo.takeDamage(100);
    robo.beRepaired(5);
    robo.beRepaired(100);

    robo.rangedAttack("Yolo");
    robo.meleeAttack("Junker");
    robo.takeDamage(-5);
}