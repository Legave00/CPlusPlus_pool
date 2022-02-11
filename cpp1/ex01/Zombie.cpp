#include "Zombie.hpp"

Zombie::Zombie()
{
	_name = "human";
}	

Zombie::Zombie(std::string name)
{
	_name = name;
}

Zombie::~Zombie()
{
	std::cout << _name << "is dead" << std::endl;
}

void	Zombie::setName(std::string name)
{
	_name = name;
}

void    Zombie::announce(void)
{
	std::cout << _name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

void    randomChump( std::string name )
{
	Zombie	zom(name);

	zom.announce();
}

Zombie* newZombie( std::string name )
{
	Zombie	*newZ;

	newZ = new Zombie(name);
	return (newZ);
}
