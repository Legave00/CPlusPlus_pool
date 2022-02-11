#include <iostream>
#include <iomanip>

class Base
{
	public:
	
	virtual ~Base();
};

Base::~Base()
{

}

class A: public Base
{

};

class B: public Base
{
	
};

class C: public Base
{
	
};

Base *generate(void)
{
    int rnd = 0;
    rnd = std::rand() % (3 + 1 - 0) + 0;
	if (rnd == 1)
	{
		std::cout << "class A created" << std::endl;
		return (new A);
	}
	else if (rnd == 2)
		{
			std::cout << "class B created" << std::endl;
			return (new B);
		}
	else
		{
			std::cout << "class C created" << std::endl;
			return (new C);
		}
}

void identify(Base& p)
{
	try
	{
		Base	*a = dynamic_cast<A*>(&p);
		if (!a)
		{
			std::cout << "is NULL" << std::endl;
			return;
		}
	}
	catch(const std::exception& e)
	{
		(void)e;
	}
	try
	{
		A	&a = dynamic_cast<A&>(p);
		(void)a;
		std::cout << "is A" << std::endl;
	}
	catch(const std::exception& e)
	{
		(void)e;
	}
	try
	{
		B	&a = dynamic_cast<B&>(p);
		(void)a;
		std::cout << "is B" << std::endl;
	}
	catch(const std::exception& e)
	{
		(void)e;
	}
	try
	{
		C	&a = dynamic_cast<C&>(p);
		(void)a;
		std::cout << "is C" << std::endl;
	}
	catch(const std::exception& e)
	{	
		(void)e;
	}
}

void identify(Base* p)
{
	if (p)
	{
		if (dynamic_cast<A*>(p))
		{
			std::cout << "is A" << std::endl;
			return;
		}
		if (dynamic_cast<B*>(p))
		{
			std::cout << "is B" << std::endl;
			return;
		}
		if (dynamic_cast<C*>(p))
		{
			std::cout << "is C" << std::endl;
			return;
		}
	}
	else
	{
		std::cout << "is NULL pointer" << std::endl;
		return;
	}
}

int main()
{
	Base	*a = generate();
	Base	*b = generate();
	identify(a);
	identify(b);
	delete a;
	delete b;
}