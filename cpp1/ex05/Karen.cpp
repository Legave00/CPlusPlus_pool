#include "Karen.hpp"

Karen::Karen()
{

}

Karen::~Karen()
{
	
}

void	Karen::debug(void)
{
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. "
		"I just love it!" << std::endl;
}

void 	Karen::info(void)
{
	std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough!"
		"If you did I would not have to ask for it!" << std::endl;
}

void	Karen::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free."
		"I’ve been coming here for years and you just"
		"started working here last month." << std::endl;
}

void	Karen::error(void)
{
	std::cout << "This is unacceptable,"
		"I want to speak to the manager now." << std::endl;
}

void	Karen::is_bad(void)
{
	std::cout << "bad Level" << std::endl;
}

void	Karen::complain(std::string level)
{
	met methods[5];
	methods[0] = &Karen::debug;
	methods[1] = &Karen::info;
	methods[2] = &Karen::warning;
	methods[3] = &Karen::error;
	methods[4] = &Karen::is_bad;

	std::string levels[4];
	levels[0] = "DEBUG";
	levels[1] = "INFO";
	levels[2] = "WARNING";
	levels[3] = "ERROR";

	int i = -1;
	while (level != levels[++i] && i < 4)
    {}
	(this->*methods[i])();
}
