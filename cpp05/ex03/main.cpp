#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Form.hpp"
#include "Intern.hpp"

int main(void)
{
	//인턴테스트를 위해 정상적으로 생성
	Intern intern;
	Bureaucrat b1("rachel", 1); 
	Form *a = intern.makeForm("shrubbery creation", "home");
	Form *b = intern.makeForm("robotomy request", "amy");
	Form *c = intern.makeForm("presidential pardon", "bob");
	b1.signForm(*a);
	b1.signForm(*b);
	b1.signForm(*c);
	b1.executeForm(*a);
	b1.executeForm(*b);
	b1.executeForm(*c);
	try
	{
		Form *d = intern.makeForm("aaaaaaa", "bob");
		b1.signForm(*d);
		std::cout << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << RED << e.what() << EOC << std::endl;
	}
	delete a;
	delete b;
	delete c;
	system("leaks ex03");
	return 0;
}