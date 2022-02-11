#include <iostream>
#include <cctype>

int main(int ac, char **av)
{
	 if (ac < 2)
	 {
		  std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		  return (0);
	 }
	 else
	 {
		for (int j = 1; j < ac; j++)
		{
			for (int i = 0; av[j][i]; i++)
		  	{
		  		 av[j][i] = toupper(av[j][i]);
		  	}
	 		std::cout << av[j];
			if (j != (ac - 1))
				std::cout << " ";
		}
		std::cout << std::endl;
		return (1);
	 }
}