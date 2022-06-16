#include "Brain.hpp"

Brain::Brain(void)
{
	for (int i = 0; i < 100; i++)
		this->ideas[i] = "Idea ...";
	std::cout << "Default constructor called! (Brain)" << std::endl;
}

Brain::Brain(const Brain& obj)
{
	*this  = obj;
	std::cout << "Copy constructor called! (Brain)" << std::endl;
}

Brain::~Brain(void)
{
	std::cout << "Destructor called! (Brain)" << std::endl;
}

void	Brain::getIdeas(void) const
{
	for (int i = 0; i < 100; i++)
		std::cout << this->ideas[i] << std::endl;
}
