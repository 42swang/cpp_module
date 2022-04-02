#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("Shru_form", SIGN, EXEC), _target("default")
{

}

ShrubberyCreationForm::~ShrubberyCreationForm()
{

}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("Shru_form", SIGN, EXEC), _target(target)
{

}

std::string ShrubberyCreationForm::getTarget()
{
	return(this->_target);
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm & copy) : Form(copy.getName(), copy.getSignGrade(), copy.getExecuteGrade()), _target(copy._target)
{}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(const ShrubberyCreationForm & copy)
{
	if (this == &copy)
		return *this;
	Form::operator=(copy);
	this->_target = copy._target;
	return (*this);
}

void ShrubberyCreationForm::execute(const Bureaucrat& bureaucrat)
{
	if (bureaucrat.getGrade() > this->getExecuteGrade())
		throw Form::GradeTooHighException();
	else
	{
		const std::string tree[12] = 
		{
			"              v .   ._, |_  .,",
			"           `-._\\/  .  \\ /    |/_",
			"               \\  _\\, y | \\//",
			"         _\\_.___\\, \\/ -.\\||",
			"           `7-,--.`._||  / / ,",
			"           /'     `-. `./ / |/_.'",
			"                     |    |//",
			"                     |_    /",
			"                     |-   |",
			"                     |   =|",
			"                     |    |",
			"--------------------/ ,  . \\--------._",
		};
		const std::string outfile(this->getTarget() + "_shrubbery");
		std::ofstream ofs;
		ofs.open(outfile, std::ios::out);
		if (ofs.fail())
		{
			ofs.clear();
			std::cerr << "Error : failed to open outfile\n";
			exit(0);
		}
		for (size_t i = 0; i < 12; i++) 
			ofs << tree[i] << std::endl;
		ofs.close();
	}
}