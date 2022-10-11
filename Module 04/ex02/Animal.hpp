#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include<iostream>

class Animal
{
    protected:
        std::string type;
    public:
        Animal();
        Animal(std::string type);
        Animal(const Animal &scrToCopy);
        virtual Animal & operator=(const Animal &srcToAssigment);
        virtual void makeSound() = 0;
        virtual ~Animal();
};

#endif