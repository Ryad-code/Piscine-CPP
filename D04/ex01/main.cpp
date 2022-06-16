#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	const Dog* j = new Dog();
//	const Animal* i = new Cat();

	Dog	dog(*j);

	delete j;//should not create a leak
//	delete i;
	
	return 0;
}
