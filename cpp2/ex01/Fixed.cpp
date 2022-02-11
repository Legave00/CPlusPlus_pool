#include "Fixed.hpp"

int const Fixed::_nonFixed = 8;

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
    _FixedP = 0;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const int FixedP)
{
	std::cout << "Int constructor called" << std::endl;
    _FixedP = FixedP << _nonFixed;
}

Fixed::Fixed(const float FixedP)
{
	std::cout << "Float constructor called" << std::endl;
	_FixedP = roundf(FixedP * (1 << _nonFixed));
}

Fixed::Fixed(const Fixed &a)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = a;
}

float	Fixed::toFloat() const
{
	return(float(round(_FixedP) / (1 << _nonFixed)));
}

int		Fixed::toInt() const
{
	return(_FixedP >> _nonFixed);
}

int	Fixed::getRawBits() const
{
	// std::cout << "getRawBits member function called" << std::endl;
	return (_FixedP);
}

void	Fixed::setRawBits(int const raw)
{
	_FixedP = raw;
}

Fixed & Fixed::operator= (const Fixed &a)
{
	std::cout << "Assignation operator called" << std::endl;
	_FixedP = a.getRawBits();
	return (*this);
}

std::ostream & operator << (std::ostream & o, Fixed const & rhs)
{
	o << rhs.toFloat();
	return o;
}