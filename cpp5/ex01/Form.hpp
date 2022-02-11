#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <iomanip>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    private:

    std::string _name_of_form;
    int         _grade_to_sign;
    int         _grade_to_exec;
    bool        _sign;
    Form();

    public:

    Form(std::string name_of_form, int grade_to_sign, int grade_to_exec);
    Form(Form &obj);
    ~Form();

    void    	beSigned(Bureaucrat &obj);
	std::string	getName();
	int			getGradeSign();
	int			getGradeExec();
	bool		getSign();
	
    class GradeTooHighException: public std::exception
	{
		const char *what() const throw();
	};
	class GradeTooLowException: public std::exception
	{
		const char *what() const throw();
	};

	Form &operator=(Form &obj);
};

std::ostream & operator << (std::ostream & o, Form & rhs);

#endif