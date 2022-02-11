#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap clapTrap("Sam");
	ClapTrap clapTrap2 = clapTrap;

	clapTrap.attack("robot");
	clapTrap.takeDamage(5);
	clapTrap.beRepaired(5);
	std::cout << "--------------------------------" << std::endl;
	clapTrap2.attack("robot");
	clapTrap2.takeDamage(5);
	clapTrap2.beRepaired(5);
}
