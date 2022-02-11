#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
 
int main()
{
    FragTrap    tmp("sam");

    std::cout << tmp.getEnergy() << std::endl;
    std::cout << tmp.getHitP() << std::endl;
    std::cout << tmp.getAttackDmg() << std::endl;
    std::cout << tmp.getName() << std::endl;

    tmp.attack("Rube");
    // tmp.guardGate();
    tmp.highFivesGuys();
}