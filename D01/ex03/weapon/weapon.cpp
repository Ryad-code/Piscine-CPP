#include "weapon.hpp"

Weapon::Weapon(void)
{
}

const std::string& Weapon::getType(void)
{
	const std::string &ref = this->type;
	return ref;
}

void	Weapon::setType(std::string new_type)
{
	this->type = new_type;
}
