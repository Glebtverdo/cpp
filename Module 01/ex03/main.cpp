#include"HumanA.hpp"
#include"HumanB.hpp"

int main()
{
    Weapon club = Weapon("crude spiked club");
    HumanA bob("Bob", club);
    HumanB jim("Jim");
    jim.setWeapon(club);
    jim.attack();
    bob.attack();
    club.setType("some other type of club");
    bob.attack();
    jim.attack();
    return 0;
}
