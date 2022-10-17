#include"Fixed.hpp"

Fixed::Fixed(){
    _value = 0 << _fracBits;
}

Fixed::Fixed(std::string str){
    _macros_value = "";
    std::string macros_arr[6]= {
     "+inf\0",
     "-inf\0",
     "+inff\0",
     "-inff\0",
     "nan\0",
     "nanf\0"
    };
    int iterator = 0;
    while (iterator < 6)
    {
        if(str.compare(macros_arr[iterator]) == 0)
            _macros_value = macros_arr[iterator];
        iterator++;
    }
    if(_macros_value.length() == 0){
        std::string parsedString = "";
        int length = str.length();
        for (int i = 0; i != length; i++)
        {
            if(std::isdigit((int)str[i]) || str[i] == '.' || (i == 0 && str[i] == '-')){
                parsedString += str[i];
            }else{
                break ;
            }
        }
        if(parsedString.empty())
            throw std::exception();
        double preval = 0;
        std::istringstream ( parsedString ) >> preval;
        _value = preval * (1 << _fracBits);
    }
}

Fixed::~Fixed(){}

Fixed::Fixed(const Fixed &srcForCopy){
    *this = srcForCopy;
}

Fixed & Fixed::operator=(const Fixed &srcOfAssigmetn){
    if( this != &srcOfAssigmetn){
        this->_value = srcOfAssigmetn.getRawBits();
        this->_macros_value = srcOfAssigmetn._macros_value;
    }
    return *this;
}

void Fixed::showInt(){
    std::cout << "int : ";
    if(_macros_value.empty())
        std::cout << (this->getRawBits() >> _fracBits) << "\n";
    else
        std::cout << "impossible" << "\n";
}

void Fixed::showFloat() {
    std::cout << "float : ";
    if(_macros_value.empty())
        std::cout << ((float)this->getRawBits() / (1 << _fracBits));
    else
        std::cout << _macros_value;

    if((float)this->getRawBits() / (1 << _fracBits) == (this->getRawBits() >> _fracBits))
        std::cout << ".0";
    std::cout << "f\n";
}

void Fixed::showDouble() {
    std::cout << "double : ";
    if(_macros_value.empty())
        std::cout << ((double)this->getRawBits() / (1 << _fracBits));
    else
        std::cout << _macros_value;
    if((double)this->getRawBits() / (1 << _fracBits) == (this->getRawBits() >> _fracBits))
        std::cout << ".0";
    std::cout << "\n";
}

void Fixed::showChar(){
    std::cout << "char : ";
    if((this->getRawBits() >> _fracBits <= 37 || this->getRawBits() >> _fracBits >=127) && this->getRawBits() >> _fracBits > 0)
        std::cout << "Non displayable" << "\n";
    else if(_macros_value.empty() && this->getRawBits() >> _fracBits > 0)
        std::cout << (char)(this->getRawBits() >> _fracBits) << "\n";
    else
        std::cout << "impossible" << "\n";
}

int Fixed::getRawBits(void) const{
    return _value;
}

void Fixed::setRawBits(int const raw){
    if(raw > -1)
        _value = raw;
}
