#include "HumanB.hpp"

HumanB::HumanB(std::string name, Weapon &type )
{
    _name = name;
    _wepapon_type = &type;
}

HumanB::HumanB(std::string name)
{
    _name = name;
}

HumanB::~HumanB()
{

}

void	HumanB::attack()
{
    if (_wepapon_type)
	    std::cout << _name << " attacks with his " << _wepapon_type->getType() << std::endl;
    else
        std::cout << _name << " attacks with his dungerous arms" << std::endl;
}

void    HumanB::setWeapon(Weapon &type)
{
    _wepapon_type = &type;
}

void    HumanB::setWeapon(Weapon *type)
{
    _wepapon_type = type;
}