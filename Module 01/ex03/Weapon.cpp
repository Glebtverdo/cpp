#include"Weapon.hpp"

std::string Weapon::getType(){
    return type;
}

Weapon::Weapon(std::string newType){
    type = newType;
}

void Weapon::setType(std::string newType){
    if(newType.length() > 0){
        type = newType;
    }
}