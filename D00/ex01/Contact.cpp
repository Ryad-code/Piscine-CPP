#include "Contact.hpp"

int	Contact::add(int id)
{
	std::string str;

	this->id = id;
	std::cout << "> FIRST NAME: ";
	if (!std::getline(std::cin, str))
		return (-1);
	this->first_name = str;
	std::cout << "> LAST_NAME: ";
	if (!std::getline(std::cin, str))
		return (-1);
	this->last_name = str;
	std::cout << "> NICKNAME: ";
	if (!std::getline(std::cin, str))
		return (-1);
	this->nickname = str;
	std::cout << "> PHONE NUMBER: ";
	if (!std::getline(std::cin, str))
		return (-1);
	this->phone_number = str;
	std::cout << "> DARKEST SECRET: ";
	if (!std::getline(std::cin, str))
		return (-1);
	this->darkest_secret = str;
	if (this->first_name.empty() || this->last_name.empty() || this->nickname.empty() ||
			this->phone_number.empty() || this->darkest_secret.empty())
	{
		std::cout << "EMPTY FIELD(S), PLEASE RETRY" << std::endl;
		return (1);
	}
	std::cout << "DONE" << std::endl;
	return (0);
}

void	Contact::show(void)
{
	std::cout << "|	" << this->id << "  |";
	if (this->first_name.length() > 10)
		std::cout << this->first_name.substr(0, 9) << ".";
	else
		std::cout << std::setw(10) << this->first_name;
	std::cout << "|";
	if (this->last_name.length() > 10)
		std::cout << this->last_name.substr(0, 9) << ".";
	else
		std::cout << std::setw(10) << this->last_name;
	std::cout << "|";
	if (this->nickname.length() > 10)
		std::cout << this->nickname.substr(0, 9) << ".";
	else
		std::cout << std::setw(10) << this->nickname;
	std::cout << "|" << std::endl;
}
