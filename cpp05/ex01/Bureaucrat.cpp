#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("unknown"), _grade(150)
{
	std::cout << GREEN << "Bureaucrat default constructor called\n" << EOC;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
	std::cout << GREEN << "Bureaucrat constructor(" << name << ") called\n" << EOC;
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat& copy)
{
	std::cout << GREEN << "Bureaucrat(" << this->_name <<") copy constructor called\n" << EOC;
	*this = copy;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& copy)
{
	std::cout << GREEN << "Bureaucrat(" << this->_name << ") operator= called\n" << EOC;	
	if (this == &copy)
		return(*this);
	this->_grade = copy.getGrade();
	return(*this);
}

Bureaucrat::~Bureaucrat()
{
	std::cout << GREEN << "Bureaucrat(" << this->_name << ") default destructor called\n" << EOC;
}

void	Bureaucrat::increaseGrade(int amount)
{
	std::cout << GREEN << "Bureaucrat(" << this->_name << ") increaseGrade\n" << EOC;
	if ((this->_grade) > amount)
		this->_grade -= amount;
	else
		throw GradeTooHighException();
}

void	Bureaucrat::decreaseGrade(int amount)
{
	std::cout << GREEN << "Bureaucrat(" << this->_name << ") decreaseGrade\n" << EOC;
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

void	Bureaucrat::beSinged(std::string f_name, int f_grade)
{
	Form form(f_name, f_grade);
	signForm(form);
}

void	Bureaucrat::signForm(Form& f)
{
	if (this->_grade > f.getRequireGrade())
	{
		std::cout << RED << "<" << this->_name << "> cannot sign <" << f.getName() << "> because <form require grade too high\n" << EOC;
		throw Form::GradeTooHighException();
	}
	else
	{
		f.setSign();
		std::cout << RED << "<" << this->_name << "> signs <" << f.getName() << ">.\n" << EOC;
	}
}