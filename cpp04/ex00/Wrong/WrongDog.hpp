#ifndef WRONGDOG_HPP
# define WRONGDOG_HPP

#include <iostream>
#include "WrongAnimal.hpp"

class WrongDog : public WrongAnimal
{
public:
	WrongDog();
	WrongDog(const WrongDog& copy);
	~WrongDog();
	WrongDog& operator=(const WrongDog& copy);
	void	makeSound() const;
};


#endif