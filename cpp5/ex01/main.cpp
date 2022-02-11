#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main()
{
	std::cout << "--------------" << std::endl;
	try
	{
		Bureaucrat	Sam("Sam", 145);
		Form		truble("problem", 140, 145);
		Sam.signForm(truble);
		std::cout << truble << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "--------------" << std::endl;
	std::cout << "--------------" << std::endl;
	std::cout << "--------------" << std::endl;

	try
	{
		Bureaucrat	Sam("Sam", 10);
		Form		truble("problem", -1, 0);
		Sam.signForm(truble);
		std::cout << truble << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "--------------" << std::endl;
	try
	{
		Bureaucrat	Sam("Sam", 10);
		Form		truble("problem", 170, 170);
		Sam.signForm(truble);
		std::cout << truble << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "--------------" << std::endl;
	try
	{
		Bureaucrat	Sam("Sam", 10);
		Form		truble("problem", 70, 7);
		Sam.signForm(truble);
		std::cout << truble << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "--------------" << std::endl;
	try
	{
		Bureaucrat	Sam("Sam", 10);
		Form		truble("problem", 70, 11);
		Sam.signForm(truble);
		std::cout << truble << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}
