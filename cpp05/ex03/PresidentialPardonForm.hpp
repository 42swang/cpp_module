// PresidentialPardonForm: Required grades: sign 25, exec 5
// Informs that <target> has been pardoned by Zaphod Beeblebrox.

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include "Form.hpp"

# define P_SIGN 25
# define P_EXEC 5

class PresidentialPardonForm : public Form
{
private:
	std::string _target;
public:
	std::string getTarget() const;
	PresidentialPardonForm();
	PresidentialPardonForm(std::string target);
	~PresidentialPardonForm();
	PresidentialPardonForm(const PresidentialPardonForm& copy);
	PresidentialPardonForm & operator=(const PresidentialPardonForm& copy);
	void execute(const Bureaucrat& bureaucrat) const;
};

#endif