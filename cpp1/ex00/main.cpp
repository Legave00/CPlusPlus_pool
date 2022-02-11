#include "Zombie.hpp"

int main()
{
    Zombie  *Sam;

    Sam = new Zombie();
    Sam->announce();
    delete Sam;
    Sam = new Zombie("Samuel");
    Sam->announce();
    delete Sam;
    Sam = newZombie("Samuel");
    Sam->announce();
    randomChump("Dian");
    delete Sam;

    return (0);
}