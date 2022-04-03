#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Form.hpp"
#include "Intern.hpp"

int main(void)
{
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
	}
	catch (std::exception &e)
	{
		std::cout << RED << e.what() << EOC << std::endl;
	}
	delete a;
	delete b;
	delete c;
	//system("leaks Form");
	return 0;

	//인턴이 만든 서류에 사인하고 실행하는거 예외처리 추가해야하나?
}