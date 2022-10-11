#include"ClapTrap.hpp"
#include"ScavTrap.hpp"
#include"FragTrap.hpp"

int main()
{
    FragTrap bob;
    FragTrap Sam("sam");

    Sam.attack("bob");
    Sam.highFiveGuys();

    return 0;
}
