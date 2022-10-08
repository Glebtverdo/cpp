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
        int                  getRawBits(void) const;
        int                  toInt(void) const;
        void                 setRawBits(int const raw);
        float                toFloat(void) const;
        Fixed                ();
        Fixed                (const int intValue);
        Fixed                (const float floatValue);
        Fixed                (const Fixed &srcForCopy);
        ~Fixed               ();
        float  operator+     (const Fixed &otherFixed);
        float  operator-     (const Fixed &otherFixed);
        float  operator*     (const Fixed &otherFixed);
        float  operator/     (const Fixed &otherFixed);
        bool  operator<      (const Fixed &otherFixed) const;
        bool  operator>      (const Fixed &otherFixed) const;
        bool  operator>=     (const Fixed &otherFixed) const;
        bool  operator<=     (const Fixed &otherFixed) const;
        bool  operator==     (const Fixed &otherFixed) const;
        bool  operator!=     (const Fixed &otherFixed) const;
        Fixed  &operator++   (void);
        Fixed  operator++    (int);
        Fixed  &operator--   (void);
        Fixed  operator--    (int);
        Fixed  &operator=    (const Fixed &srcOfAssigmetn);
        static Fixed         &max(Fixed &first, Fixed &second);
        static Fixed         &min(Fixed &first, Fixed &second);
        static const Fixed   &max(const Fixed &first, const Fixed &second);
        static const Fixed   &min(const Fixed &first, const Fixed &second);
};

std::ostream &operator<<    (std::ostream &file, Fixed const &container);

#endif