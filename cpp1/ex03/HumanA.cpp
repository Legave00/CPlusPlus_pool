#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &type ) : _name(name), _wepapon_type(type) 
{

}

HumanA::~HumanA()
{

}

void	HumanA::attack()
{
	std::cout << _name << " attacks with his " << _wepapon_type.getType() << std::endl;
}
