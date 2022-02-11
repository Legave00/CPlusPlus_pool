/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   main.cpp										   :+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: ydorene <ydorene@student.42.fr>			+#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2021/11/11 16:37:50 by ydorene		   #+#	#+#			 */
/*   Updated: 2021/11/11 17:28:08 by ydorene		  ###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

#include "book.hpp"

int main()
{
	book		book;
	std::string command;

	while(1)
	{
		std::cout << "\nenter command" << std::endl;
		if (!std::getline(std::cin, command))
			break;
		if (!command.compare("ADD"))
			book.ADD();
		else if (!command.compare("SEARCH"))
			book.SEARCH();
		else if (!command.compare("EXIT"))
			book.EXIT();
		else
			std::cout << "command is wrong" << std::endl;
	}
	return 0;
}