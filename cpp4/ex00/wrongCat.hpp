#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP
#include "wrongAnimal.hpp"

class wrongCat: public wrongAnimal
{
    protected:

    public:

    wrongCat();
    wrongCat(wrongCat &obj);
    ~wrongCat();

    void    makeSound() const;

    wrongCat& operator=(wrongCat &object);
};

#endif