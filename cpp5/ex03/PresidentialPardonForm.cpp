#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("PresidentialPardon", 25, 5)
{
	_target = "def";
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardon", 25, 5)
{
	_target = target;
}

PresidentialPardonForm::~PresidentialPardonForm()
{

}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm &obj) : Form(obj)
{
	_target = obj._target;
}

PresidentialPardonForm	&PresidentialPardonForm::operator=(PresidentialPardonForm &obj)
{
	_name_of_form = obj._name_of_form;
	_grade_to_sign = obj._grade_to_sign;
	_grade_to_exec = obj._grade_to_exec;
	_sign = obj._sign;
	_target = obj._target;
	return(*this);
}

void	PresidentialPardonForm::execute(Bureaucrat const &obj) const
{
	if (obj.getGrade() > _grade_to_exec)
		throw GradeTooLowException();
	if (_sign == false)
		throw Form::NotSignedException();
	this->action();
}

void	PresidentialPardonForm::action() const
{
	std::cout << _target << " has been pardoned by Zafod Beeblebrox." << std::endl;
}
