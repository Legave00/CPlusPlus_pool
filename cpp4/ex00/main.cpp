#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "wrongAnimal.hpp"
#include "wrongCat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    const wrongAnimal* x = new wrongCat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    std::cout << x->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    x->makeSound();
    meta->makeSound();

    delete meta;
    delete i;
    delete j;
    delete x;
}