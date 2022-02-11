#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Bureaucrat.hpp"
#include "Form.hpp"

class PresidentialPardonForm : public Form
{
	private :

	std::string	_target;

	public:

	PresidentialPardonForm();
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(PresidentialPardonForm &obj);
	~PresidentialPardonForm();

	PresidentialPardonForm &operator=(PresidentialPardonForm &obj);

	void	execute(Bureaucrat const &obj) const;
	void	action() const;
};

#endif