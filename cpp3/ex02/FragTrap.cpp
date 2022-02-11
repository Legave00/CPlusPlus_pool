#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "Default Constructor of FragTrap called"  << std::endl;
    _name = "Def FragTrap";
    _Hitpoints = 100;
    _Energy_points = 100;
    _Attack_damage = 30;
}

FragTrap::FragTrap(const std::string &name)
{
    std::cout << "Constructor of FragTrap called"  << std::endl;
    _name = name;
    _Hitpoints = 100;
    _Energy_points = 100;
    _Attack_damage = 30;
}

FragTrap::~FragTrap()
{
    std::cout << "Destructor of FragTrap called"  << std::endl;
}

FragTrap::FragTrap(FragTrap &object)
{
	std::cout << "Copy constructor of FragTrap called by " << object.getName() << std::endl;
	_name = object.getName();
	_Hitpoints = object.getHitP();
	_Energy_points = object.getEnergy();
	_Attack_damage = object.getAttackDmg();
}

void    FragTrap::attack(std::string const &target)
{
    std::cout << "FragTrap " << _name << " attack " << target << ",  causing "
				<< _Attack_damage << " points of damage!" << std::endl;
}

void    FragTrap::takeDamage(unsigned int amount)
{
    std::cout << "FragTrap " << _name << " taked " << amount << " point of damage" << std::endl;
        _Hitpoints -= amount;
    if (_Hitpoints < 0)
        _Hitpoints = 0;
}

void    FragTrap::beRepaired(unsigned int amount)
{
    std::cout << "FragTrap " << _name << " repaired " << amount << " point of Health" << std::endl;
    _Hitpoints += amount;
    if (_Hitpoints > 10)
        _Hitpoints = 10;
}

void    FragTrap::highFivesGuys()
{
    std::cout << "FragTrap " << _name << " made high five" << std::endl;
}
