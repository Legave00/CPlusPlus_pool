#ifndef BRAIN_HPP
#define BRAIN_HPP
#include "Animal.hpp"

class Brain
{
    private:

    std::string _ideas[100];

    public:

    Brain();
    Brain(Brain &obj);
    ~Brain();

    std::string    getThought(int i);

    Brain &operator=(Brain &object);
};

#endif