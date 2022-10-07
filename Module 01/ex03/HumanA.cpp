#include"HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &newWeapon) : weapon(newWeapon){
    _name = name;
}

void HumanA::attack(){
    std::cout << _name << " attacks with their " << weapon.getType() << "\n";
}