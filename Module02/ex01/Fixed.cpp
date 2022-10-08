#include"Fixed.hpp"

Fixed::Fixed(){
    std::cout << "Default constructor called\n";
    _value = 0 << _fracBits;
}

Fixed::~Fixed(){
    std::cout << "Destructor called\n";
}

Fixed::Fixed (const int intValue){
    std::cout << "Integer constructor called\n";
    _value = intValue << _fracBits;
}
Fixed::Fixed (const float floatValue){
    std::cout << "Float constructor called\n";
    _value = roundf(floatValue * (1 << _fracBits));
}

Fixed::Fixed(const Fixed &srcForCopy){
    std::cout << "Copy constructor called\n";
    *this = srcForCopy;
}

Fixed & Fixed::operator=(const Fixed &srcOfAssigmetn){
    std::cout << "Copy assignment operator called\n";
    if( this != &srcOfAssigmetn)
        this->_value = srcOfAssigmetn.getRawBits();
    return *this;
}

std::ostream &operator<<(std::ostream &file, Fixed const &container){
    file << container.toFloat();
    return file;
}

int Fixed::toInt() const{
    return this->getRawBits() >> _fracBits;
}

float Fixed::toFloat() const {
    return (float)this->getRawBits() / (1 << _fracBits);
}

int Fixed::getRawBits(void) const{
    return _value;
}

void Fixed::setRawBits(int const raw){
    if(raw > -1)
        _value = raw;
}
