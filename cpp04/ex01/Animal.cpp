#include "Animal.hpp"

Animal::Animal()
{
	std::cout<< "Animal default constructor called\n";
	this->_type = "Animal";
}

Animal::Animal(const Animal& copy)
{
	std::cout << "Animal copy constructor called\n";
	*this = copy;
}

Animal::~Animal()
{
	std::cout << "Animal default destoructor called\n";
}

Animal& Animal::operator=(const Animal& copy)
{
	if (this == &copy)
		return *this;
	this->_type = copy._type;
	return *this;
}

void Animal::makeSound() const
{
	std::cout << "insignificant sound\n";
}

std::string Animal::getType() const
{
	return this->_type;
}