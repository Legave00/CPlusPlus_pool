#ifndef DOG_HPP
#define DOG_HPP
#include "Animal.hpp"

class Dog: public Animal
{
    protected:

    Brain *_Brain;

    public:

    Dog();
    Dog(Dog &obj);
    ~Dog();

    void    makeSound() const;
    void    getThoughts();

    Dog& operator=(Dog &object);
};

#endif