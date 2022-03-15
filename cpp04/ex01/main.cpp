#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"

int main()
{
	std::cout << "\n---------- Cat Deep Copy Test -----------\n";
    Cat *cat1 = new Cat();
    cat1->getBrain().setIdeas(0, "I'm so cute\n");
    std::cout << "In cat's brain : " <<
            cat1->getBrain().getIdeas(0) << "\n\n";

    Cat *cat2 = new Cat(*cat1);
    std::cout << "In cat's brain : " << 
                cat2->getBrain().getIdeas(0) << "\n\n";
    
    std::cout << "cat1's brain address : " << &(cat1->getBrain()) << "\n";
    std::cout << "cat2's brain address: " << &(cat2->getBrain()) << "\n\n";
    
    delete cat1;
    std::cout << std::endl;
    delete cat2;

	std::cout << "\n---------- Dog Deep Copy Test -----------\n";
    Dog *dog1 = new Dog();
    dog1->getBrain().setIdeas(0, "I like you");
    std::cout << "In dog's brain : " <<
            dog1->getBrain().getIdeas(0) << "\n\n";

    Dog *dog2 = new Dog(*dog1);
    std::cout << "In dog's brain : " << 
                dog2->getBrain().getIdeas(0) << "\n\n";
    
    std::cout << "dog1's brain address : " << &(dog1->getBrain()) << "\n";
    std::cout << "dog2's brain address: " << &(dog2->getBrain()) << "\n\n";
    
    delete dog1;
    std::cout << std::endl;
    delete dog2;
	
	std::cout << "\n------- Polymorphism & Leaks Test ----------\n";
    int size(10);
    Animal *animals[size];
    for (int i = 0; i < size / 2; i++)
    {
        std::cout << "\n-------------- " << i << " ---------------\n";
        animals[i] = new Cat();
        animals[i]->makeSound();
    }
    for (int i = size / 2; i < size; i++)
    {
        std::cout << "\n-------------- " << i << " ---------------\n";
        animals[i] = new Dog();
        animals[i]->makeSound();
    }
    std::cout << std::endl;
    for (int i = 0; i < size; i++)
    {
        delete animals[i];
        std::cout << std::endl;
    }
    std::cout << system("leaks ex01") << std::endl;

}