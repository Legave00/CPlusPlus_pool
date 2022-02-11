#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << "Default Constructor of ScavTrap called"  << std::endl;
    _name = "Def ScavTrap";
    _Hitpoints = 100;
    _Energy_points = 50;
    _Attack_damage = 20;
}

ScavTrap::ScavTrap(const std::string &name)
{
    std::cout << "Constructor of ScavTrap called"  << std::endl;
    _name = name;
    _Hitpoints = 100;
    _Energy_points = 50;
    _Attack_damage = 20;
}

ScavTrap::~ScavTrap()
{
    std::cout << "Destructor of ScavTrap called"  << std::endl;
}

ScavTrap::ScavTrap(ScavTrap &object)
{
	std::cout << "Copy constructor of ScavTrap called by " << object.getName() << std::endl;
	_name = object.getName();
	_Hitpoints = object.getHitP();
	_Energy_points = object.getEnergy();
	_Attack_damage = object.getAttackDmg();
}

void    ScavTrap::attack(std::string const &target)
{
    std::cout << "ScavTrap " << _name << " attack " << target << ",  causing "
				<< _Attack_damage << " points of damage!" << std::endl;
}

void    ScavTrap::takeDamage(unsigned int amount)
{
    std::cout << "ScavTrap " << _name << " taked " << amount << " point of damage" << std::endl;
        _Hitpoints -= amount;
    if (_Hitpoints < 0)
        _Hitpoints = 0;
}

void    ScavTrap::beRepaired(unsigned int amount)
{
    std::cout << "ScavTrap " << _name << " repaired " << amount << " point of Health" << std::endl;
    _Hitpoints += amount;
    if (_Hitpoints > 10)
        _Hitpoints = 10;
}

void    ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << _name << " has enterred in Gate keeper mode." << std::endl;
}
