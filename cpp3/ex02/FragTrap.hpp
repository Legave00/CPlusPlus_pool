#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include "ClapTrap.hpp"

class ClapTrap;

class FragTrap: public ClapTrap
{   
    protected:

    FragTrap();

    public:

    ~FragTrap();
    FragTrap(const std::string &name);
    FragTrap(FragTrap &obj);

    void	attack(std::string const &target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
    
    void    highFivesGuys();

	FragTrap& operator=(FragTrap &object);
};

#endif