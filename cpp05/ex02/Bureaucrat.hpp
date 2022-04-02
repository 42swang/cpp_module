#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <exception>
#include "Form.hpp"

# define RED    "\033[0;31m"
# define GREEN  "\033[0;32m"
# define DARKGREEN "\033[2;32m"
# define YELLOW "\033[1;33m"
# define PERL "\033[1;35m"
# define BLUE "\033[1;34m"
# define EOC    "\033[0;0m"
# define ITALIC "\033[3m"

class Form;

class Bureaucrat
{
private:
	const std::string _name;
	int _grade;
public:
	Bureaucrat();
	Bureaucrat(const Bureaucrat& copy);
	Bureaucrat(std::string name, int grade);
	Bureaucrat& operator=(const Bureaucrat& copy);
	~Bureaucrat();
	std::string getName() const;
	int getGrade() const;
	void	increaseGrade(int amount);
	// 승진
	void	decreaseGrade(int amount);
	// 좌천
	class GradeTooHighException : public std::exception
	{
	public:
		const char * what() const throw()
		{
			return("Bureaucrat grade too high!\n");
		};
	};
	class GradeTooLowException : public std::exception
	{
	public:
		const char * what() const throw()
		{
			return("Bureaucrat grade too low!\n");
		};
	};
	void signForm(Form & form);
	void executeForm(Form & form);
};

std::ostream&	operator<<(std::ostream& out, const Bureaucrat & b);

#endif