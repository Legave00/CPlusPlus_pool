#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Constructor of Dog called" << std::endl;
    _type = "Dog";
    _Brain = new Brain();
}

Dog::~Dog()
{
    std::cout << "Destructor of Dog called" << std::endl;
    delete (_Brain);
}

Dog::Dog(Dog &obj)
{
    std::cout << "Copy constructor of Dog called" << std::endl;
    _type = obj.getType();
    _Brain = new Brain();
    *_Brain = *obj._Brain;
}

void    Dog::getThoughts()
{
    for (int i = 0; i < 100; i++)
    {
        std::cout << _Brain->getThought(i) << std::endl;
    }
    std::cout << std::endl;
}

Dog &Dog::operator = (Dog &object)
{
	std::cout << "Assignation operator of Dog called" << std::endl;
	_type = object.getType();
    *_Brain = *object._Brain;
	return (*this);
}

void    Dog::makeSound() const
{
    std::cout << "Uf Uf" << std::endl;
}