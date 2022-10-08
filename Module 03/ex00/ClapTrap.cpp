#include"ClapTrap.hpp"

ClapTrap::ClapTrap() : _HP(10), _EP(10), _damage(0){
    std::cout << "defaut constructor\n";
    std::cout << "insert ClapTrap name:  ";
    std::cin >> _name;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _HP(10), _EP(10), _damage(0){
    std::cout << "string constructor\n";
}

ClapTrap::~ClapTrap(){
    std::cout << "destructor\n";
}

ClapTrap::ClapTrap(const ClapTrap &srcForCopy){
    std::cout << "copy constructor\n";
    *this = srcForCopy;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &srcForAssigment){
    std::cout << "assigment constructor";
    this->_damage = srcForAssigment._damage;
    this->_EP = srcForAssigment._EP;
    this->_HP = srcForAssigment._HP;
    this->_name = srcForAssigment._name;

    return *this;
}

void ClapTrap::attack(const std::string& target){
    if(_HP > 0 && _EP != 0){
        _EP--;
        std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _damage << " points of damage!\n";
    }
}

void ClapTrap::takeDamage(unsigned int amount){
    if(_HP != 0){
        if(amount >= _HP)
            _HP = 0;
        else
            _HP -= amount;
        std::cout << "ClapTrap " << _name << " takes " << amount << " points of damage!\n";
    }
}

void ClapTrap::beRepaired(unsigned int amount){
    if(_HP > 0 && _EP != 0){
        _EP--;
        _HP += amount;
        std::cout << "ClapTrap " << _name << " restore " << amount << " HP!\n";
    }
}