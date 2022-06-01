#include "Phonebook.hpp"

void	Phonebook::phonebook(void)
{
	this->index = 0;
	this->full = false;
	this->empty = true;
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

	i = 0;
	valid_id = 0;
	if (this->empty == true)
		j = 0;
	else if (this->empty == false && this->full == false)
		j = this->index;
	else if (this->full == true)
		j = 8;
	std::cout << "|-------------------------------------------|" << std::endl;
	std::cout << "|    ID    |FIRST NAME|LAST NAME | NICKNAME |" << std::endl;
	while (i < j)
	{
		contact = this->contacts[i];
		contact.show();
		i++;
	}
	if (this->empty == false)
	{
		std::cout << "|-------------------------------------------|" << std::endl;
		std::cout << " SELECT ID" << std::endl << ">";
		std::getline(std::cin, str);
		valid_id = (str.find_first_not_of( "0123456789" ) == std::string::npos);
		if (valid_id == 0 || str.empty())
		{
			std::cout << "WRONG ID" << std::endl;
			return (1);
		}
		id = std::stoi(str, NULL, 10);
		if ((this->full == false && (id < 0 || id > j - 1)) || (this->full == true && (id < 0 || id > 7)))
			std::cout << "WRONG ID" << std::endl;
		else
		{	
			contact = this->contacts[id];
			contact.show();
		}
	}
	return (0);
}

void	Phonebook::add(void)
{
	Contact contact;
	int	res;

	res = 1;
	this->empty = false;
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
