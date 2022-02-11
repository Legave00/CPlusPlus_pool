#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <iomanip>

class Weapon
{
private:
	
	std::string _type;
	Weapon();


public:
	
	Weapon(std::string const &type);
	~Weapon();

	const std::string &getType(void);
	void		setType(std::string type);
};

#endif