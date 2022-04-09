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
	A *typeA = dynamic_cast<A *>(p);
	B *typeB = dynamic_cast<B *>(p);
	C *typeC = dynamic_cast<C *>(p);

	if (typeA != 0)
		std::cout << "actual type of the object pointed to by p: A\n";
	else if (typeB != 0)
		std::cout << "actual type of the object pointed to by p: B\n";
	else if (typeC != 0)
		std::cout << "actual type of the object pointed to by p: C\n";
	else if (typeA == 0 && typeB == 0 && typeC == 0)
		std::cout << "Error\n";
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
		std::cout << RED << e.what() << ": not A type\n" << EOC;
	}
	try
	{
		B typeB = dynamic_cast<B &>(p);
		std::cout << "actual type of the object pointed to by p: B\n";
	}
	catch(const std::exception& e)
	{
		std::cout << RED << e.what() << ": not B type\n" << EOC;
	}
	try
	{
		C typeC = dynamic_cast<C &>(p);
		std::cout << "actual type of the object pointed to by p: C\n";
	}
	catch(const std::exception& e)
	{
		std::cout << RED << e.what() << ": not C type\n" << EOC;
	}
}