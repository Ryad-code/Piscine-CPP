#include <iostream>
#include <string>

int	main(int ac, char** av)
{
	
	if (ac < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	for (int i = 1; i < ac; i++)
	{
		std::string str = av[i];
		for (size_t j = 0; j < str.size(); j++)
		{
			str.at(j) = std::toupper(str.at(j));
		}
		std::cout << str;
		std::cout << " ";
	}
	std::cout << std::endl;
	return (0);
}
