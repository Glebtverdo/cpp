#ifndef DOG_HPP
# define DOG_HPP
# include "Animal.hpp"

class Dog : public Animal
{
    public:
        Dog();
        Dog(const Dog &scrToCopy);
        Dog & operator=(const Dog &srcToAssigment);
        ~Dog();
};

#endif