#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iomanip>
#include <iostream>
#include "Brain.hpp"

class Animal
{
    protected:

    std::string     _type;

    public:

    Animal();
    Animal(std::string type);
    Animal(Animal &obj);
    virtual ~Animal();

    void virtual   makeSound() const;
    std::string getType() const;
    void    setType(std::string type);

    Animal& operator=(Animal const &object);
};

#endif