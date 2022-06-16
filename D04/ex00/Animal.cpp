#include "Animal.hpp"

Animal::Animal(void)
{
	this->type = "Animal";
	std::cout << "Default constructor called! (Animal)" << std::endl;
}

Animal::Animal(const Animal& obj)
{
	*this = obj;
	std::cout << "Copy constructor called! (Animal)" << std::endl;
}

Animal::~Animal(void)
{
	std::cout << "Destructor called! (Animal)" << std::endl;
}

void	Animal::makeSound(void) const
{
	std::cout << this->type << " made a sound!" << std::endl;
}

std::string	Animal::getType(void) const
{
//	std::cout << "type = " << this->type << std::endl;
	return this->type;
}
