#ifndef   SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include "ClapTrap.hpp" 

class ScavTrap : public ClapTrap
{
    public:
        ScavTrap();
        ~ScavTrap();
        ScavTrap(std::string);
        ScavTrap(const ScavTrap &srcForCopy);
        ScavTrap & operator=(const ScavTrap &srcForAssigment);
        void guardGate();
        void attack(const std::string& target);
};

#endif