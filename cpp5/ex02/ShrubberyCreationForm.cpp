#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("ShrubberyCreation", 145, 137)
{
	_target = "def";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreation", 145, 137)
{
	_target = target;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{

}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &obj) : Form(obj)
{
	_target = obj._target;
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(ShrubberyCreationForm &obj)
{
	_name_of_form = obj._name_of_form;
	_grade_to_sign = obj._grade_to_sign;
	_grade_to_exec = obj._grade_to_exec;
	_sign = obj._sign;
	_target = obj._target;
	return(*this);
}

const char* ShrubberyCreationForm::NotOpenException::what() const throw()
{
	return("wrong file");
}

void	ShrubberyCreationForm::execute(Bureaucrat const &obj) const
{
	if (obj.getGrade() > _grade_to_exec)
		throw GradeTooLowException();
	if (_sign == false)
		throw Form::NotSignedException();
	this->action();
}

void	ShrubberyCreationForm::action() const
{
	std::string path_out = _target + "_shrubbery";
	std::ofstream output(path_out);
	if (!output)
	{
		output.close();
		throw NotOpenException();
	}
	output << "                                            .                " << std::endl;
	output << "                                          .         ;        " << std::endl;
	output << "             .              .              ;%     ;;         " << std::endl;
	output << "               ,           ,                :;%  %;          " << std::endl;
	output << "                :         ;                   :;%;'     .,   " << std::endl;
	output << "       ,.        %;     %;            ;        %;'    ,;     " << std::endl;
	output << "         ;       ;%;  %%;        ,     %;    ;%;    ,%'      " << std::endl;
	output << "          %;       %;%;      ,  ;       %;  ;%;   ,%;'       " << std::endl;
	output << "           ;%;      %;        ;%;        % ;%;  ,%;'         " << std::endl;
	output << "            `%;.     ;%;     %;'         `;%%;.%;'           " << std::endl;
	output << "             `:;%.    ;%%. %@;        %; ;@%;%'              " << std::endl;
	output << "                `:%;.   :;bd%;          %;@%;'               " << std::endl;
	output << "                  `@%:.  :;%.         ;@@%;'                 " << std::endl;
	output << "                    `@%.  `;@%.      ;@@%;                   " << std::endl;
	output << "                      `@%%. `@%%    ;@@%;                    " << std::endl;
	output << "                        ;@%. :@%%  %@@%;                     " << std::endl;
	output << "                          %@bd%%%bd%%:;                      " << std::endl;
	output << "                            #@%%%%%:;;                       " << std::endl;
	output << "                            %@@%%%::;                        " << std::endl;
	output << "                            %@@@%(o);  . '                   " << std::endl;
	output << "                            %@@@o%;:(.,'                     " << std::endl;
	output << "                        `.. %@@@o%::;                        " << std::endl;
	output << "                           `)@@@o%::;                        " << std::endl;
	output << "                            %@@(o)::;                        " << std::endl;
	output << "                           .%@@@@%::;                        " << std::endl;
	output << "                           ;%@@@@%::;.                       " << std::endl;
	output << "                          ;%@@@@%%:;;;.                      " << std::endl;
	output << "                      ...;%@@@@@%%:;;;;,..                   " << std::endl;

	std::cout << "output is created in " << path_out << std::endl;
	output.close();
}
