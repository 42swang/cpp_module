#include "Dog.hpp"

Dog::Dog()
{
	std::cout << C_BLUE << "Dog default constructor called\n" << C_NRML;
	this->_brain = new Brain();
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
	delete this->_brain;
}

Dog& Dog::operator=(const Dog& copy)
{
	std::cout<< C_BLUE << "Dog operator= called\n"<< C_NRML;
	if (this == &copy)
		return *this;
	this->_type = copy._type;
	this->_brain = new Brain(*(copy._brain));
	return *this;
}

void Dog::makeSound() const
{
	std::cout << C_BLUE << "Who let the Dog Sound\n" << C_NRML;
	std::cout << C_BLUE << "mung-mung!! bow-wow!!\n" << C_NRML;
}

Brain& Dog::getBrain() const
{
	return(*_brain);
}