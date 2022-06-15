#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	Animal animal("truk");

	Dog rex("Rex");

	Cat kali("Kali");

	animal.makeSound();
	rex.makeSound();
	kali.makeSound();

	return 0;
}
