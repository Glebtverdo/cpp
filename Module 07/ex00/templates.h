#ifndef TEMPLATES_H
# define TEMPLATES_H 
# include<iostream>

template<typename T> 
void swap(T &a, T &b){
    T buf = a;

    a = b;
    b = buf;
}

template<typename T> 
T max(T &a, T &b){
    return a > b ? a : b;
}

template<typename T> 
T min(T &a, T &b){
    return a < b ? a : b;
}

#endif