#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* i = new Cat();
	const Animal* j = new Dog(); //포인터가 상위클래스
	std::cout << C_YLLW << i->getType() << " " << std::endl << C_NRML;
	std::cout << C_BLUE << j->getType() << " " << std::endl << C_NRML;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	delete meta;
	delete i;
	delete j;
}