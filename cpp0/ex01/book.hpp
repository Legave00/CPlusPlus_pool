/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   book.hpp										   :+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: ydorene <ydorene@student.42.fr>			+#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2021/11/11 17:37:12 by ydorene		   #+#	#+#			 */
/*   Updated: 2021/11/11 17:37:12 by ydorene		  ###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

#ifndef BOOK_HPP
#define BOOK_HPP

#include <iostream>
#include <iomanip>
#include "contact.hpp"

class book
{
	private:

	contact contacts[8];
	int		index;
	int		x;
	int		len;

	void	print_contact(int _index);
	void	print_contact2(int _index);

	public:

	book();
	~book();

	void	EXIT();
	void	ADD();
	void	SEARCH();
};

#endif