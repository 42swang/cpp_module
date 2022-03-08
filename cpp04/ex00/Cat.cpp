#include "Cat.hpp"

Cat::Cat()
{
	std::cout << C_YLLW << "Cat default constructor called\n" << C_NRML;
	this->_type = "Cat";
}

Cat::Cat(const Cat& copy)
{
	std::cout << C_YLLW << "Cat copy constructor called\n" << C_NRML;
	*this = copy;
}

Cat::~Cat()
{
	std::cout << C_YLLW << "Cat default destoructor called\n" << C_NRML;
}

Cat& Cat::operator=(const Cat& copy)
{
	if (this == &copy)
		return *this;
	this->_type = copy._type;
	return *this;
}

void Cat::makeSound() const
{
	std::cout << C_YLLW << "Who let the Cat Sound\n" << C_NRML;
	std::cout << C_YLLW << "ay~ong~ meow~~\n" << C_NRML;
}
