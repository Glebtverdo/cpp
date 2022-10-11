#include"Dog.hpp"

Dog::Dog() : Animal("Dog"){
    std::cout << "Dog default constructor\n";
}

Dog::~Dog(){
    std::cout << "Dog destructor\n";
}

Dog::Dog(const Dog &scrToCopy){
    std::cout << "Dog copy constructor\n";
    *this = scrToCopy;
}
Dog &Dog::operator=(const Dog &srcToAssigment){
    std::cout << "Dog assigment constructor\n";
    this->type = srcToAssigment.type;
    return *this;
}