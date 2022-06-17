#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	const Animal* j = new Dog();
//	const Animal* i = new Cat();

//	Animal	dog = *j;

	delete j;//should not create a leak
//	delete i;
	
	return 0;
}
