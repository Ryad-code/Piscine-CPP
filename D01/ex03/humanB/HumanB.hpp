#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "../weapon/Weapon.hpp"

class HumanB
{
	private:
		std::string name;
		Weapon *weapon_ptr;

	public:
		HumanB(std::string name_b);
		void	setWeapon(Weapon& weapon_b);
		void	attack(void);
};

#endif
