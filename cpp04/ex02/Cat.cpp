#include "Cat.hpp"

Cat::Cat()
{
	std::cout << C_YLLW << "Cat default constructor called\n" << C_NRML;
	this->_brain = new Brain();
	this->_type = "Cat";
}

Cat::Cat(const Cat& copy) : Animal(copy)
{
	std::cout << C_YLLW << "Cat copy constructor called\n" << C_NRML;
	*this = copy;
}

Cat::~Cat()
{
	std::cout << C_YLLW << "Cat default destoructor called\n" << C_NRML;
	delete _brain;
}

Cat& Cat::operator=(const Cat& copy)
{
	std::cout<< C_YLLW << "Cat operator= called\n"<< C_NRML;
	if (this == &copy)
		return *this;
	this->_type = copy._type;
	this->_brain = new Brain(*(copy._brain));
	return *this;
}

void Cat::makeSound() const
{
	std::cout << C_YLLW << "Who let the Cat Sound\n" << C_NRML;
	std::cout << C_YLLW << "ay~ong~ meow~~\n" << C_NRML;
}

Brain& Cat::getBrain() const
{
	return(*_brain);
}
