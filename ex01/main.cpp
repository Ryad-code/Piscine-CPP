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
		else if (str == "ADD")
			phonebook.add();
		else if (str == "EXIT")
			res = false;
		else
		{
			std::cout << ">UNKNOWN COMMAMD" << std::endl;
			std::cout << "Retry with \"ADD\" \"SHOW\" or \"EXIT\"" << std::endl;
		}
	}
	return 0;
}

	
