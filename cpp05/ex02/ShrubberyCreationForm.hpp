// ShrubberyCreationForm: Required grades: sign 145, exec 137
// Create a file <target>_shrubbery in the working directory, and writes ASCII trees
// inside it.

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <fstream>
#include "Form.hpp"

#define S_EXEC 137
#define S_SIGN 145


class ShrubberyCreationForm : public Form
{
private:
	std::string _target;
public:
	std::string getTarget() const;
	ShrubberyCreationForm();
	~ShrubberyCreationForm();
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(const ShrubberyCreationForm & copy);
	ShrubberyCreationForm & operator=(const ShrubberyCreationForm & copy);
	void execute(const Bureaucrat& bureaucrat) const;
};

#endif
