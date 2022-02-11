#include "Form.hpp"

Form::Form()
{

}

Form::~Form()
{

}

Form::Form(std::string name_of_form, int grade_to_sign, int grade_to_exec)
{
    _name_of_form = name_of_form;
	if (grade_to_exec > 150 || grade_to_sign > 150)
        throw GradeTooLowException();
	if (grade_to_exec < 1 || grade_to_sign < 1)
		throw GradeTooHighException();
    _grade_to_sign = grade_to_sign;
    _grade_to_exec = grade_to_exec;
    _sign = false;
}

Form::Form(Form &obj)
{
	_name_of_form = obj.getName();
	_grade_to_sign = obj.getGradeSign();
	_grade_to_exec = obj.getGradeExec();
	_sign = false;
}

Form	&Form::operator=(Form &obj)
{
	_name_of_form = obj.getName();
	_grade_to_sign = obj.getGradeSign();
	_grade_to_exec = obj.getGradeExec();
	_sign = false;
	return(*this);
}

void		Form::beSigned(Bureaucrat &obj)
{
	if (obj.getGrade() <= _grade_to_sign)
		_sign = true;
	else
		throw GradeTooLowException();
}

const char *Form::GradeTooHighException::what() const throw()
{
	return ("Grade is too High");
}

const char *Form::GradeTooLowException::what() const throw()
{
	return ("Grade is too Low");
}

bool 		Form::getSign()
{
	return(_sign);
}

std::string Form::getName()
{
    return(_name_of_form);
}

int			Form::getGradeSign()
{
	return(_grade_to_sign);
}

int			Form::getGradeExec()
{
	return(_grade_to_exec);
}

std::ostream & operator << (std::ostream & o, Form & rhs)
{
	o << "name of form: " << rhs.getName() << std::endl;
	o << "Grade to sign of form: " << rhs.getGradeSign() << std::endl;
	o << "grade to exec of form: " << rhs.getGradeExec() << std::endl;
	o << "sign of form: " << std::boolalpha << rhs.getSign();
	return o;
}


