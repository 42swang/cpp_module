#include "Type.hpp"

int main()
{
	Base *test = generate();
	identify(test);
	identify(*test);
	delete test;
	return (0);
}