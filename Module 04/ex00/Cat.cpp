#include"Cat.hpp"

Cat::Cat() : Animal("Cat"){
    std::cout << "Cat default constructor\n";
}

Cat::~Cat(){
    std::cout << "Cat destructor\n";
}

Cat::Cat(const Cat &scrToCopy){
    std::cout << "Cat copy constructor\n";
    *this = scrToCopy;
}
Cat &Cat::operator=(const Cat &srcToAssigment){
    std::cout << "Cat assigment constructor\n";
    this->type = srcToAssigment.type;
    return *this;
}