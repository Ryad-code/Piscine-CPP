#include "weapon/weapon.cpp"
#include "humanA/humanA.cpp"
#include "humanB/humanB.cpp"

int main(int ac, char ** av)
{
	HumanA amine("Amine", "Big belly");
	HumanB ryad("Steamade");

	ryad.setWeapon("Baguette de Torkelonia");
	amine.attack();
	ryad.attack();

	return 0;
}
