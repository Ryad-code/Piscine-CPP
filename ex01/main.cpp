#include "phonebook.hpp"

int main()
{
	Phonebook phonebook;
	bool res;
	std::string str;

	res = true;
	while (res)
	{
		std::cout << ">";
		std::getline(std::cin, str);
		if (str == "START")
			phonebook.start();
		else if (str == "SHOW")
			phonebook.show();
		else if (str == "EXIT")
		{
			std::cout << "END" << std::endl;
			res = false;
		}
	}
	return 0;
}

	
