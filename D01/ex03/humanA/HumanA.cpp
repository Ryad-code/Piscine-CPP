#include "HumanA.hpp"

HumanA::HumanA(std::string name_a, Weapon& weapon_a) : name(name_a), weapon_ref(weapon_a)
{
}

void	HumanA::attack(void)
{
	std::cout << this->name << " attacks with his " << this->weapon_ref.getType() << std::endl;
}

HumanA::~HumanA(void)
{
}
