#include"Cat.hpp"
#include"Dog.hpp"

int main()
{
    int i = 0;
    Animal *animals[100];
    while (i < 100)
    {
        animals[i] = (i + 1) % 2 == 0 ? (Animal *)new Dog() : (Animal *)new Cat();
        i++;
    }
    i--;
    while (i > -1)
    {
        delete animals[i];
        i--;
    }
    Cat murka;
    Cat orange(murka);
    
    return 0;
}