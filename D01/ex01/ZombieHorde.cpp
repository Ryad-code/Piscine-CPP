#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	int	i;
	char	c;

	i = 0;
	c = '1';
	Zombie* horde = new Zombie[N];

	while (i < N)
	{
		horde[i].setname(name + c);
		horde[i].announce();
		i++;
		c++;
	}
		return horde;
}
