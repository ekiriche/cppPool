#ifndef FIXED_HPP
#define FIXED_HPP


class Fixed {
private:
    int _value;
    static const int _bitsNum;

public:
    Fixed();
    Fixed(Fixed const & fixedInstance);
    ~Fixed();
    Fixed& operator=(Fixed const & rhs);
    int getRawBits() const;
    void setRawBits(int const raw);
};


#endif
