#include "PresidentPardonForm.hpp"

PresidentPardonForm::PresidentPardonForm(void): Form("PresidentPardonForm", 25, 5)
{
	std::cout << "Default constructor called (PresidentPardonForm)" << std::endl;
	this->target = "no target";
}

PresidentPardonForm::PresidentPardonForm(std::string n_target): Form("PresidentPardonForm", 25, 5)
{
	std::cout << "Typed constructor called (PresidentPardonForm)" << std::endl;
	this->target = n_target;
}

PresidentPardonForm::PresidentPardonForm(const PresidentPardonForm& obj): Form(obj)
{
	this->target = obj.target;
}

PresidentPardonForm::~PresidentPardonForm(void)
{
}

PresidentPardonForm&	PresidentPardonForm::operator=(const PresidentPardonForm& obj)
{
	this->target = obj.target;
        this->setSign(obj.getSign());
	return *this;
}

void	PresidentPardonForm::executeForm(void) const
{
	std::cout << this->target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}

Form*   PresidentPardonForm::clone(std::string target)
{
        Form *  clone = new PresidentPardonForm(target);
        return clone;
}
