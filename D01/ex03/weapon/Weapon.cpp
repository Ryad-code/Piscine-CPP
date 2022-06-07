#include "Weapon.hpp"

Weapon::Weapon(std::string weapon_name)
{
	this->type = weapon_name;
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

Weapon::~Weapon(void)
{
}
