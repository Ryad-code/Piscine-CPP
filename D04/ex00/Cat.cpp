#include "Cat.hpp"

Cat::Cat(void)
{
	this->type = "Cat";
	std::cout << "Default constructor called! (Cat)" << std::endl;
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

void	Cat::makeSound(void) const
{
	std::cout << this->type << ": Miaou Miaou!" << std::endl;
}
