#ifndef   CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include<iostream>

class ClapTrap
{
private:
    std::string _name;
    unsigned int _HP, _EP, _damage;
public:
    ClapTrap();
    ClapTrap(std::string name);
    ClapTrap(const ClapTrap &srcForCopy);
    ClapTrap &operator=(const ClapTrap &srcForAssigment);
    ~ClapTrap();
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};

#endif