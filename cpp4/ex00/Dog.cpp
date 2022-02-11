#include "Dog.hpp"

Dog::Dog()
{
    _type = "Dog";
    std::cout << "Constructor of Dog called" << std::endl;
}

Dog::~Dog()
{
    std::cout << "Destructor of Dog called" << std::endl;
}

Dog::Dog(Dog &obj)
{
    std::cout << "Copy constructor of Dog called" << std::endl;
    _type = obj.getType();
}

void    Dog::makeSound() const
{
    std::cout << "Uf Uf" << std::endl;
}