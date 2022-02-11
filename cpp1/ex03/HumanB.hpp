#include <iostream>
#include <iomanip>
#include "Weapon.hpp"

class HumanB
{
	private:

	std::string	_name;
	Weapon	   *_wepapon_type;

	public:
	
	HumanB(std::string name);
    HumanB(std::string name, Weapon &type);
    ~HumanB();

	void	setWeapon(Weapon &type);
	void	setWeapon(Weapon *type);
    void    attack();
};