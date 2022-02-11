#ifndef DOG_HPP
#define DOG_HPP
#include "Animal.hpp"

class Dog: public Animal
{
    protected:

    public:

    Dog();
    Dog(Dog &obj);
    ~Dog();

    void    makeSound() const;

    Dog& operator=(Dog &object);
};

#endif