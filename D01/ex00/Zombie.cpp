#include "Zombie.hpp"

Zombie::Zombie(std::string n)
{
	name = n;
}

void	Zombie::announce(void)
{
	std::cout << this->name << ":" << " BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << this->name << " is dead (destructor)" << std::endl;
}
