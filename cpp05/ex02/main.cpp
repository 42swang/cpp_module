#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Form.hpp"

int main(void)
{
	std::cout << "--------------ShrubberyCreationFrom TEST------------------\n";
	try
	{
		Bureaucrat b1("b1", 1); 
		Bureaucrat b2("b2", 140);
		Bureaucrat b3("b3", 150);
		ShrubberyCreationForm sform("sform");
		b1.signForm(sform);
		b1.executeForm(sform);
		std::cout << std::endl;
		// b2.signForm(sform);
		// b2.executeForm(sform);
		// std::cout << std::endl;
		// b3.signForm(sform);
		// std::cout << std::endl;
	}	
	catch (std::exception & e)
	{
		std::cout << RED << e.what() << EOC << std::endl;
	}
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << "--------------PresidentialPardonForm TEST------------------\n";
	try
	{
		Bureaucrat b1("b1", 1); 
		Bureaucrat b2("b2", 10);
		Bureaucrat b3("b3", 30);
		PresidentialPardonForm pform("pform");
		b1.signForm(pform);
		b1.executeForm(pform);
		std::cout << std::endl;
		// b2.signForm(pform);
		// b2.executeForm(pform);
		// std::cout << std::endl;
		// b3.signForm(pform);
		// std::cout << std::endl;
	}	
	catch (std::exception & e)
	{
		std::cout << RED << e.what() << EOC << std::endl;
	}
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << "--------------RobotomyRequestForm TEST------------------\n";
	try
	{
		Bureaucrat b1("b1", 1); 
		Bureaucrat b2("b2", 50);
		Bureaucrat b3("b3", 150);
		RobotomyRequestForm rform("rform");
		b1.signForm(rform);
		b1.executeForm(rform);
		std::cout << std::endl;
		// b2.signForm(rform);
		// b2.executeForm(rform);
		// std::cout << std::endl;
		// b3.signForm(rform);
		// std::cout << std::endl;
	}	
	catch (std::exception & e)
	{
		std::cout << RED << e.what() << EOC << std::endl;
	}
	std::cout << std::endl;
	std::cout << std::endl;

	system("leaks ex02");
	return 0;
}