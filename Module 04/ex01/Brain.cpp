#include"Brain.hpp"

Brain::Brain(){
    std::cout << "Brain default constructor\n";
    int i = 0;
    while (i < 100)
    {
        ideas[i] = "idea" + std::to_string(i);
        i++;
    }
}

Brain::~Brain(){
    std::cout << "Brain destructor\n";
}

Brain::Brain(const Brain &scrToCopy){
    std::cout << "Brain copy constructor\n";
    *this = scrToCopy;
}
Brain &Brain::operator=(const Brain &srcToAssigment){
    std::cout << "Brain assigment constructor\n";
    for (size_t i = 0; i < 100; i++)
        this->ideas[i] = srcToAssigment.ideas[i];
    return *this;
}

void Brain::showIdeaByIndex(int index){
    std::cout << ideas[index];
}