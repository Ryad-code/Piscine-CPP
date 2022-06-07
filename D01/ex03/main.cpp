#include "weapon/Weapon.hpp"
#include "humanA/HumanA.hpp"
#include "humanB/HumanB.hpp"

int main()
{
	Weapon arme1("couteau");
	Weapon arme2("hache");
	HumanA amine("Amine", arme1);
	HumanB ryad("Steamade");

	ryad.setWeapon(arme2);
	amine.attack();
	ryad.attack();

	return 0;
}
