#ifndef TEMPLATES_H
# define TEMPLATES_H 
# include<iostream>

template<typename T> 
void iter(T array[], int length, void (*func)(T arg)){
    for (int i = 0; i < length; i++)
        func(array[i]);
}

#endif