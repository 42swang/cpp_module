#include "WrongAnimal.hpp"
#include "WrongDog.hpp"
#include "WrongCat.hpp"

int main()
{
	const WrongAnimal* meta = new WrongAnimal();
	const WrongAnimal* i = new WrongCat();
	const WrongAnimal* j = new WrongDog();
	std::cout << C_YLLW << i->getType() << " " << std::endl << C_NRML;
	std::cout << C_BLUE << j->getType() << " " << std::endl << C_NRML;
	i->makeSound();
	j->makeSound();
	meta->makeSound();
	delete meta;
	delete i;
	delete j;
}