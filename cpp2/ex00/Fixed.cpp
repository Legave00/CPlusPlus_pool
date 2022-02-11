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

Fixed::Fixed(const Fixed &a)
{
	std::cout << "Copy constructor called" << std::endl;
    *this = a; 
}

int	Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
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