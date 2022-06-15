#include "Animal.hpp"

Animal::Animal(void)
{
	this->type = "";
	std::cout << "Default constructor called! (Animal)" << std::endl;
}

Animal::Animal(std::string type)
{
	this->type = type;
	std::cout << this->type << " is born! (Animal)" << std::endl;
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

void	Animal::makeSound(void)
{
	std::cout << this->type << " made a sound!" << std::endl;
}
