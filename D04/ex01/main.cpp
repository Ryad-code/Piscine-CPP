#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	Animal	test(*j);

	Animal	*test1 = new Dog();

	test.makeSound();
	std::cout << test.getType() << std::endl;
	test1->makeSound();
	std::cout << test1->getType() << std::endl;
	delete j;//should not create a leak
	delete i;
	
	return 0;
}
