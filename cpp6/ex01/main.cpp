#include <iostream>
#include <unistd.h>

struct Data
{
	std::string Name;

	std::string NickName;

	int	age;
};

uintptr_t serialize(Data* ptr)
{
	uintptr_t tmp;
	tmp = reinterpret_cast<uintptr_t>(ptr);
	return	(tmp);
}

Data* deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}

int main(void)
{
	Data *Sam = new Data();
	Sam->age = 38;
	Sam->Name = "Sam";
	Sam->NickName = "nagibator228";

	std::cout << "\n\n\nSam age = " << Sam->age << "\nSam Name: " << Sam->Name << "\nSam Nickname: " << Sam->NickName << std::endl;
	std::cout << "\n\n\n" << std::endl;

	uintptr_t tmp = serialize(Sam);

	std::cout << tmp << std::endl;

	Data *Dean = deserialize(tmp);

	std::cout << "\n\n\nDean n = " << Dean->age << "\nDean Name: " << "\nDean Nick: " << Dean->NickName << std::endl;
	delete Sam;
}