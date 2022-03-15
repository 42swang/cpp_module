#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
private:
	Brain * _brain;
public:
	Cat();
	Cat(const Cat& copy);
	~Cat();
	Cat& operator=(const Cat& copy);
	void	makeSound() const;
	Brain& getBrain() const;
};

#endif