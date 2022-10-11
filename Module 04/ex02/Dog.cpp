#include"Dog.hpp"

Dog::Dog() : Animal("Dog"){
    std::cout << "Dog default constructor\n";
    brain = new Brain;
}

Dog::~Dog(){
    std::cout << "Dog destructor\n";
    delete brain;
}

Dog::Dog(const Dog &scrToCopy){
    std::cout << "Dog copy constructor\n";
    *this = scrToCopy;
}
Dog &Dog::operator=(const Dog &srcToAssigment){
    std::cout << "Dog assigment constructor\n";
    this->brain = new Brain;
    this->brain = srcToAssigment.brain;
    *this->brain = *srcToAssigment.brain;
    return *this;
}
void Dog::makeSound(){
    Animal::makeSound();
}
