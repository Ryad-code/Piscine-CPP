#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "../weapon/weapon.hpp"

class HumanA
{
	private:
		std::string name;
		&Weapon  weapon_ref;

	public:
		HumanA(std::string name, std::string weapon_name);
		void	attack(void);
};

#endif
