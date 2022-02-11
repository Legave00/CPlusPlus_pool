#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Bureaucrat.hpp"
#include "Form.hpp"


class ShrubberyCreationForm : public Form
{
	private:

	std::string	_target;

	public:

	ShrubberyCreationForm();
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(ShrubberyCreationForm &obj);
	~ShrubberyCreationForm();

	ShrubberyCreationForm &operator=(ShrubberyCreationForm &obj);

	void	execute(Bureaucrat const &obj) const;
	void	action() const;

	class NotOpenException: public std::exception
	{
		const char *what() const throw();
	};
};

#endif