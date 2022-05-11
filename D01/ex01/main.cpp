#include "zombie.cpp"
#include "zombieHorde.cpp"

int main(int ac, char** av)
{
	Zombie zombie1;

	zombie1.setname("Ryad");
	zombie1.announce();

	Zombie* horde = zombieHorde(5, "Patrick");
	
	delete [] horde;
	return (0);
}
