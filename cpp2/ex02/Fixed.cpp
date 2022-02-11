#include "Fixed.hpp"

int const Fixed::_nonFixed = 8;

// конструкторы и деструктор 

Fixed::Fixed()
{
	// std::cout << "Default constructor called" << std::endl;
    _FixedP = 0;
}

Fixed::~Fixed()
{
	// std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const int FixedP)
{
	// std::cout << "Int constructor called" << std::endl;
    _FixedP = FixedP << _nonFixed;
}

Fixed::Fixed(const float FixedP)
{
	// std::cout << "Float constructor called" << std::endl;
	_FixedP = roundf(FixedP * (1 << _nonFixed));
}

Fixed::Fixed(const Fixed &a)
{
	// std::cout << "Copy constructor called" << std::endl;
	*this = a;
}

// методы

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

Fixed &Fixed::min(Fixed &p1, Fixed &p2)
{
	if (p1 > p2)
		return (p2);
	return(p1);
}

Fixed &Fixed::max(Fixed &p1, Fixed &p2)
{
	if (p1 > p2)
		return (p1);
	return(p2);
}

Fixed const &Fixed::min(Fixed const &p1, Fixed const &p2)
{
	if (p1.toFloat() < p2.toFloat())
		return (p1);
	return(p2);
}

Fixed const &Fixed::max(Fixed const &p1, Fixed const &p2)
{
	if (p1.toFloat() > p2.toFloat())
		return (p1);
	return(p2);
}

// операторы

Fixed & Fixed::operator= (const Fixed &a)
{
	// std::cout << "Assignation operator called" << std::endl;
	_FixedP = a.getRawBits();
	return (*this);
}

Fixed &Fixed::operator++ (void)
{
	this->_FixedP += 1;
	return(*this);
}

Fixed Fixed::operator++ (int obj)
{
	Fixed a = *this;
	(void)obj;
	this->_FixedP++;
	return (a);
}

Fixed &Fixed::operator-- (void)
{
	this->_FixedP -= 1;
	return(*this);
}

Fixed Fixed::operator-- (int obj)
{
	Fixed a = *this;
	(void)obj;
	this->_FixedP++;
	return (a);
}

Fixed Fixed::operator+ (const Fixed &a)
{
	return (this->toFloat() + a.toFloat());
}

Fixed Fixed::operator- (const Fixed &a)
{
	return (this->toFloat() - a.toFloat());
}

Fixed Fixed::operator* (const Fixed &a)
{
	return (this->toFloat() * a.toFloat());
}

Fixed Fixed::operator/ (const Fixed &a)
{
	return (this->toFloat() / a.toFloat());
}

bool Fixed::operator< (const Fixed &a)
{
	if (this->toFloat() < a.toFloat())
		return (true);
	else
		return(false);
}

bool Fixed::operator> (const Fixed &a)
{
	if (this->toFloat() > a.toFloat())
		return (true);
	else
		return(false);
}

bool Fixed::operator== (const Fixed &a)
{
	if (this->toFloat() == a.toFloat())
		return (true);
	else
		return(false);
}

bool Fixed::operator!= (const Fixed &a)
{
	if (this->toFloat() != a.toFloat())
		return (true);
	else
		return(false);
}

bool Fixed::operator<= (const Fixed &a)
{
	if (this->toFloat() <= a.toFloat())
		return (true);
	else
		return(false);
}

bool Fixed::operator>= (const Fixed &a)
{
	if (this->toFloat() >= a.toFloat())
		return (true);
	else
		return(false);
}

std::ostream & operator << (std::ostream & o, Fixed const & rhs)
{
	o << rhs.toFloat();
	return o;
}