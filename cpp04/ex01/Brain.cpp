#include "Brain.hpp"

// Your main will create and fill an Array of Animal half of it will be Dog and the other
// half will be Cat.

Brain::Brain()
{
	std::cout << C_GREN << "Brain default constructor called\n" << C_NRML;
	int i = 0;
	while (i < 100)
	{
		this->_ideas[i] = "";
		i++;
	}
}

Brain::Brain(const Brain& copy)
{
	std::cout << C_GREN << "Brain copy constructor called\n" << C_NRML;
	*this = copy;
}

Brain::~Brain()
{
	std::cout << C_GREN << "Brain default destructor called\n" << C_NRML;
}

Brain& Brain::operator=(const Brain& copy)
{
	std::cout << C_GREN << "Brain operator= called\n" << C_NRML;
	if (this == &copy)
		return (*this);
	int i = 0;
	while (i < 100)
	{
		this->_ideas[i] = copy._ideas[i];
		i++;
	}
	return(*this);
}

void	Brain::setIdeas(int i, std::string idea)
{
	this->_ideas[i] = idea;
}

std::string Brain::getIdeas(int i)
{
	return(this->_ideas[i]);
}
