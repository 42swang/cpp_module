#include "WrongDog.hpp"

WrongDog::WrongDog()
{
	std::cout << C_BLUE << "WrongDog default constructor called\n" << C_NRML;
	this->_type = "WrongDog";
}

WrongDog::WrongDog(const WrongDog& copy)
{
	std::cout << C_BLUE << "WrongDog copy constructor called\n" << C_NRML;
	*this = copy;
}

WrongDog::~WrongDog()
{
	std::cout << C_BLUE << "WrongDog default destoructor called\n" << C_NRML;
}

WrongDog& WrongDog::operator=(const WrongDog& copy)
{
	if (this == &copy)
		return *this;
	this->_type = copy._type;
	return *this;
}

void WrongDog::makeSound() const
{
	std::cout << C_BLUE << "Who let the WrongDog Sound\n" << C_NRML;
	std::cout << C_BLUE << "mung-mung!! bow-wow!!\n" << C_NRML;
}
