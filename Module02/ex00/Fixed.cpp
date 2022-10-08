#include"Fixed.hpp"

Fixed::Fixed() : _value(0) {
    std::cout << "Default constructor called\n";
}

Fixed::~Fixed(){
    std::cout << "Destructor called\n";
}

Fixed::Fixed(Fixed &srcForCopy){
    std::cout << "Copy constructor called\n";
    *this = srcForCopy;
}

Fixed & Fixed::operator=(Fixed &srcOfAssigmetn){
    std::cout << "Copy assignment operator called\n";
    if( this != &srcOfAssigmetn)
        this->_value = srcOfAssigmetn.getRawBits();
    return *this;
}

int Fixed::getRawBits(void){
    std::cout << "getRawBits member function called\n";
    return _value;
}

void Fixed::setRawBits(int const raw){
    std::cout << "setRawBits member function called\n";
    if(raw > -1)
        _value = raw;
}