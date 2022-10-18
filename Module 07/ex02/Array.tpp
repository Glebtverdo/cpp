#include"Array.hpp"

template<typename T> 
Array<T>::Array(): _array(new T[0]), _length(0){}

template<typename T> 
Array<T>::Array(unsigned int n): _length(n){
    _array = new T[n]();
}
template<typename T>
Array<T>::Array(const Array<T> &src){
    *this = src;
}

template<typename T>
Array<T> &Array<T>::operator=(const Array<T> &src){
    if(this->_array)
        delete [] this->_array;
    this->_array = new T[src.size()];
    for (int i = 0; i < src.size(); i++)
        this->_array[i] = src._array[i];
    this->_length = src.size();
    return *this;    
}

template<typename T>
Array<T>::~Array(){
    delete [] _array;
}

template<typename T>
int Array<T>::size() const{
    return _length;
}

template<typename T>
T &Array<T>::operator[](int index){
    if(index >= this->size() || index < 0)
        throw std::exception();
    return this->_array[index];    
}