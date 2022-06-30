#include "EasyFind.hpp"
#include <string>
#include <stdlib.h>

int main()
{
	std::vector<int>	vec;			//Declaration vector
	int	i = 5;
	int	j = 7;

	for (int k(0); k < 6; k++)			//Remplissage
		vec.push_back(k);

	for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); it++)//Affichage
		std::cout << *it << " ";
	std::cout << std::endl;

	try
	{
		easyfind(vec, i);			//Appel a EasyFind in range (5)
	}
	catch(const std::exception& e)
	{
		std::cerr << i << e.what() << '\n';
	}

	try
	{
		easyfind(vec, j);			//Appel a EasyFind out of range (7)
	}
	catch(const std::exception& e)
	{
		std::cerr << j << e.what() << '\n';
	}
	return 0;
}
