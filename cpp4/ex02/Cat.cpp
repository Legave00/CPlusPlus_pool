#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Constructor of Cat called" << std::endl;
    _type = "Cat";
    _Brain = new Brain();
}

Cat::~Cat()
{
    std::cout << "Destructor of Cat called" << std::endl;
    delete (_Brain);
}

Cat::Cat(Cat &obj)
{
    std::cout << "Copy constructor of Cat called" << std::endl;
    _type = obj.getType();
    _Brain = new Brain();
    *_Brain = *obj._Brain;
}

void    Cat::getThoughts()
{
    for (int i = 0; i < 100; i++)
    {
        std::cout << _Brain->getThought(i) << std::endl;
    }
    std::cout << std::endl;
}

Cat &Cat::operator = (Cat &object)
{
	std::cout << "Assignation operator of Cat called" << std::endl;
	_type = object.getType();
    *_Brain = *object._Brain;
	return (*this);
}

void    Cat::makeSound() const
{
    std::cout << "Meow Meow" << std::endl;
}