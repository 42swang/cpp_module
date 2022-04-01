#include "Bureaucrat.hpp"

std::ostream&	operator<<(std::ostream& out, const Bureaucrat & b)
{
	out << "<" << b.getName() << ">, " << "bureaucrat grade <" << b.getGrade() << ">.\n";
	return out;
}

Bureaucrat::Bureaucrat() : _name("_default"), _grade(150)
{
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	this->_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat& copy) : _name(copy._name)
{
	*this = copy;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& copy)
{
	if (this == &copy)
		return(*this);
	this->_grade = copy._grade;
	return(*this);
}

Bureaucrat::~Bureaucrat()
{}

std::string Bureaucrat::getName() const
{
	return(this->_name);
}

int Bureaucrat::getGrade() const
{
	return(this->_grade);
}

void	Bureaucrat::increaseGrade(int amount)
{
	int grade;
	grade = this->_grade - amount;
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	this->_grade = grade;
}
// 승진

void	Bureaucrat::decreaseGrade(int amount)
{
	int grade;
	grade = this->_grade + amount;
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	this->_grade = grade;
}
// 좌천