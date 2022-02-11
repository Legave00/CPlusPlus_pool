#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("RobotomyRequest", 72, 45)
{
	_target = "def";
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequest", 72, 45)
{
	_target = target;
}

RobotomyRequestForm::~RobotomyRequestForm()
{

}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm &obj) : Form(obj)
{
	_target = obj._target;
}

RobotomyRequestForm	&RobotomyRequestForm::operator=(RobotomyRequestForm &obj)
{
	_name_of_form = obj._name_of_form;
	_grade_to_sign = obj._grade_to_sign;
	_grade_to_exec = obj._grade_to_exec;
	_sign = obj._sign;
	_target = obj._target;
	return(*this);
}

void	RobotomyRequestForm::execute(Bureaucrat const &obj) const
{
	if (obj.getGrade() > _grade_to_exec)
		throw GradeTooLowException();
	if (_sign == false)
		throw Form::NotSignedException();
	this->action();
}

void	RobotomyRequestForm::action() const
{
	std::cout << "DRRRRR DRRRR" << std::endl;
	std::cout << "DRRRRR DRRRR" << std::endl;
	std::cout << "DRRRRR DRRRR" << std::endl;

	std::cout << _target << " has been robotomized successfully 50\% of the time" << std::endl;
}
