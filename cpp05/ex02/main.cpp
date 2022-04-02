#include "Bureaucrat.hpp"
// #include "PresidentialPardonForm.hpp"
// #include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Form.hpp"

int main(void)
{
	try
	{
		Bureaucrat b1("b1", 1); 
		Bureaucrat b2("b2", 140);
		Bureaucrat b3("b3", 150);
		ShrubberyCreationForm sform("sform");
		b1.signForm(sform);
		b1.executeForm(sform);
//		b2.signForm(sform);
//		b2.executeForm(sform);
//		b3.signForm(sform);
		std::cout << std::endl;
	}	
	catch (std::exception & e)
	{
		std::cout << RED << e.what() << EOC << std::endl;
	}
//	system("leaks ex02");
	return 0;
}
		// RobotomyRequestForm rform("rform");
		// PresidentialPardonForm pform("pform");
		// b1.executeForm(sform); //sign first messeage
		// b1.signForm(sform); //60 -> 145, 137
		// b1.executeForm(sform);

		// b1.signForm(rform); //60 -> 72, 45
		// b1.executeForm(rform); //exception
		// b2.signForm(pform); //10-> 25, 5
		// b2.executeForm(pform);
		// b1.executeForm(pform); //exception