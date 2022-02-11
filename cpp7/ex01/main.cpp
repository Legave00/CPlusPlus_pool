#include "iter.hpp"

int main(void)
{
	int array[5] = {0, 1, 2, 3, 4};

	iter(array, 5, print);
	std::cout << "\n\n" << std::endl;
	iter(array, 5, incr);
	iter(array, 5, print);
}