#include "Form.hpp"

Form::Form() : _name("default"), _require_grade(1), _sign(false)
{
	std::cout << ITALIC << "Form default constructor called\n" << EOC;
}

Form::~Form()
{
	std::cout << ITALIC << "Form default destructor called\n" << EOC;
}

Form::Form(const Form& copy) : _name(copy._name), _require_grade(copy._require_grade), _sign(copy._sign)
{
	std::cout << ITALIC << "Form(" << this->_name <<") default copy constructor called\n" << EOC;
}

Form::Form(std::string name, int require_grade) : _name(name), _require_grade(require_grade), _sign(false)
{
	std::cout << ITALIC << "Form(" << this->_name <<") constructor(parameter) called\n" << EOC;
}

Form& Form::operator=(const Form& copy)
{
	std::cout << ITALIC << "Form(" << this->_name <<") operator= called\n" << EOC;
	if (this == &copy)
		return(*this);
	this->_sign = copy._sign;
	return(*this);
}

void Form::setSign()
{
	this->_sign = true;
}


bool Form::getSign() const
{
	return (this->_sign);
}

const std::string Form::getName() const
{
	return (this->_name);
}

int Form::getRequireGrade() const
{
	return (this->_require_grade);
}

std::ostream&	operator<<(std::ostream& out, const Form& b)
{
	out << ITALIC << "Form: " << b.getName() << ", Require Grade: " << b.getRequireGrade() << ", Sign : " << b.getSign() << std::endl << EOC;
	return (out);
}