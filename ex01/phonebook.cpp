#include "phonebook.hpp"

void	Phonebook::start(void)
{
	this->index = 0;
	std::cout << ">STARTING PHONEBOOK" << std::endl;
	std::cout << "Number of contatcs : ";
	std::cout << this->index << std::endl;
}

void	Phonebook::show(void)
{
	Contact contact;
	int i;

	i = 0;
	if (this->index == 0)
		std::cout << ">EMPTY PHONEBOOK" << std::endl;
	else
		std::cout << "|-------------------------------------------|" << std::endl;
		std::cout << "|    ID    |FISRT NAME|LAST NAME | NICKNAME |" << std::endl;
		while (i < this->index)
		{
			contact = this->contacts[i];
			contact.show();
			i++;
		}
		std::cout << "|-------------------------------------------|" << std::endl;
}

void	Phonebook::search(void)
{
	
}

void	Phonebook::add(void)
{
	Contact contact;

	if (this->index == 7)
		std::cout << "THE PHONEBOOK IS FULL" << std::endl;
	else
	{
		contact.add(this->index);
		this->contacts[index] = contact;
		this->index++;
	}

}
