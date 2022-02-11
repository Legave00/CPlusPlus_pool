#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Def constructor of Brain called" << std::endl;
    for (int i = 0; i < 100; i++)
    {
        int rnd = 0;
        rnd = std::rand() % (126 + 1 - 32) + 32;
        _ideas[i] = (char)(rnd);
    }
}

Brain::Brain(Brain &obj)
{
    std::cout << "Copy constructor of Brain called" << std::endl;
    for (int i = 0; i < 100; i++)
    {
        _ideas[i] = obj.getThought(i);
    }
}

std::string Brain::getThought(int i)
{
    return(_ideas[i]);
}

Brain::~Brain()
{
    std::cout << "destructor of Brain called" << std::endl;
}

Brain &Brain::operator = (Brain &object)
{
	std::cout << "Assignation operator of Brain called" << std::endl;
    (void)object;
	for (int i = 0; i < 100; i++)
    {
        this->_ideas[i] = object.getThought(i);
    }
	return (*this);
}
