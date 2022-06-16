#include "Dog.hpp"

Dog::Dog(void)
{
	this->type = "Dog";
	std::cout << "Default constructor called! (Dog)" << std::endl;
}

Dog::Dog(const Dog& obj)
{
	*this = obj;
	std::cout << "Copy constructor called! (Dog)" << std::endl;
}

Dog::~Dog(void)
{
	std::cout << "Destructor called! (Dog)" << std::endl;
}

void	Dog::makeSound(void) const
{
	std::cout << this->type << ": Wouaf Wouaf!" << std::endl;
}
