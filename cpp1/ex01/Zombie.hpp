#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <iomanip>

class Zombie
{
	private:

	std::string _name;

	public:

	Zombie();
    Zombie(std::string);
	~Zombie();

	void	setName(std::string name);
    void    announce(void);
};

Zombie* newZombie( std::string name );
void    randomChump( std::string name );
Zombie* zombieHorde( int N, std::string name );

#endif