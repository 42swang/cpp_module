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

//같은 클래스자료형이면 다른 객체여도 같은혈족이라 private멤버변수에 접근이 가능하다
//프라이빗 멤버변수는 "인스턴스 외부"가 아니라 "클래스 외부"의 접근을 막는다.
//캡슐화
Bureaucrat::Bureaucrat(const Bureaucrat& copy) : _name(copy._name)
{
	std::cout << "copyName: " << copy._name << std::endl;
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