#include "phonebook.hpp"

void	Phonebook::phonebook(void)
{
	this->index = 1;
	this->full = false;
	std::cout << "> STARTING PHONEBOOK" << std::endl;
}

int	Phonebook::search()
{
	Contact contact;
	std::string str;
	int	i;
	int	j;
	int	id;
	bool	valid_id;

	i = 1;
	valid_id = 0;
	if (this->full == false)
		j = this->index;
	else
		j = 9;
	std::cout << "|-------------------------------------------|" << std::endl;
	std::cout << "|    ID    |FISRT NAME|LAST NAME | NICKNAME |" << std::endl;
	while (i < j)
	{
		contact = this->contacts[i];
		contact.show();
		i++;
	}
	std::cout << "|-------------------------------------------|" << std::endl;
	std::cout << " SELECT ID" << std::endl << ">";
	std::getline(std::cin, str);
	valid_id = (str.find_first_not_of( "0123456789" ) == std::string::npos);
	if (valid_id == 0)
	{
		std::cout << "WRONG ID" << std::endl;
		return (1);
	}
	std::cout << valid_id << std::endl;
	id = std::stoi(str, NULL, 10);
	if (id >= 0 && id <= j)
	{
		contact = this->contacts[id];
		contact.show();
	}
	else
		std::cout << "WRONG ID" << std::endl;
	return (0);
}

void	Phonebook::add(void)
{
	Contact contact;
	int	res;

	res = 1;
	while (res == 1)
		res = contact.add(this->index);
	this->contacts[this->index] = contact;
	this->index++;
	if (this->index == 8)
	{
		this->index = 0;
		this->full = true;
	}
}
