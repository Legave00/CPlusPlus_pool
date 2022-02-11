#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
    _name = "def";
    _grade = 150;
}

Bureaucrat::Bureaucrat(const std::string name, int grade)
{
    _name = name;
    if (grade > 150)
        throw GradeTooLowException();
	if (grade < 1)
		throw GradeTooHighException();
    _grade = grade;
}

Bureaucrat::~Bureaucrat()
{

}

Bureaucrat::Bureaucrat(Bureaucrat &obj)
{
    _name = obj.getName();
    _grade = obj.getGrade();
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat &obj)
{
    _name = obj.getName();
    _grade = obj.getGrade();
    return(*this);
}

int Bureaucrat::getGrade()
{
    return(_grade);
}

std::string Bureaucrat::getName()
{
    return(_name);
}

void    Bureaucrat::incrGrade()
{
    if (_grade == 1)
		throw GradeTooHighException();
	_grade--;
}

void	Bureaucrat::decrGrade()
{
	if (_grade == 150)
		throw GradeTooLowException();
	_grade++;
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade is too High");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade is too Low");
}

std::ostream & operator << (std::ostream & o, Bureaucrat & rhs)
{
	o << rhs.getName();
	o << rhs.getGrade();
	return o;
}
