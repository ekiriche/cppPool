#include <string>
#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int main() {
    Zombie* easyZombie = new Zombie("Bobi", "On Speed");
    easyZombie->announce();
    delete easyZombie;

    ZombieEvent* zombieCity = new ZombieEvent();
    Zombie* mediumZombie = zombieCity->newZombie("Goon");
    mediumZombie->announce();
    delete mediumZombie;

    zombieCity->setZombieType("Pissed Off");
    Zombie* randomZombie = zombieCity->randomChump();
    delete randomZombie;

    return 0;
}