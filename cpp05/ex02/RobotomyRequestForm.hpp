// RobotomyRequestForm: Required grades: sign 72, exec 45
// Makes some drilling noises. Then, informs that <target> has been robotomized
// successfully 50% of the time. Otherwise, informs that the robotomy failed.

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"
# define R_SIGN 72
# define R_EXEC 45

class RobotomyRequestForm : public Form
{
private:
	std::string _target;
public:
	std::string getTarget() const;
	RobotomyRequestForm();
	RobotomyRequestForm(std::string target);
	~RobotomyRequestForm();
	RobotomyRequestForm(const RobotomyRequestForm& copy);
	RobotomyRequestForm & operator=(const RobotomyRequestForm & rform);
	void execute(const Bureaucrat& bureaucrat) const;
};

#endif
