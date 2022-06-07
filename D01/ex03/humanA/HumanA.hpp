#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "../weapon/Weapon.hpp"

class HumanA
{
	private:
		std::string name;
		Weapon&  weapon_ref;

	public:
		HumanA(std::string name_a, Weapon& weapon_a);
		~HumanA(void);
		void	attack(void);
};

#endif
