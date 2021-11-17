#include "phonebook.hpp"
/*
Phonebook::Phonebook()
{
	this->nb = 0;
}

Phonebook::~Phonebook()
{
}
*/
void	Phonebook::start(void)
{
	std::string str;

	str = "RYAD";
	this->nb = 1;
	this->c0 = str;
}

/*void	Phonebook::show(void)
{
	int i;

	i = 0;
	while (i < this->nb)
	{
		std::cout << this->tab[i] << std::endl;
		i++;
	}
}*/

void	Phonebook::show(void)
{
	std::cout << this->c0 << std::endl;
	std::cout << this->c1 << std::endl;
	std::cout << this->c2 << std::endl;
	std::cout << this->c3 << std::endl;
	std::cout << this->c4 << std::endl;
	std::cout << this->c5 << std::endl;
	std::cout << this->c6 << std::endl;
	std::cout << this->c7 << std::endl;
}
