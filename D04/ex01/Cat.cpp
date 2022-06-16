#include "Cat.hpp"

Cat::Cat(void)
{
	this->type = "Cat";
	this->cat_brain = new Brain();
	std::cout << "Default constructor called! (Cat)" << std::endl;
}

Cat::Cat(const Cat& obj)
{
	*this = obj;
	std::cout << "Copy constructor called! (Cat)" << std::endl;
}

Cat::~Cat(void)
{
	delete this->cat_brain;
	std::cout << "Destructor called! (Cat)" << std::endl;
}

void	Cat::makeSound(void) const
{
	std::cout << this->type << ": Miaou Miaou!" << std::endl;
}

void	Cat::getCatIdeas(void) const
{
	this->cat_brain->getIdeas();
}
