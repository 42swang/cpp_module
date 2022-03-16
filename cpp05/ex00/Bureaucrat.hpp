#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# define RED    "\033[0;31m"
# define GREEN  "\033[0;32m"
# define DARKGREEN "\033[2;32m"
# define YELLOW "\033[1;33m"
# define PERL "\033[1;35m"
# define BLUE "\033[1;34m"
# define EOC    "\033[0;0m"
# define ITALIC "\033[3m"

#include <iostream>
#include <exception>

class Bureaucrat
{
private:
	const std::string _name;
	int _grade;
public:
	Bureaucrat();
	Bureaucrat(std::string name, int grade);
	Bureaucrat(const Bureaucrat& copy);
	Bureaucrat& operator=(const Bureaucrat& copy);
	~Bureaucrat();

	void	increaseGrade(int amount);
	void	decreaseGrade(int amount);
	const std::string getName() const;
	int getGrade() const;
	class GradeTooHighException : public std::exception
	{
		public:
		const char * what() const throw()
		{
			return("grade too high\n");	
		};
	};
	class	GradeTooLowException : public std::exception
	{
		public:
		const char * what() const throw()
		{
			return("grade too low\n");	
		};
	};
};

std::ostream&	operator<<(std::ostream& out, const Bureaucrat& b);


#endif