#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
	this->type = "WrongAnimal";
	std::cout << "Default constructor called! (WrongAnimal)" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& obj)
{
	*this = obj;
	std::cout << "Copy constructor called! (WrongAnimal)" << std::endl;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "Destructor called! (WrongAnimal)" << std::endl;
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << this->type << " made a sound!" << std::endl;
}

std::string	WrongAnimal::getType(void) const
{
//	std::cout << "type = " << this->type << std::endl;
	return this->type;
}
