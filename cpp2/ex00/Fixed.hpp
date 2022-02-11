#include <iomanip>
#include <iostream>

class Fixed
{
    private:

    int					_FixedP;
    static const int	_nonFixed;
    
    public:

    Fixed();
    ~Fixed();
	Fixed(const Fixed &object);

    int     getRawBits(void) const;
    void    setRawBits(int const raw);

	Fixed& operator=(const Fixed &object);
};