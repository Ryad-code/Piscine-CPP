#include "Zombie.hpp"

Zombie::Zombie()
{
}

void	Zombie::setname(std::string name)
{
	this->name = name;
}

void	Zombie::announce(void)
{
	std::cout << "<" << this->name << ">" << " BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << this->name << " is dead (destructor)" << std::endl;
}
