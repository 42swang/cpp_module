#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"

int main()
{
    Animal *test = new Dog(); //Animal로 바꿨을 때 생성되지 않아야 함
    test->makeSound();
    delete test;
    return (0);
}