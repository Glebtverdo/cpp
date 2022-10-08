#include"Fixed.hpp"

Fixed::Fixed(){
    _value = 0 << _fracBits;
}
Fixed::~Fixed(){}
Fixed::Fixed (const int intValue){
    _value = intValue << _fracBits;
}
Fixed::Fixed (const float floatValue){
    _value = roundf(floatValue * (1 << _fracBits));
}

Fixed::Fixed(const Fixed &srcForCopy){
    *this = srcForCopy;
}

Fixed & Fixed::operator=(const Fixed &srcOfAssigmetn){
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


bool  Fixed::operator<(const Fixed &otherFixed) const{
    return this->getRawBits() < otherFixed.getRawBits();
}
bool  Fixed::operator>(const Fixed &otherFixed) const{
    return this->getRawBits() > otherFixed.getRawBits();
}
bool  Fixed::operator==(const Fixed &otherFixed) const{
    return this->getRawBits() ==  otherFixed.getRawBits();
}
bool  Fixed::operator>=(const Fixed &otherFixed) const{
    return *this > otherFixed || *this == otherFixed;
};
bool  Fixed::operator<=(const Fixed &otherFixed) const{
    return *this < otherFixed || *this == otherFixed;
};
bool  Fixed::operator!=(const Fixed &otherFixed) const{
    return !(*this == otherFixed);
};

float  Fixed::operator+   (const Fixed &otherFixed){
    return (this->getRawBits() + otherFixed.getRawBits()) / (1 << this->_fracBits);
};
float  Fixed::operator-   (const Fixed &otherFixed){
    return (this->getRawBits() - otherFixed.getRawBits()) / (1 << this->_fracBits);
}
float  Fixed::operator*   (const Fixed &otherFixed){
    std::cout << this->getRawBits() << "  " << otherFixed.toInt() << "\n";
    return (this->getRawBits() * otherFixed.toFloat()) / (1 << this->_fracBits);
}
float  Fixed::operator/   (const Fixed &otherFixed){
    return (this->getRawBits() / otherFixed.toFloat()) / (1 << this->_fracBits);
}

Fixed &Fixed::operator++   (void){
    this->setRawBits(this->getRawBits() + 1);
    return *this;
}
Fixed &Fixed::operator--   (void){
    this->setRawBits(this->getRawBits() - 1);
    return *this;
}

Fixed Fixed::operator++   (int){
    Fixed old(*this);
    ++(*this);
    return old;
}

Fixed Fixed::operator--   (int){
    Fixed old(*this);
    --(*this);
    return old;
}

Fixed         &Fixed::max(Fixed &first, Fixed &second){
    if(first > second)
        return first;
    return second;
}
Fixed         &Fixed::min(Fixed &first, Fixed &second){
    if(first < second)
        return first;
    return second;
}
const Fixed   &Fixed::max(const Fixed &first, const Fixed &second){
    if(first > second)
        return first;
    return second;
}
const Fixed   &Fixed::min(const Fixed &first, const Fixed &second){
    if(first < second)
        return first;
    return second;
}