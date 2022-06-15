#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
//	ClapTrap	obj1("ryad");
//	ClapTrap	obj2(obj1);

	ScavTrap	scav_obj2("amine");
//	ScavTrap	scav_obj2;

//	scav_obj2 =  scav_obj1;

//	obj1.attack("Amine");
//	obj1.beRepaired(10);
//	obj1.takeDamage(8);

//	obj2.attack("tout le monde");

	scav_obj2.attack("the big monster");
	scav_obj2.guardGate();

	scav_obj2.takeDamage(8);
	scav_obj2.beRepaired(10);


	return 0;
}
