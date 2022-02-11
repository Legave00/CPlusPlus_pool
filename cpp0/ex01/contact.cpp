#include "book.hpp"

contact::contact()
{
	first_name = "default";
}

contact::contact(std::string phone)
{
	phone_number = phone;
}

contact::~contact()
{

}

void	contact::set_fname()
{
	std::cout << "enter first name" << std::endl;
	std::getline(std::cin, first_name);
}

std::string contact::get_fname()
{
	return(first_name);
}

void	contact::set_lname()
{
	std::cout << "enter last name" << std::endl;
	std::getline(std::cin, last_name);
}

std::string contact::get_lname()
{
	return(last_name);
}

void	contact::set_nickname()
{
	std::cout << "enter nickname" << std::endl;
	std::getline(std::cin, nickname);
}

std::string contact::get_nickname()
{
	return(nickname);
}

void	contact::set_pnum()
{
	std::cout << "enter phone number" << std::endl;
	std::getline(std::cin, phone_number);
}

std::string contact::get_pnum()
{
	return(phone_number);
}

void	contact::set_secret()
{
	std::cout << "enter darkest secret" << std::endl;
	std::getline(std::cin, darkest_secret);
}

std::string contact::get_secret()
{
	return(darkest_secret);
}