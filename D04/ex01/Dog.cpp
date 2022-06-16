#include "Dog.hpp"

Dog::Dog(void)
{
	this->type = "Dog";
	this->dog_brain = new Brain();
	std::cout << "Default constructor called! (Dog)" << std::endl;
}

Dog::Dog(const Dog& obj)
{
	this->dog_brain = new Brain(*obj.dog_brain);
	std::cout << "Copy constructor called! (Dog)" << std::endl;
}

Dog::~Dog(void)
{
	delete this->dog_brain;
	std::cout << "Destructor called! (Dog)" << std::endl;
}

void	Dog::makeSound(void) const
{
	std::cout << this->type << ": Wouaf Wouaf!" << std::endl;
}

void	Dog::getDogIdeas(void) const
{
	this->dog_brain->getIdeas();
}

Dog&    Dog::operator=(const Dog& obj)
{
	if (this != &obj)
	{
		delete this->dog_brain;
		this->dog_brain = new Brain(*obj.dog_brain);
	}
	return *this;
}
