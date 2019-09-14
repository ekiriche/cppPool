#include <iostream>
#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "SuperMutant.hpp"
#include "RadScorpion.hpp"
#include "Character.hpp"

int main() {
    PlasmaRifle rifle;

    rifle.attack();
    std::cout << rifle.getDamage() << std::endl;

    PowerFist fist;

    fist.attack();
    std::cout << fist.getDamage() << std::endl;

    SuperMutant mutant;
    std::cout << mutant.getType() << std::endl;

    Character* zaz = new Character("zaz");
    std::cout << *zaz;
    Enemy* a = new SuperMutant();
    Enemy* b = new RadScorpion();
    AWeapon* pr = new PlasmaRifle();
    AWeapon* pf = new PowerFist();
    zaz->equip(pr);
    std::cout << *zaz;
    zaz->equip(pf);
    zaz->attack(b);
    std::cout << *zaz;
    zaz->equip(pr);
    std::cout << *zaz;
    zaz->attack(b);
    std::cout << *zaz;
    zaz->attack(b);
    std::cout << *zaz;
    zaz->attack(b);
    std::cout << *zaz;
    zaz->attack(a);
    std::cout << *zaz;
    zaz->attack(a);
    std::cout << *zaz;
    zaz->attack(a);
    std::cout << *zaz;
    zaz->attack(a);
    std::cout << *zaz;
    zaz->recoverAP();
    zaz->attack(a);
    std::cout << *zaz;
    zaz->attack(a);
    std::cout << *zaz;
    zaz->attack(a);
    std::cout << *zaz;
    zaz->recoverAP();
    zaz->recoverAP();
    zaz->recoverAP();
    zaz->recoverAP();
    zaz->recoverAP();
    std::cout << *zaz;
}