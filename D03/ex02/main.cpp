#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
//	ClapTrap	obj1("ryad");
//	ClapTrap	obj2(obj1);

	FragTrap	frag_obj2("amine");
	FragTrap	frag_obj1(frag_obj2);

//	scav_obj2 =  scav_obj1;

//	obj1.attack("Amine");
//	obj1.beRepaired(10);
//	obj1.takeDamage(8);

//	obj2.attack("tout le monde");

	frag_obj2.attack("the big monster");
	frag_obj2.highFiveGuys();

	frag_obj2.takeDamage(8);
	frag_obj2.beRepaired(10);


	return 0;
}
