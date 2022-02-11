#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <iomanip>

class Bureaucrat
{
    private:

    std::string	_name;
	int			_grade;
	Bureaucrat();

	public:

	Bureaucrat(const std::string name, int grade);
	Bureaucrat(Bureaucrat &obj);
	~Bureaucrat();

	std::string		getName();
	int				getGrade();
	void			incrGrade();
	void			decrGrade();

	class GradeTooHighException: public std::exception
	{
		const char *what() const throw();
	};
	class GradeTooLowException: public std::exception
	{
		const char *what() const throw();
	};

	Bureaucrat &operator=(Bureaucrat &obj);
};

std::ostream & operator << (std::ostream & o, Bureaucrat & rhs);

#endif