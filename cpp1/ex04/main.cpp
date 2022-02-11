

int main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "wrong arguments" << std::endl;
		return (1);
	}
	else
		ft_replace(av[1], av[2], av[3]);
	return (0);
}