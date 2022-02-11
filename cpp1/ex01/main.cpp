#include "Zombie.hpp"

int	main(void)
{
	Zombie *new_zombie;
	
	new_zombie = zombieHorde(5, "Sam");
	for (int i = 0; i < 5; i++)
	{
		std::cout << "num of zombie: " << i + 1 << " ";
		new_zombie[i].announce();
	}
	delete[] new_zombie;
}