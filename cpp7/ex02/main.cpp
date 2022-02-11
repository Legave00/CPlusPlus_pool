#include "Array.hpp"

int main(void)
{
	unsigned int MAX_VAL = 10;
	Array<int> numbers(MAX_VAL);
	int* mirror = new int[MAX_VAL];
	srand(time(NULL));
	for (unsigned int i = 0; i < MAX_VAL; i++)
	{
		const int value = rand();
		numbers[i] = value;
		mirror[i] = value;
	}
	Array<int> tmp = numbers;
	Array<int> test(tmp);

	for (unsigned int i = 0; i < MAX_VAL; i++)
	{
		std::cout << i << " numbers: " << numbers[i] << " mirror:" << mirror[i] << " tmp:" << tmp[i] << " test: " << test[i] << std::endl;
		if (mirror[i] != numbers[i])
		{
			std::cerr << "didn't save the same value!!" << std::endl;
			return 1;
		}
	}


    std::cout << "--- Check array affect after assignation test & numbers and +1 ---" << std::endl;
    test = numbers; 
	for (unsigned int i = 0; i < MAX_VAL; i++)
	{
        test[i] += 1;
		std::cout << i << " numbers: " << numbers[i] << " test: " << test[i] << std::endl;
    }


    std::cout << "--- Check array affect after test modification ---" << std::endl;
	for (unsigned int i = 0; i < MAX_VAL; i++)
	{
        test[i] = 42;
		std::cout << i << " tmp: " << tmp[i] << " test: " << test[i] << std::endl;
    }
	try
	{
		numbers[-23] = 0;

	}
	catch(const std::exception& e)
	{
		std::cout << "kosyak\n";
		std::cerr << e.what() << '\n';
	}
	try
	{
		numbers[MAX_VAL] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	for (unsigned int i = 0; i < MAX_VAL; i++)
	{
		numbers[i] = rand();
		std::cout << i << " numbers: " << numbers[i] << " mirror: " << mirror[i] << std::endl;
	}
	delete [] mirror;//
	return 0;
}