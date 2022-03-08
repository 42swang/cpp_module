#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << C_YLLW << "WrongCat default constructor called\n" << C_NRML;
	this->_type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat& copy)
{
	std::cout << C_YLLW << "WrongCat copy constructor called\n" << C_NRML;
	*this = copy;
}

WrongCat::~WrongCat()
{
	std::cout << C_YLLW << "WrongCat default destoructor called\n" << C_NRML;
}

WrongCat& WrongCat::operator=(const WrongCat& copy)
{
	if (this == &copy)
		return *this;
	this->_type = copy._type;
	return *this;
}

void WrongCat::makeSound() const
{
	std::cout << C_YLLW << "Who let the WrongCat Sound\n" << C_NRML;
	std::cout << C_YLLW << "ay~ong~ meow~~\n" << C_NRML;
}
