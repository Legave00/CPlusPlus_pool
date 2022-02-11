#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Constructor of Cat called" << std::endl;
    _type = "Cat";
}

Cat::~Cat()
{
    std::cout << "Destructor of Cat called" << std::endl;
}

Cat::Cat(Cat &obj)
{
    std::cout << "Copy constructor of Cat called" << std::endl;
    _type = obj.getType();
}

void    Cat::makeSound() const
{
    std::cout << "Meow Meow" << std::endl;
}