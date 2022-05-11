#include "humanA.hpp"

HumanA::HumanA(std::string name, std::string weapon_name)
{
	this->weapon.setType(weapon_name);
	this->name = name;
}

void	HumanA::attack(void)
{
	std::cout << this->name << " attacks with his " << this->weapon.getType() << std::endl;
}
