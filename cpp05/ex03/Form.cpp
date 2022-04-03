#include "Form.hpp"

std::ostream&	operator<<(std::ostream& out, const Form & form)
{
	out << "<" << form.getName() << ": ";
	if (form.isSigned())
		out << "signed";
	else
		out << "not signed";
	out << "> require grade to sign: " << form.getSignGrade() << " require grade to execute: " << form.getExecuteGrade() << std::endl;
	return out;
}

void	Form::beSigned(const Bureaucrat & bureaucrat)
{
	if (bureaucrat.getGrade() > this->_sign_grade)
		throw Form::GradeTooHighException();
	else if (this->isSigned() == true)
		throw Form::AlreadySignedException();
	else
		this->_signed = true;
}

const std::string Form::getName() const
{
	return(this->_name);
}

const int Form::getSignGrade() const
{
	return(this->_sign_grade);
}

const int Form::getExecuteGrade() const
{
	return(this->_execute_grade);
}

bool Form::isSigned() const
{
	return(this->_signed);
}

Form::Form() : _name("default_form"), _sign_grade(150), _execute_grade(150), _signed(false)
{}

Form::~Form()
{}

Form::Form(const Form& copy) : _name(copy._name), _sign_grade(copy._sign_grade), _execute_grade(copy._execute_grade), _signed(copy._signed)
{}

Form::Form(std::string name, int sign_grade, int execute_grade) : _name(name), _sign_grade(sign_grade), _execute_grade(execute_grade), _signed(false)
{
	if(this->_sign_grade > 150)
		throw Form::GradeTooLowException();
	else if(this->_sign_grade < 1)
		throw Form::GradeTooHighException();
	else if(this->_execute_grade > 150)
		throw Form::GradeTooLowException();
	else if(this->_execute_grade < 1)
		throw Form::GradeTooHighException();
}

Form& Form::operator=(const Form& other)
{
	if (this == &other)
		return(*this);
	this->_signed = other._signed;
	return *this;
}