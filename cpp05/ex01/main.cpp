#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	try
	{
	Bureaucrat a("grade 9", 9);

	a.beSinged("블랙홀 100일 연장", 1);
	}
	catch(std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	try
	{
	Bureaucrat a("grade 9", 9);
	Bureaucrat b("grade 3", 3);

	Form f("블랙홀 10일 연장", 3);
	
	b.signForm(f);
	a.signForm(f);
	}
	catch(std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
}