#ifndef HUMANB_HPP
# define HUMANB_HPP
# include"Weapon.hpp"

class HumanB
{
    private:
        Weapon *weapon;
        std::string _name;
    public:
        HumanB(std::string name);
        void attack();
        void setWeapon(Weapon &newWeapon);
};


#endif