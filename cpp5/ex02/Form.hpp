#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <iomanip>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	protected:

	std::string _name_of_form;
	int		 	_grade_to_sign;
	int		 	_grade_to_exec;
	bool		_sign;

	public:

	Form();
	Form(std::string name_of_form, int grade_to_sign, int grade_to_exec);
	Form(Form &obj);
	virtual ~Form();

	void		beSigned(Bureaucrat &obj);
	std::string	getName() const;
	int			getGradeSign();
	int			getGradeExec();
	bool		getSign();
	
	virtual void	execute(Bureaucrat const &exec_obj) const = 0;
	
	class GradeTooHighException: public std::exception
	{
		const char *what() const throw();
	};
	class GradeTooLowException: public std::exception
	{
		const char *what() const throw();
	};
	class NotSignedException: public std::exception
	{
		const char *what() const throw();
	};
	Form &operator=(Form &obj);
};

std::ostream & operator << (std::ostream & o, Form & rhs);

#endif