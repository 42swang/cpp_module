#include "Intern.hpp"

Intern::Intern()
{}

Intern::~Intern()
{}

Intern::Intern(const Intern& copy)
{
	*this = copy;
}

Intern& Intern::operator=(const Intern& origin)
{
	if (this == &origin)
		return *this;
	return *this;
}

Form * Intern::makeForm(std::string form_name, std::string target)
{
	std::string request[3] = {"robotomy request", "presidential pardon", "shrubbery creation"};
	
	int idx;
	Form *form;

	for (int i = 0; i < 3; i++)
	{
		if (request[i] == form_name)
			idx = i;
	}
	switch (idx)
	{
	case 0:
		form = new RobotomyRequestForm(target);
		break;
	case 1:
		form = new PresidentialPardonForm(target);
		break;
	case 2:
		form = new ShrubberyCreationForm(target);
		break;
	default:
		throw Intern::NotFoundFormNameException();
		break;
	}
	std::cout << GREEN << "Intern creates <" << form_name << ">\n" << EOC;
	return(form);
}