#include "Span.hpp"

int main(void)
{	
	try
	{
		Span sp = Span(5);
		sp.addNumber(5);
		sp.addNumber(0);
		sp.addNumber(21);
		sp.addNumber(9);
		sp.addNumber(15);
		std::cout << "ShortestSpan = " << sp.shortestSpan() << std::endl;
		std::cout << "LongestSpan = " << sp.longestSpan() << std::endl;
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Span sp = Span(20);
		sp.addNumbers(-10, 9);
		for (int i = 0; i < 20; i++)
			std::cout << *(sp.getArray() + i) << std::endl;
		std::cout << "ShortestSpan = " << sp.shortestSpan() << std::endl;
		std::cout << "LongestSpan = " << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
