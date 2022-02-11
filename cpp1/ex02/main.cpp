#include <iostream>
#include <iomanip>

int main()
{
    std::string str = "HI THIS IS BRAIN";

    std::string &stringREF = str;
    std::string *stringPTR = &str;

    std::cout << "сама строка " << str << std::endl;
    std::cout << "ячейка через саму строку " << &str << std::endl;
    std::cout << "ячейка через указатель " << stringPTR << std::endl;
    std::cout << "ячейка через ссылку " << &stringREF << std::endl;
    std::cout << "сама строка через сслыку " << stringREF << std::endl;
    std::cout << "сама строка через указатель " << *stringPTR << std::endl;

    return 0;
}


