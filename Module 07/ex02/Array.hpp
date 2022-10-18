#ifndef ARRAY_HPP
# define ARRAY_HPP 
# include<iostream>

template<typename T> 
class Array
{
    private:
        T *_array;
        int _length;
    public:
        Array();
        ~Array();
        Array(unsigned int n);
        Array(const Array &src);
        Array &operator=(const Array &src);
        int size() const;
        T&operator[](int index);
};

# include "Array.tpp"

#endif