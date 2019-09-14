#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {
private:
    int _value;
    static const int _bitsNum;

public:
    Fixed();
    Fixed(const Fixed& fixedInstance);
    Fixed(int const value);
    Fixed(float const value);

    ~Fixed();
    Fixed& operator=(Fixed const & rhs);
    int getRawBits() const;
    void setRawBits(int const raw);
    float toFloat(void) const;
    int toInt(void) const;
};

std::ostream & operator<<(std::ostream & o, Fixed const & rhs);

#endif
