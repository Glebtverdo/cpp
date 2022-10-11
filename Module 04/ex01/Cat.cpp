#include"Cat.hpp"

Cat::Cat() : Animal("Cat"){
    std::cout << "Cat default constructor\n";
    brain = new Brain;
}

Cat::~Cat(){
    std::cout << "Cat destructor\n";
    delete brain;
}

Cat::Cat(const Cat &scrToCopy){
    std::cout << "Cat copy constructor\n";
    *this = scrToCopy;
}
Cat &Cat::operator=(const Cat &srcToAssigment){
    std::cout << "Cat assigment constructor\n";
    this->brain = new Brain;
    this->type = srcToAssigment.type;
    *this->brain = *srcToAssigment.brain;
    return *this;
}

void Cat::showIdeas(){
    int i = 0;
    while (i < 100)
    {
        this->brain->showIdeaByIndex(i);
        i++;
    }
}