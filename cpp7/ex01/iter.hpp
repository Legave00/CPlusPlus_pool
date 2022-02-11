#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <iomanip>

template <typename C>
void	print(C &obj)
{
	std::cout << obj << std::endl;
}

template <typename C>
void	incr(C &obj)
{
	obj++;
}

template <typename C>
void	iter(C *adress, int lenth, void (*func)(C &obj))
{
	for (int i = 0; i < lenth; i++)
		func(adress[i]);
}

#endif