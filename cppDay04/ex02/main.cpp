#include "TacticalMarine.hpp"
#include "Squad.hpp"
#include "AssaultTerminator.hpp"

int main()
{
    ISpaceMarine* bob = new TacticalMarine;
    ISpaceMarine* jim = new AssaultTerminator;
    ISquad* vlc = new Squad;
    vlc->push(bob);
    vlc->push(jim);
    for (int i = 0; i < vlc->getCount(); ++i)
    {
        ISpaceMarine* cur = vlc->getUnit(i);
        cur->battleCry();
        cur->rangedAttack();
        cur->meleeAttack();
    }
    delete vlc;

    std::cout << "-----------------------" << std::endl;
    ISpaceMarine* donkey1 = new TacticalMarine();
    ISpaceMarine* donkey2 = new TacticalMarine();
    ISpaceMarine* donkey3 = new AssaultTerminator();

    std::cout << "-----------------------" << std::endl;
    ISquad* squad1 = new Squad;
    squad1->push(donkey1);
    squad1->push(donkey1);
    squad1->push(donkey2);

    for (int i = 0; i < squad1->getCount(); ++i)
    {
        ISpaceMarine* cur = squad1->getUnit(i);
        cur->battleCry();
        cur->rangedAttack();
        cur->meleeAttack();
    }
    std::cout << "-----------------------" << std::endl;
    ISquad* squad2 = new Squad;

    squad2 = squad1;
    squad2->push(donkey3);
    for (int i = 0; i < squad2->getCount() + 100; ++i)
    {
        ISpaceMarine* cur = squad2->getUnit(i);
        if (cur != nullptr) {
            cur->battleCry();
            cur->rangedAttack();
            cur->meleeAttack();
        }
    }

    return 0;
}