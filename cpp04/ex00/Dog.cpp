#include "Dog.hpp"

Dog::Dog()
{
	std::cout << C_BLUE << "Dog default constructor called\n" << C_NRML;
	this->_type = "Dog";
}

Dog::Dog(const Dog& copy)
{
	std::cout << C_BLUE << "Dog copy constructor called\n" << C_NRML;
	*this = copy;
}

Dog::~Dog()
{
	std::cout << C_BLUE << "Dog default destoructor called\n" << C_NRML;
}

Dog& Dog::operator=(const Dog& copy)
{
	if (this == &copy)
		return *this;
	this->_type = copy._type;
	return *this;
}

void Dog::makeSound() const
{
	std::cout << C_BLUE << "Who let the Dog Sound\n" << C_NRML;
	std::cout << C_BLUE << "mung-mung!! bow-wow!!\n" << C_NRML;
}
