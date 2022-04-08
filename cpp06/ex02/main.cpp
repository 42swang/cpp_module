#include "Type.hpp"

int main()
{
	Base *test = generate();
	if (test == NULL)
	{
		std::cout << "Error\n";
		exit(0);
	}
	identify(test);
	identify(*test);
	delete test;
	return (0);
}