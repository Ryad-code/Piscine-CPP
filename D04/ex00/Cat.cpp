#include "Cat.hpp"

Cat::Cat(void)
{
	this->type = "";
	std::cout << "Default constructor called! (Cat)" << std::endl;
}

Cat::Cat(std::string type)
{
	this->type = type;
	std::cout << this->type << " is born! (Cat)" << std::endl;
}

Cat::Cat(const Cat& obj)
{
	*this = obj;
	std::cout << "Copy constructor called! (Cat)" << std::endl;
}

Cat::~Cat(void)
{
	std::cout << "Destructor called! (Cat)" << std::endl;
}

void	Cat::makeSound(void)
{
	std::cout << this->type << ": Miaou Miaou!" << std::endl;
}
