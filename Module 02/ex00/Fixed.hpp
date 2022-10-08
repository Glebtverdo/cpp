#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>

class Fixed
{
    private:
        int _value;
        static const int _fracBits = 8;
    public:
        Fixed ();
        Fixed (Fixed &srcForCopy);
        ~Fixed ();
        Fixed &operator= (Fixed &srcOfAssigmetn);
        int getRawBits(void );
        void setRawBits(int const raw);
};

#endif