#include "zombie.cpp"
#include "randomChump.cpp"
#include "newZombie.cpp"

int main(int ac, char** av)
{
	Zombie* zombie1 = newZombie("zombie1");
	zombie1->announce();

	randomChump("zombie2");
	return (0);
}
