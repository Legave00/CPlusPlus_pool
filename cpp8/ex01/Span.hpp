#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>

class Span
{
	private:

		unsigned int	_N;
		unsigned int	_index;
		int				*_array;

		Span();
		
		class	ArrayIsEmpty: public std::exception
		{
			const char *what() const throw();
		};
		class	ArrayIsFull: public std::exception
		{
			const char *what() const throw();
		};
		class	WrongArgs: public std::exception
		{
			const char *what() const throw();
		};

	public:

		Span(unsigned int N);
		~Span();
		Span(const Span &obj);
		Span	&operator=(const Span &obj);

		void addNumber(int number);
		void addNumbers(int begin, int end);

		int	shortestSpan();
		int	longestSpan();

		unsigned int	getLength() const;
		unsigned int	getIndex() const;
		int				*getArray() const;
		
};


#endif