#include "Brain.hpp"
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"


int main()
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    Dog             *x = new Dog();
    Cat             *v = new Cat();
    Dog             b(*x);

    Cat             z;   
    
    z = *v;
    
    std::cout << "----------------------------" << std::endl;
    v->getThoughts();
    delete v;
    z.getThoughts();
    std::cout << "----------------------------" << std::endl;
    b.getThoughts();
    std::cout << "----------------------------" << std::endl;
    delete x;
    std::cout << "----------------------------" << std::endl;
    b.getThoughts();
    std::cout << "----------------------------" << std::endl;
    delete j;
    delete i;

    // while (1)
    //     ;
}