#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP
#include <iomanip>
#include <iostream>

class wrongAnimal
{
    protected:

    std::string     _type;

    public:

    wrongAnimal();
    wrongAnimal(std::string type);
    wrongAnimal(wrongAnimal &obj);
    ~wrongAnimal();

    void   makeSound() const;
    std::string getType() const;
    void    setType(std::string type);

    wrongAnimal& operator=(wrongAnimal &object);
};

#endif