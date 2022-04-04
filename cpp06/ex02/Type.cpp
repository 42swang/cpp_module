#include "Type.hpp"

Base * generate(void)
{
	int i;
	srand(time(NULL));
	i = rand() % 3;
	switch(i)
	{
	case 0:
		std::cout << "generate A\n";
		return (new A());
	case 1:
		std::cout << "generate B\n";
		return (new B());
	case 2:
		std::cout << "generate C\n";
		return (new C());
	default:
		return NULL;
	}
}

void identify(Base* p)
{
	if (dynamic_cast<A *>(p))
		std::cout << "actual type of the object pointed to by p: A\n";
	else if (dynamic_cast<B *>(p))
		std::cout << "actual type of the object pointed to by p: B\n";
	else if (dynamic_cast<C *>(p))
		std::cout << "actual type of the object pointed to by p: C\n";
	else
		std::cout << "Error : Check Base *p\n";
}

void identify(Base& p)
{
	try
	{
		A typeA = dynamic_cast<A &>(p);
		std::cout << "actual type of the object pointed to by p: A\n";
	}
	catch(const std::exception& e)
	{
	}
	try
	{
		B typeB = dynamic_cast<B &>(p);
		std::cout << "actual type of the object pointed to by p: B\n";
	}
	catch(const std::exception& e)
	{
	}
	try
	{
		C typeC = dynamic_cast<C &>(p);
		std::cout << "actual type of the object pointed to by p: C\n";
	}
	catch(const std::exception& e)
	{
	}
}