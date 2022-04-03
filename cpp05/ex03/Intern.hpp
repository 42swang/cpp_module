#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
public:
	Form * makeForm(std::string form_name, std::string target);
	class NotFoundFormNameException : public std::exception
	{
		const char* what() const throw()
		{
			return("Not found Form_name. Intern couldn't create Form.");
		};
	};
};

#endif