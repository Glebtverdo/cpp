#ifndef HUMANA_HPP
# define HUMANA_HPP
# include"Weapon.hpp"

class HumanA
{
    private:
        Weapon &weapon;
        std::string _name;
    public:
        HumanA(std::string name, Weapon &newWeapon);
        void attack();
};

#endif