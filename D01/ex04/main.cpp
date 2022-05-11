#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>

int main(int ac, char **av)
{
	std::string s1;
	std::string s2;
	if (ac != 4)
	{
		std::cout << "Wrong input" << std::endl;
		return (1);
	}
	s1 = av[2];
	s2 = av[3];
	std::cout << s1 << std::endl;
	std::string const fichier("test.txt");
	std::ofstream flux(fichier.c_str());

	flux << "bonjourskdf" << std::endl;

	return (0);
}
