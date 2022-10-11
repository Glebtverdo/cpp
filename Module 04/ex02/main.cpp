#include"Cat.hpp"
#include"Dog.hpp"

int main()
{
    int i = 0;
    Animal *animals[10];
    while (i < 10)
    {
        animals[i] = (i + 1) % 2 == 0 ? (Animal *)new Dog() : (Animal *)new Cat();
        animals[i]->makeSound();
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
    // Animal m;
    // m.makeSound();
    return 0;
}