#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "../weapon/weapon.hpp"

class HumanB
{
	private:
		std::string name;
		Weapon weapon;

	public:
		HumanB(std::string name);
		void	setWeapon(std::string weapon);
		void	attack(void);
};

#endif
