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
    Fixed operator+(Fixed const & rhs) const;
    Fixed operator-(Fixed const & rhs) const;
    Fixed operator*(Fixed const & rhs) const;
    Fixed operator/(Fixed const & rhs) const;

    bool operator>(Fixed const & rhs) const;
    bool operator<(Fixed const & rhs) const;
    bool operator>=(Fixed const & rhs) const;
    bool operator<=(Fixed const & rhs) const;
    bool operator==(Fixed const & rhs) const;
    bool operator!=(Fixed const & rhs) const;

    Fixed& operator++();
    Fixed operator++(int);
    Fixed& operator--();
    Fixed operator--(int);

    static const Fixed& min(Fixed& f1, Fixed& f2);
    static const Fixed& max(Fixed& f1, Fixed& f2);
    static const Fixed& min(Fixed const & f1, Fixed const & f2);
    static const Fixed& max(Fixed const & f1, Fixed const & f2);

    int getRawBits() const;
    void setRawBits(int const raw);
    float toFloat(void) const;
    int toInt(void) const;
};

std::ostream & operator<<(std::ostream & o, Fixed const & rhs);

#endif