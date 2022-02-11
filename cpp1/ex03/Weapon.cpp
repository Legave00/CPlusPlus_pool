#include "Weapon.hpp"

Weapon::Weapon()
{
}

Weapon::Weapon(std::string const &type)
{
    _type = type;
}

Weapon::~Weapon()
{
	
}

const std::string &Weapon::getType(void)
{
    return (_type);
}

void    Weapon::setType(std::string type)
{
     _type = type;
}

