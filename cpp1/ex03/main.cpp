#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

int main()
{
	{
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	{
		Weapon club = Weapon(NULL);
		HumanB jim("Jim");
		jim.setWeapon(NULL);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}
}