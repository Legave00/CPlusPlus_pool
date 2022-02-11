#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include "ClapTrap.hpp"

class ClapTrap;

class ScavTrap: public ClapTrap
{   
    protected:

    ScavTrap();

    public:

    ~ScavTrap();
    ScavTrap(const std::string &name);
    ScavTrap(ScavTrap &obj);

    void	attack(std::string const &target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
    
    void    guardGate();

	ScavTrap& operator=(ScavTrap &object);
};

#endif