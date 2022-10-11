#include"Animal.hpp"

Animal::Animal(){
    std::cout << "Animal default constructor\n";
    type = "unknown";
}

void Animal::makeSound(){
    std::cout << ((type.compare("Dog\0") == 0) ? "bark" : type.compare("Cat\0") == 0 ? "meow" : "unknown sound") << "\n";
}

Animal::Animal(std::string _type){
    std::cout << "Animal string constructor\n";
    type = _type;
}

Animal::~Animal(){
    std::cout << "Animal destructor\n";
}

Animal::Animal(const Animal &scrToCopy){
    std::cout << "Animal copy constructor\n";
    *this = scrToCopy;
}
Animal &Animal::operator=(const Animal &srcToAssigment){
    std::cout << "Animal assigment constructor\n";
    this->type = srcToAssigment.type;
    return *this;
}