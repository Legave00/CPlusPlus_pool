#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>
#include <iomanip>

template <typename T>
void	swap(T &obj1, T &obj2)
{
	T	a;

	a = obj1;
	obj1 = obj2;
	obj2 = a;
}

template <typename T>
T	min(T &obj1, T&obj2)
{
	if (obj1 < obj2)
		return (obj1);
	return (obj2);
}

template <typename T>
T	max(T &obj1, T&obj2)
{
	if (obj1 > obj2)
		return (obj1);
	return (obj2);
}

#endif