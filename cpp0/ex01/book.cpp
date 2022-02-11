/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   book.cpp										   :+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: ydorene <ydorene@student.42.fr>			+#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2021/11/11 16:39:23 by ydorene		   #+#	#+#			 */
/*   Updated: 2021/11/11 17:24:40 by ydorene		  ###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

#include "book.hpp"

book::book()
{
	index = 0;
	x = 0;
	len = 0;
}

book::~book()
{

}

void	print_head(void)
{
	std::cout << std::setw(10) << "index" << "|";
	std::cout << std::setw(10) << "first name" << "|";
	std::cout << std::setw(10) << "last name" << "|";
	std::cout << std::setw(10) << "nickname" << std::endl;
}

std::string	cut(std::string str)
{
	if (str.length() > 9)
		return (str.substr(0, 9) + ".");
	return(str);
}


void	book::print_contact(int index)
{
	std::cout << std::setw(10) << index << "|";
	std::cout << std::setw(10) << cut(contacts[index].get_fname()) << "|";
	std::cout << std::setw(10) << cut(contacts[index].get_lname()) << "|";
	std::cout << std::setw(10) << cut(contacts[index].get_nickname()) << std::endl;
}

void	book::print_contact2(int index)
{
	if (index >= 0)
	{
		std::cout << "first name	 " << contacts[index].get_fname() << std::endl;
		std::cout << "last name		 " << contacts[index].get_lname() << std::endl;
		std::cout << "nickname		 " << contacts[index].get_nickname() << std::endl;
		std::cout << "phone number   " << contacts[index].get_pnum() << std::endl;
		std::cout << "darkest secret " << contacts[index].get_secret() << std::endl;
	}
}

int	check_index(std::string ind, int len)
{
	const char	i = ind[0];
	int			j;

	if (ind.length() != 1 || !std::isdigit(i))
	{
		std::cout << "wrong index" << std::endl;
		return -1;
	}
	j = i - 48;
	if (j > 7 || j < 0 || j >= len)
	{
		std::cout << "wrong index" << std::endl;
		return -1;
	}
	return (j);
}

void	book::EXIT()
{
	exit(1);
}

void	book::ADD()
{
	if (index > 7)
		index = 0;

	contacts[index].set_fname();
	contacts[index].set_lname();
	contacts[index].set_nickname();
	contacts[index].set_pnum();
	contacts[index].set_secret();

	index++;
	if (len < 8)
		len++;
}

void	book::SEARCH()
{
	std::string	ind;

	if (len == 0)
		std::cout << "phonebook is empty" << std::endl;
	else if (len == 1)
	{
		print_head();
		print_contact(0);
	}
	else if (len > 1)
	{
		print_head();
		for (int i = 0; i < len; i++)
			print_contact(i);
		std::cout << "enter tne index of contact" << std::endl;
		std::getline(std::cin, ind);
		
		print_contact2(check_index(ind, len));
	}

}