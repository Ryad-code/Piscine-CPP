#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
	this->type = "WrongCat";
	std::cout << "Default constructor called! (WrongCat)" << std::endl;
}

WrongCat::WrongCat(const WrongCat& obj)
{
	*this = obj;
	std::cout << "Copy constructor called! (WrongCat)" << std::endl;
}

WrongCat::~WrongCat(void)
{
	std::cout << "Destructor called! (WrongCat)" << std::endl;
}

void	WrongCat::makeSound(void) const
{
	std::cout << this->type << ": Miaou Miaou!" << std::endl;
}
