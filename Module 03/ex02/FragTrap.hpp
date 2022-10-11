#ifndef FRAGTPAR_HPP
# define FRAGTPAR_HPP
# include"ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    public:
        void highFiveGuys();
        FragTrap();
        ~FragTrap();
        FragTrap(std::string);
        FragTrap(const FragTrap &srcForCopy);
        FragTrap & operator=(const FragTrap &srcForAssigment);
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};

#endif