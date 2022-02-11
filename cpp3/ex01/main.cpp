#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
 
int main()
{
    ScavTrap    tmp("sam");

    std::cout << tmp.getEnergy() << std::endl;
    std::cout << tmp.getHitP() << std::endl;
    std::cout << tmp.getAttackDmg() << std::endl;
    std::cout << tmp.getName() << std::endl;

    tmp.attack("Rube");
    tmp.guardGate();
}