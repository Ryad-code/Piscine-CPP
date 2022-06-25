#include "Intern.hpp"

Intern::Intern(void)
{
	array[0] = new ShrubberyCreationForm();
	array[1] = new RobotomyRequestForm();
	array[2] = new PresidentPardonForm();
	std::cout << "Default constructor called! (Intern)" << std::endl;
}

Intern::Intern(const Intern& obj)
{
	for (int i = 0; i < 3; i++)
		this->array[i] = obj.array[i];
	std::cout << "Copy constructor called! (Intern)" << std::endl;
}

Intern::~Intern(void)
{
	for (int i = 0; i < 3; i++)
		delete this->array[i];
}

Intern&         Intern::operator=(const Intern& obj)
{
	for (int i = 0; i < 3; i++)
	{
		delete this->array[i];
		this->array[i] = obj.array[i];
	}
	return *this;
}

Form*	Intern::makeForm(std::string form_name, std::string target)
{
	for (int i = 0; i < 3; i++)
	{
		if (form_name == this->array[i]->getName())
		{
			Form* form = this->array[i]->clone(target);
			std::cout << "Intern creates " << *form << std::endl;
			return form;
		}
	}
	throw Intern::InvalidFormNameException();
}
