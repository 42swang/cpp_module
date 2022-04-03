#include "PresidentialPardonForm.hpp"

std::string PresidentialPardonForm::getTarget() const
{
	return(this->_target);
}

PresidentialPardonForm::PresidentialPardonForm() : Form("Pres_form", P_SIGN, P_EXEC), _target("default")
{}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("Pres_form", P_SIGN, P_EXEC), _target(target)
{}

PresidentialPardonForm::~PresidentialPardonForm()
{}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& copy) : Form("Pres_form", P_SIGN, P_EXEC), _target(copy._target)
{
}

PresidentialPardonForm & PresidentialPardonForm::operator=(const PresidentialPardonForm& copy)
{
	if (this == &copy)
		return(*this);
	Form::operator=(copy);
	this->_target = copy._target;
	return (*this);
}

void PresidentialPardonForm::execute(const Bureaucrat& bureaucrat) const
{
	if (this->isSigned() == false)
		throw Form::NotSignedException();
	if (bureaucrat.getGrade() > this->getExecuteGrade())
		throw Form::GradeTooHighException();
	else
	{
		std::cout << YELLOW << "	<" << this->_target << "> has been pardoned by Zaphod Beeblebrox.\n" << EOC;
	}
}