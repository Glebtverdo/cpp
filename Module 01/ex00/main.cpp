#include"Zombie.hpp"

int main()
{
    Zombie *some;
    Zombie *some1;
    Zombie *some2;
    Zombie *some3;
    randomChump("zom");

    some = newZombie("dude");
    some1 = newZombie(";");
    some2 = newZombie("guy");
    some3 = newZombie("boy");
    some->announce();
    some1->announce();
    some2->announce();
    some3->announce();
    delete some;
    delete some3;
    delete some2;
    delete some1;
    return 0;
}