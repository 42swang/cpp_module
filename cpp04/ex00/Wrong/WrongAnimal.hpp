#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>
# define C_NRML "\033[0m"  // normal color
# define C_RED  "\033[31m" // attack, damage
# define C_GREN "\033[32m" // repair
# define C_YLLW "\033[33m" // called
# define C_BLUE "\033[34m" // name

class WrongAnimal
{
protected:
	std::string _type;
public:
	WrongAnimal();
	WrongAnimal(const WrongAnimal& copy);
	WrongAnimal& operator=(const WrongAnimal& copy);
	virtual ~WrongAnimal();
	void	makeSound() const;
	std::string getType() const;
};

#endif