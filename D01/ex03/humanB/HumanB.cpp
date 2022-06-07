#include "HumanB.hpp"

HumanB::HumanB(std::string name_b) : name(name_b)
{
	weapon_ptr = NULL;
}

void	HumanB::setWeapon(Weapon& weapon_b)
{
	this->weapon_ptr = &weapon_b;
}

void	HumanB::attack(void)
{
	if (weapon_ptr)
		std::cout << this->name << " attacks with his " << this->weapon_ptr->getType() << std::endl;
	else
		std::cout << this->name << " has no weapon" << std::endl;
}
