#include"FragTrap.hpp"

void FragTrap::highFiveGuys(){
    std::cout << "HIGH FIVE!\n";
}

FragTrap::FragTrap() : FragTrap("unknown"){
    std::cout << "FragTrap defaut constructor\n";
    std::cout << "insert FragTrap name:  ";
    std::cin >> _name;
    this->_damage = 30;
    this->_EP = 100;
    this->_HP = 100;
}

FragTrap::FragTrap(std::string name) : FragTrap(name){
    std::cout << "FragTrap string constructor\n";
    this->_damage = 30;
    this->_EP = 100;
    this->_HP = 100;
    this->_name = name;
}

FragTrap::~FragTrap(){
    std::cout << "FragTrap destructor\n";
}

FragTrap::FragTrap(const FragTrap &srcForCopy){
    std::cout << "FragTrap copy constructor\n";
    *this = srcForCopy;
}

FragTrap &FragTrap::operator=(const FragTrap &srcForAssigment){
    std::cout << "FragTrap assigment constructor\n";
    this->_damage = srcForAssigment._damage;
    this->_EP = srcForAssigment._EP;
    this->_HP = srcForAssigment._HP;
    this->_name = srcForAssigment._name;
    return *this;
}


void FragTrap::attack(const std::string& target){
    if(_HP > 0 && _EP != 0){
        _EP--;
        std::cout << "FragTrap " << _name << " attacks " << target << ", causing " << _damage << " points of damage!\n";
    }
}

void FragTrap::takeDamage(unsigned int amount){
    if(_HP != 0){
        if(amount >= _HP)
            _HP = 0;
        else
            _HP -= amount;
        std::cout << "FragTrap " << _name << " takes " << amount << " points of damage!\n";
    }
}

void FragTrap::beRepaired(unsigned int amount){
    if(_HP > 0 && _EP != 0){
        _EP--;
        _HP += amount;
        std::cout << "FragTrap " << _name << " restore " << amount << " HP!\n";
    }
}