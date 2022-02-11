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

	Fixed& operator=(const Fixed &object);
};

std::ostream & operator << (std::ostream & o, Fixed const & rhs);

#endif