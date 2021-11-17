#include <iostream>

int main(int ac, char **av)
{
	int	i;
	int	j;

	j = 1;
	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return -1;
	}
	while (j < ac)
	{
		i = 0;
		while (av[j][i])
		{
			std::cout << (char)toupper(av[j][i]);
			i++;
		}
		j++;
	}
	std::cout << std::endl;
	return 0;
}
