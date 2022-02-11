#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat  b("Sam", 0);
    }
    catch(const std::exception &a)
    {
        std::cout << "" << a.what() << std::endl;
    }

    try
    {
        Bureaucrat  b("Dean", 151);
    }
    catch(const std::exception &a)
    {
        std::cout << "" << a.what() << std::endl;
    }

    try
    {
        Bureaucrat  b("Tom", 148);

        b.decrGrade();
        b.decrGrade();
        b.decrGrade();
    }
    catch(const std::exception &a)
    {
        std::cout << "" << a.what() << std::endl;
    }
    return 0;
}