#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <string>
# include <sstream>

class Fixed
{
    private:
        long long int _value;
        std::string   _macros_value;
        static const int _fracBits = 16;
    public:
        Fixed               ();
        Fixed               (std::string);
        Fixed               (const Fixed &srcForCopy);
        ~Fixed              ();
        Fixed &operator=    (const Fixed &srcOfAssigmetn);
        void                showInt(void);
        void                showChar(void);
        void                showFloat(void);
        void                showDouble(void);
        int                 getRawBits(void) const;
        void                setRawBits(int const raw);
};

std::ostream &operator<<(std::ostream &file, Fixed const &container);

#endif