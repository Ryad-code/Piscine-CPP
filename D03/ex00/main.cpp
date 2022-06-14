#include "ClapTrap.hpp"

int main()
{
	ClapTrap	obj1("ryad");
	ClapTrap	obj2(obj1);

	obj1.attack("Amine");
	obj1.beRepaired(10);
	obj1.takeDamage(8);

	obj2.attack("tout le monde");


	return 0;
}
