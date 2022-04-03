#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"
#include <iostream>
#include <exception>

class Bureaucrat;

class Form
{
private:
	const std::string _name;
	const int _sign_grade;
	const int _execute_grade;
	bool _signed;
public:
	const std::string getName() const;
	const int getSignGrade() const;
	const int getExecuteGrade() const;
	bool isSigned() const;
	Form();
	virtual ~Form();
	Form(const Form& copy);
	Form(std::string name, int sign_grade, int execute_grade);
	Form& operator=(const Form& other);
	class NotSignedException : public std::exception
	{
		const char* what() const throw()
		{
			return("Form not signed!");
		};
	};
	class AlreadySignedException : public std::exception
	{
		const char* what() const throw()
		{
			return("Form already signed!");
		};
	};
	class GradeTooLowException : public std::exception
	{
		const char* what() const throw()
		{
			return("Form grade too Low!");
		};
	};
	class GradeTooHighException : public std::exception
	{
		const char* what() const throw()
		{
			return("Form grade too High!");
		};
	};
	void beSigned(const Bureaucrat& bureaucrat);
	virtual void execute(const Bureaucrat& bureaucrat) const = 0;
};

std::ostream&	operator<<(std::ostream& out, const Form & form);

#endif