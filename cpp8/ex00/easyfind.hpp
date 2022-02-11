#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>

typedef std::vector<int> T;

unsigned long	easyfind(T &obj1, int n)
{
	unsigned long	i;
	T::iterator		ret;


	ret = find(obj1.begin(), obj1.end(), n);
	i = ret - obj1.begin();
	if (i == obj1.size())
	{
		std::cout << "n wasn't found in first param" << std::endl;
		return(-1);
	}
	i = ret - obj1.begin();
	return(i);
}

#endif