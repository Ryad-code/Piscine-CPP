#include "zombie.hpp"

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
