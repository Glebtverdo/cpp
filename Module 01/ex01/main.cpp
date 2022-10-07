#include"Zombie.hpp"

int main()
{
    Zombie *hord = zombieHorde(5, "dude");
    int i  = 0;
    while (i < 5)
    {
        hord[i].announce();
        i++;
    }
    delete [] hord;
    return 0;
}