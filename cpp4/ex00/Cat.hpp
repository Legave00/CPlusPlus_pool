#ifndef CAT_HPP
#define CAT_HPP
#include "Animal.hpp"

class Cat: public Animal
{
    protected:

    public:

    Cat();
    Cat(Cat &obj);
    ~Cat();

    void    makeSound() const;

    Cat& operator=(Cat &object);
};

#endif