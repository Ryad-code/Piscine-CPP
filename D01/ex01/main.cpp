#include "Zombie.hpp"

int main()
{
	Zombie zombie1;
	zombie1.setname("Ryad");
	zombie1.announce();

	Zombie* horde = zombieHorde(5, "Patrick");
	for (int i = 0; i < 5; i++)
		horde[i].announce();
	
	delete [] horde;
	return (0);
}
