#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int	main()
{
	try
	{
		Bureaucrat	cc("Vep", 10);
		// Intern bb;
		// Form	*ff = bb.makeForm("wrong", "target");
		ShrubberyCreationForm	a;
		ShrubberyCreationForm	b;

		std::cout << a << std::endl;
		std::cout << b << std::endl;
		a.beSigned(cc);
		std::cout << a << std::endl;
		a = b;
		std::cout << a << std::endl;
		std::cout << b << std::endl;
		// cc.signForm(*ff);
		// cc.executeForm(*ff);
		// delete ff; 
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "--------------------" << std::endl;
	try
	{
		Bureaucrat	cc("Vep", 10);
		Intern	bb;
		Form	*ff = bb.makeForm("robotomy request", "Bender");
		cc.signForm(*ff);
		cc.executeForm(*ff);
		delete ff;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "--------------------" << std::endl;
	try
	{
		Bureaucrat	cc("Vep", 2);
		Intern	bb;
		Form	*ff = bb.makeForm("presidental request", "President");
		cc.signForm(*ff);
		cc.executeForm(*ff);
		delete ff;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "--------------------" << std::endl;
	try
	{
		Bureaucrat	cc("Vep", 10);
		Intern	bb;
		Form	*ff = bb.makeForm("shrubbery request", "Bush");
		cc.signForm(*ff);
		cc.executeForm(*ff);
		delete ff;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}
