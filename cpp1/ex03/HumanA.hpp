#include <iostream>
#include <iomanip>
#include "Weapon.hpp"

class HumanA
{
	private:

	std::string	_name;
	Weapon	   &_wepapon_type;

    HumanA();

	public:
	
    HumanA(std::string name, Weapon &type);
    ~HumanA();

    void    attack();
};

