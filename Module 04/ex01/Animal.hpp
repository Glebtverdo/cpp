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
    Animal & operator=(const Animal &srcToAssigment);
    void makeSound();
    virtual ~Animal();
};

#endif