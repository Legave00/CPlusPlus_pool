#include "wrongCat.hpp"

wrongCat::wrongCat()
{
    std::cout << "Constructor of wrongCat called" << std::endl;
    _type = "wrongCat";
}

wrongCat::~wrongCat()
{
    std::cout << "Destructor of wrongCat called" << std::endl;
}

wrongCat::wrongCat(wrongCat &obj)
{
    std::cout << "Copy constructor of wrongCat called" << std::endl;
    _type = obj.getType();
}

void    wrongCat::makeSound() const
{
    std::cout << "Meow Meow" << std::endl;
}