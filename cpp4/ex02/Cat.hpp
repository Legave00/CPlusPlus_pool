#ifndef CAT_HPP
#define CAT_HPP
#include "Animal.hpp"

class Cat: public Animal
{
    protected:

    Brain *_Brain;

    public:

    Cat();
    Cat(Cat &obj);
    ~Cat();

    void    makeSound() const;
    void    getThoughts();

    Cat& operator=(Cat &object);
};

#endif