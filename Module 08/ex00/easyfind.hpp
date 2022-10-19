#ifndef EASYFIND_HPP
# define EASYFIND_HPP 
# include<iostream>
# include <typeinfo>

template<typename T> 
typename T::iterator easyfind(T &container, int numToFind){
    for (typename T::iterator i = container.begin(); i < container.end(); ++i)
    {
        if(*i == numToFind)
            return i;
    }
    throw std::exception();
}

#endif