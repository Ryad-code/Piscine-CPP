#include "zombie.hpp"

Zombie::Zombie(std::string n)
{
	name = n;
}

void	Zombie::announce(void)
{
	std::cout << "<" << this->name << ">" << " BraiiiiiiinnnzzzZ..." << std::endl;
}
