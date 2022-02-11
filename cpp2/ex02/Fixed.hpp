#ifndef FIXED_HPP
#define FIXED_HPP

#include <iomanip>
#include <iostream>
#include <cmath>

class Fixed
{
    private:

    int					_FixedP;
    static const int	_nonFixed;
    
    public:

    Fixed();
    ~Fixed();
	Fixed(const Fixed &object);
	Fixed(const int FixedP);
    Fixed(const float FixedP);

    int     getRawBits(void) const;
    void    setRawBits(int const raw);
    float   toFloat(void) const;
    int     toInt(void) const;

    static Fixed   &min(Fixed &p1, Fixed &p2);
    static Fixed const &min(Fixed const &p1, Fixed const &p2);
    static Fixed   &max(Fixed &p1, Fixed &p2);
    static Fixed const &max(Fixed const &p1, Fixed const &p2);

	Fixed& operator=(const Fixed &object);
	Fixed operator+(const Fixed &object);
	Fixed operator-(const Fixed &object);
	Fixed operator*(const Fixed &object);
	Fixed operator/(const Fixed &object);

	Fixed& operator++(void);
	Fixed operator++(int obj);
    Fixed& operator--(void);
	Fixed operator--(int obj);

	bool operator<(const Fixed &object);
	bool operator>(const Fixed &object);
	bool operator<=(const Fixed &object);
	bool operator>=(const Fixed &object);
	bool operator==(const Fixed &object);
	bool operator!=(const Fixed &object);

};

std::ostream & operator << (std::ostream & o, Fixed const & rhs);

#endif