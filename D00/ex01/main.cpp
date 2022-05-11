#include "phonebook.cpp"

int main(int ac, char **av)
{
	Phonebook	phonebook;
	std::string	str;
	bool		res;

	(void)ac;
	(void)av;
	phonebook.phonebook();
	res = true;
	while (res)
	{
		std::cout << ">";
		std::getline(std::cin, str);
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
	return (0);
}
