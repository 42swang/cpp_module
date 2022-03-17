#ifndef FORM_HPP
# define FORM_HPP

# define ITALIC "\033[3m"
# define EOC    "\033[0;0m"

#include <iostream>
#include <exception>

class Form
{
private:
	const std::string _name;
	const int _require_grade;
	bool _sign;
public:
	Form();
	~Form();
	Form(const Form& copy);
	Form& operator=(const Form& copy);
	Form(std::string name, int require_grade);
	void setSign();
	bool getSign() const;
	const std::string getName() const;
	int getRequireGrade() const;
	class GradeTooHighException : public std::exception
	{
		virtual const char* what() const throw()
		{
			return("exception: form require grade too high than bureaucrat's grade\n");
		};
	};
	class GradeTooLowException : public std::exception
	{
		virtual const char* what() const throw()
		{
			return("이런경우가 있나?\n");
		};
	};
};

std::ostream&	operator<<(std::ostream& out, const Form& b);

#endif