#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
# define C_NRML "\033[0m"  // normal color
# define C_RED  "\033[31m" // attack, damage
# define C_GREN "\033[32m" // repair
# define C_YLLW "\033[33m" // called
# define C_BLUE "\033[34m" // name

class Animal
{
protected:
	std::string _type;
public:
	Animal();
	Animal(const Animal& copy);
	Animal& operator=(const Animal& copy);
	virtual ~Animal();
	virtual void	makeSound() const;
	std::string getType() const;
};

#endif