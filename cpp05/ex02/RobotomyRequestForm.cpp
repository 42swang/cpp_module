#include "RobotomyRequestForm.hpp"

std::string RobotomyRequestForm::getTarget() const
{
	return (this->_target);
}

RobotomyRequestForm::RobotomyRequestForm() : Form("Robo_form", R_SIGN, R_EXEC), _target("default")
{}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("Robo_form", R_SIGN, R_EXEC), _target(target)
{}

RobotomyRequestForm::~RobotomyRequestForm()
{}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& copy) : Form("Robo_form", R_SIGN, R_EXEC), _target(copy._target)
{}

RobotomyRequestForm & RobotomyRequestForm::operator=(const RobotomyRequestForm & rform)
{
	if (this == &rform)
		return(*this);
	Form::operator=(rform);
	this->_target = rform._target;
	return(*this);
}

void RobotomyRequestForm::execute(const Bureaucrat& bureaucrat) const
{
	if (bureaucrat.getGrade() > this->getExecuteGrade())
		throw Form::GradeTooHighException();
	else
	{
		std::cout << YELLOW << "	DRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR\n" << EOC;
		std::srand(std::time(NULL));
		if (std::rand() % 2)
			std::cout << YELLOW << "	<" << this->_target << "> has been robotomized successfully.\n" << EOC;
		else
			std::cout << YELLOW << "	<" << this->_target << "> robotomy failed\n" << EOC;
	}
}
