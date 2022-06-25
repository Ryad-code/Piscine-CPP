#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void): Form("RobotomyRequestForm", 72, 45)
{
	std::cout << "Default constructor called (RobotomyRequestForm)" << std::endl;
	this->target = "no target";
}

RobotomyRequestForm::RobotomyRequestForm(std::string n_target): Form("RobotomyRequestForm", 72, 45)
{
	std::cout << "Typed constructor called (RobotomyRequestForm)" << std::endl;
	this->target = n_target;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& obj): Form(obj)
{
	std::cout << "Copy constructor called (RobotomyRequestForm)" << std::endl;
	this->target = obj.target;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
}

RobotomyRequestForm&	RobotomyRequestForm::operator=(const RobotomyRequestForm& obj)
{
	this->target = obj.target;
	this->setSign(obj.getSign());
	return *this;
}

void	RobotomyRequestForm::executeForm(void) const
{
	int i;

	srand(time(0));
	i = rand() % 2;
	if (i == 1)
		std::cout << this->target << " has been robotomized successfully!" << std::endl;
	else
		std::cout << this->target << " has not been robotomized successfully!" << std::endl;

}
