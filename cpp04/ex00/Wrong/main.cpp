#include "WrongAnimal.hpp"
#include "WrongDog.hpp"
#include "WrongCat.hpp"

int main()
{
	const WrongAnimal* meta = new WrongAnimal();
	const WrongAnimal* j = new WrongDog();
	const WrongAnimal* i = new WrongCat();
	std::cout << C_BLUE << j->getType() << " " << std::endl << C_NRML;
	std::cout << C_YLLW << i->getType() << " " << std::endl << C_NRML;
	i->makeSound(); //will output the WrongCat sound!
	j->makeSound();
	meta->makeSound();
	delete meta;
	delete j;
	delete i;
}