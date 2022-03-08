#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout<< "WrongAnimal default constructor called\n";
	this->_type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(const WrongAnimal& copy)
{
	std::cout << "WrongAnimal copy constructor called\n";
	*this = copy;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal default destoructor called\n";
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& copy)
{
	if (this == &copy)
		return *this;
	this->_type = copy._type;
	return *this;
}

void WrongAnimal::makeSound() const
{
	std::cout << "insignificant sound\n";
}

std::string WrongAnimal::getType() const
{
	return this->_type;
}