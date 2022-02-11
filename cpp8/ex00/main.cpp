#include "easyfind.hpp"

int main(void)
{
	std::vector<int>	v;
	int 				i = 0;

	v.insert(v.begin(), 1);
	v.insert(v.end(), 2);
	v.insert(v.end(), 3);
	v.insert(v.end(), 4);
	v.insert(v.end(), 5);
	v.insert(v.end(), 6);
	v.insert(v.end(), 7);
	v.insert(v.end(), 8);
	v.insert(v.end(), 9);
	i = easyfind(v, 1);
	if (i >= 0)
		std::cout << "n was founded in " << i << std::endl;
	i = easyfind(v, 8);
	if (i >= 0)

		std::cout << "n was founded in " << i << std::endl;
	i = easyfind(v, 20);
	if (i >= 0)
		std::cout << "n was founded in " << i << std::endl;
}