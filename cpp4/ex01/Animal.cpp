#include "Animal.hpp"

Animal::Animal()
{
    _type = "Animal";
    std::cout << "Def constructor of " << _type << " called" << std::endl;
}

Animal::Animal(std::string type)
{
    std::cout << "Constructor of Animal called" << std::endl;
    _type = type;
}

Animal::~Animal()
{
    std::cout << "Destructor of Animal called" << std::endl;
}

Animal::Animal(Animal &obj)
{
    std::cout << "Copy constructor of Animal called" << std::endl;
    _type = obj.getType();
}

void    Animal::setType(std::string type)
{
    _type = type;
}

std::string Animal::getType() const
{
    return(_type);
}

Animal &Animal::operator = (Animal const &object)
{
	std::cout << "Assignation operator of Animal called" << std::endl;
	_type = object.getType();
	return (*this);
}

void   Animal::makeSound() const
{
    std::cout << "Animal" << std::endl;
}
