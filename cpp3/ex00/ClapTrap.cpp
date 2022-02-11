#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string const &name)
{
    std::cout << "Constructor of " << name << " called"  << std::endl;
    _name = name;
    _Hitpoints = 10;
    _Energy_points = 10;
    _Attack_damage = 0;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor of " << _name << " called"  << std::endl;
}

std::string ClapTrap::getName()
{
    return(_name);
}

int     ClapTrap::getHitP()
{
    return(_Hitpoints);
}

int     ClapTrap::getEnergy()
{
    return(_Energy_points);
}

int     ClapTrap::getAttackDmg()
{
    return(_Attack_damage);
}

ClapTrap::ClapTrap(ClapTrap &object)
{
	std::cout << "Copy constructor called by " << object.getName() << std::endl;
	_name = object.getName();
	_Hitpoints = object.getHitP();
	_Energy_points = object.getEnergy();
	_Attack_damage = object.getAttackDmg();
}

ClapTrap &ClapTrap::operator = (ClapTrap &object)
{
	std::cout << "Assignation operator called by " << object.getName() << std::endl;
	_name = object.getName();
	_Hitpoints = object.getHitP();
	_Energy_points = object.getEnergy();
	_Attack_damage = object.getAttackDmg();
	return (*this);
}

void    ClapTrap::attack(std::string const &target)
{
    std::cout << "Claptrap " << _name << " attack " << target << ",  causing "
				<< _Attack_damage << " points of damage!" << std::endl;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "Claptrap " << _name << " taked " << amount << " point of damage" << std::endl;
        _Hitpoints -= amount;
    if (_Hitpoints < 0)
        _Hitpoints = 0;
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    std::cout << "Claptrap " << _name << " repaired " << amount << " point of Health" << std::endl;
    _Hitpoints += amount;
    if (_Hitpoints > 10)
        _Hitpoints = 10;
}
