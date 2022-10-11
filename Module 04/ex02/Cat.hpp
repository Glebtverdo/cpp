#ifndef CAT_HPP
# define CAT_HPP
# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
    private:
        Brain *brain;        
    public:
        Cat();
        Cat(const Cat &scrToCopy);
        Cat & operator=(const Cat &srcToAssigment);
        ~Cat();
        void showIdeas();
        void makeSound();
};


#endif