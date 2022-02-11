#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Bureaucrat.hpp"
#include "Form.hpp"

class RobotomyRequestForm : public Form
{
	private :

	std::string	_target;

	public:

	RobotomyRequestForm();
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(RobotomyRequestForm &obj);
	~RobotomyRequestForm();

	RobotomyRequestForm &operator=(RobotomyRequestForm &obj);

	void	execute(Bureaucrat const &obj) const;
	void	action() const;
};

#endif