#include "wrongAnimal.hpp"

wrongAnimal::wrongAnimal()
{
    _type = "wrongAnimal";
    std::cout << "Def constructor of " << _type << " called" << std::endl;
}

wrongAnimal::wrongAnimal(std::string type)
{
    std::cout << "Constructor of wrongAnimal called" << std::endl;
    _type = type;
}

wrongAnimal::~wrongAnimal()
{
    std::cout << "Destructor of wrongAnimal called" << std::endl;
}

wrongAnimal::wrongAnimal(wrongAnimal &obj)
{
    std::cout << "Copy constructor of wrongAnimal called" << std::endl;
    _type = obj.getType();
}

void    wrongAnimal::setType(std::string type)
{
    _type = type;
}

std::string wrongAnimal::getType() const
{
    return(_type);
}

void   wrongAnimal::makeSound() const
{
    std::cout << "wrongAnimalSound" << std::endl;
}
