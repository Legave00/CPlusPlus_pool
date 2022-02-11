#include <iomanip>
#include <iostream>
#include <math.h>

size_t		col_of_digits(int a)
{
	size_t i = 0;
	if (a < 0)
		a = -a;
	while (a > 0)
	{
		a = a / 10;
		i++;
	}
	return (i);
}

void	print(std::string a)
{
	std::string c[3];

	c[0] = "nan";
	c[1] = "inf";
	c[2] = "-inf";
	std::cout << "char   : " << "\'*\'" << std::endl;
	std::cout << "int    : " << "Impossible" << std::endl;

	if (a == c[0] || a == c[1] || a == c[2])
	{
		std::cout << "float  : " << a << "f" << std::endl;
		std::cout << "double : " << a << std::endl;
	}
	else
	{
		std::cout << "float  : " << "Impossible" << std::endl;
		std::cout << "double : " << "Impossible" << std::endl;
	}
}

void	printl(const char *a, double b, double f, double d)
{
	double x;
	double w = modf(d, &x);

	//char
	int i;
	if (d < -2147483648 || d > 2147483647)
		std::cout << "char   : " << "\'*\'" << std::endl;
	else
	{
		i = atoi(a);
		char z = i;
		// std::cout << col_of_digits(i) << std::endl;
		if (i == 0 && strlen(a) == 1 && *a != '0')
			std::cout << "char   : " << a << std::endl;
		else if (i < 33)
			std::cout << "char   : " << "Non displayable" << std::endl;
		else if (i < 127 && i > 32 && w == 0)
			std::cout << "char   : " << z << std::endl;
		else
			std::cout << "char   : " << "\'*\'" << std::endl;
	}

	//int
	if (d < -2147483648 || d > 2147483647)
        std::cout << "int    : " << (b > 2147483647 ? "Inf" : "-Inf") << std::endl;
    else
        std::cout << "int    : " << static_cast<int>(b) << std::endl;

	
	//float
	w = modf(f, &x);
	f = static_cast<float>(f);
	if (f != std::numeric_limits<float>::infinity() && f != -std::numeric_limits<float>::infinity())
		std::cout << "float  : " << f << (w == 0 ? ".0f" : "f") << std::endl;
	else
		std::cout << "float  : " << (d < 0 ? "-Inff" : "Inff") << std::endl;


	//double
	w = modf(d, &x);
	if (d != std::numeric_limits<double>::infinity() && d != -std::numeric_limits<double>::infinity())
		std::cout << "double : " << d << (w == 0 ? ".0" : "") << std::endl;
	else
		std::cout << "double  : " << (d < 0 ? "-Inf" : "Inf") << std::endl;
	
}

int	valid_str(const char *str)
{
	int i = 0;
	
	if (!str)
		return -1; 
	if (*str == '-')
		i = 1;
	else if (!isdigit(*str))
		return 0;
	for (; str[i]; i++)
	{
		if ((str[i] >= 48 && str[i] < 58) || str[i] == '.')
			;
		else
			return 0;
	}
	return 1;
}

void	printchr(char ch)
{
	int i = ch;
	std::cout << "char   : " << ch << std::endl;
    std::cout << "int    : " << i << std::endl;
	std::cout << "float  : " << i << ".0f" << std::endl;
	std::cout << "double : " << i << ".0" << std::endl;
}

int main(int ac, const char **av)
{
	std::string a;
	char *b = NULL;
	int	i;

	if (ac != 2)
		std::cout << "wrong args" << std::endl;
	else
	{
		std::cout << std::setprecision(strlen(av[1]));

		double d = strtod(av[1], &b);

		i = valid_str(av[1]);

		a = av[1];
		if (a.length() == 1)
		{
			if (!(a[0] >= 48 && a[0] < 58))
				printchr(av[1][0]);
			else if (a[0] >= 48 && a[0] < 58)
				printl(&a[0], d, d, d);
		}
		else if (i == 1)
			printl(av[1], d, d, d);
		else
			print(av[1]);
	}
	return 0;
}