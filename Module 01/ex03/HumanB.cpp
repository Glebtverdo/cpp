#include"HumanB.hpp"

HumanB::HumanB(std::string name){
    _name = name;
}

void HumanB::attack(){
    std::cout << _name << " attacks with their " << (* weapon).getType() << "\n";
}

void HumanB::setWeapon(Weapon &newWeapon){
    weapon = &newWeapon;
}