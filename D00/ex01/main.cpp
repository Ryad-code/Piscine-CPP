#include "Phonebook.hpp"

int main(int ac, char **av)
{
	Phonebook	phonebook;
	std::string	str;
	bool		res;
	int		result;

	(void)ac;
	(void)av;
	phonebook.phonebook();
	res = true;
	while (res)
	{
		std::cout << ">";
		if (!std::getline(std::cin, str))
		{
			std::cout << "ERROR" << std::endl;
			break;
		}
		else
		{
			if (str == "SEARCH")
				phonebook.search();
			else if (str == "ADD")
				phonebook.add();
			else if (str == "EXIT")
			{
				res = false;
				std::cout << ">END" << std::endl;
			}
		}
		str.clear();
	}
}
