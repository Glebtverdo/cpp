#include"Zombie.hpp"

Zombie::Zombie(){
    name = "";
}

void Zombie::setName(std::string newName){
    name = newName;
}

Zombie::~Zombie(){
    std::cout << name << " was destroed\n";
}

void Zombie::announce( void ){
    std::cout << name << ": BraiiiiiiinnnzzzZ...\n";
}