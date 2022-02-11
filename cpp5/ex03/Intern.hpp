#ifndef INTERN_HPP
#define INTERN_HPP

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class	Intern
{
	public:
		Intern();
		~Intern();
		Intern(Intern &obj);

		Intern &operator=(Intern &obj);

		Form	*makePresidentForm(std::string target);
		Form	*makeShrubberyForm(std::string target);
		Form	*makeRobotForm(std::string target);
		Form	*makeForm(std::string name, std::string target);
		Form	*error(std::string target);

		class	NonValidNameException: public std::exception
		{
			const char *what() const throw();	
		};
};

typedef Form *(Intern:: *Method)(std::string target);

#endif