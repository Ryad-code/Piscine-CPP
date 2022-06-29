#include <iostream>
#include "Iter.hpp"

int		main() {
	int a[3] = {37, 42, -5};
	std::string	b[4] = {"Salut", "les", "amis", "!"};
	bool	c[4] = {true, true ,false, true};
	float	f[6] = {1.2f, 3.4f, 5.6f, 7.8f, 9.11f, 10.12f};

	std::cout << "PRINT :" << std::endl;
	iter(a, 3, print);
	iter(a, 3, increase);
	std::cout << std::endl;

	std::cout << "INCREASE THEN PRINT :" << std::endl;
	iter(a, 3, print);
	std::cout << std::endl;



	iter(b, 4, print);
	iter(b, 4, increase);
	std::cout << std::endl;

	iter(c, 4, print);
	std::cout << std::endl;

	std::cout << "PRINT :" << std::endl;
	iter(f, 6, print);
	iter(f, 6, increase);
	std::cout << std::endl;

	std::cout << "INCREASE THEN PRINT :" << std::endl;
	iter(f, 6, print);

}
