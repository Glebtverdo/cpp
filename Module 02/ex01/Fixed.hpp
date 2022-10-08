#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <cmath>

class Fixed
{
    private:
        int _value;
        static const int _fracBits = 8;
    public:
        Fixed               ();
        Fixed               (const int intValue);
        Fixed               (const float floatValue);
        Fixed               (const Fixed &srcForCopy);
        ~Fixed              ();
        Fixed &operator=    (const Fixed &srcOfAssigmetn);
        int                 getRawBits(void) const;
        void                setRawBits(int const raw);
        int                 toInt(void) const;
        float               toFloat(void) const;
};

std::ostream &operator<<(std::ostream &file, Fixed const &container);

#endif