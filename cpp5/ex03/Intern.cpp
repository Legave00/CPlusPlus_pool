#include "Intern.hpp"

Intern::Intern()
{

}

Intern::~Intern()
{

}

Intern::Intern(Intern &obj)
{
	(void)obj;
}

Intern &Intern::operator=(Intern &obj)
{
	(void)obj;
	return (*this);
}


Form	*Intern::makePresidentForm(std::string target)
{
	return new PresidentialPardonForm(target);
}

Form	*Intern::makeRobotForm(std::string target)
{
	return new RobotomyRequestForm(target);
}

Form	*Intern::makeShrubberyForm(std::string target)
{
	return new ShrubberyCreationForm(target);
}

Form	*Intern::error(std::string target)
{
	(void)target;
	throw	NonValidNameException();
	return (NULL);
}

Form	*Intern::makeForm(std::string name, std::string target)
{
	std::string	array_str[3];
	array_str[0] = "presidental request";
	array_str[1] = "robotomy request";
	array_str[2] = "shrubbery request";
	
	Method	array_method[4];
	array_method[0] = &Intern::makePresidentForm;
	array_method[1] = &Intern::makeRobotForm;
	array_method[2] = &Intern::makeShrubberyForm;
	array_method[3] = &Intern::error;

	unsigned long i = 0;
	for (; i < sizeof(array_str)/sizeof(array_str[0]) && name.compare(array_str[i]) != 0; i++)
	{
		
	}
	return (this->*array_method[i])(target);
}

const char	*Intern::NonValidNameException::what() const throw()
{
	return ("unknowen form");
}

