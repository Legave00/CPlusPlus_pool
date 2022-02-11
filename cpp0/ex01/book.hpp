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