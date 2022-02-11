#include <iostream>
#include <iomanip>

class ClapTrap
{
    private:
	
	std::string		_name;
	int				_Hitpoints;
	int				_Energy_points;
	int				_Attack_damage;

	ClapTrap();

	public:

	ClapTrap(std::string const &name);
	ClapTrap(ClapTrap &obj);
	~ClapTrap();

	void	attack(std::string const &target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	std::string		getName(void);
	int		getHitP(void);
	int		getEnergy(void);
	int		getAttackDmg(void);

	ClapTrap& operator=(ClapTrap &object);
};