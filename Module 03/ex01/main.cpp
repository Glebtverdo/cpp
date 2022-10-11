#include"ClapTrap.hpp"
#include"ScavTrap.hpp"

int main()
{
    ScavTrap bob;
    ScavTrap Sam("sam");

    Sam.attack("bob");
    Sam.guardGate();
    Sam.beRepaired(10);
    return 0;
}
