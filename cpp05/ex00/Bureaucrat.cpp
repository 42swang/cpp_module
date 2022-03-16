#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("unknown"), _grade(150)
{
	std::cout << GREEN << "Bureaucrat default constructor called\n" << EOC;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
	std::cout << GREEN << "Bureaucrat constructor(parameter) called\n" << EOC;
}

Bureaucrat::Bureaucrat(const Bureaucrat& copy)
{
	std::cout << GREEN << "Bureaucrat copy constructor called\n" << EOC;
	*this = copy;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& copy)
{
	std::cout << GREEN << "Bureaucrat operator= called\n" << EOC;	
	if (this == &copy)
		return(*this);
	this->_grade = copy.getGrade();
	return(*this);
}

Bureaucrat::~Bureaucrat()
{
	std::cout << GREEN << "Bureaucrat default destructor called\n" << EOC;
}

void	Bureaucrat::increaseGrade(int amount)
{
	if ((this->_grade) > amount)
		this->_grade -= amount;
	else
		throw GradeTooHighException();
}

void	Bureaucrat::decreaseGrade(int amount)
{
	if ((this->_grade) + amount > 150)
		throw GradeTooLowException();
	else
		this->_grade += amount;
}

const std::string Bureaucrat::getName() const
{
	return(this->_name);
}

int Bureaucrat::getGrade() const
{
	return(this->_grade);
}

std::ostream&	operator<<(std::ostream& out, const Bureaucrat& b)
{
	out << "name: " << b.getName() << "\ngrade: " << b.getGrade() << std::endl;

	return (out);
}
