#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentPardonForm.hpp"

int main()
{
	try
	{
		Bureaucrat amine("amine", 1);
	

		Form	*form0 = new ShrubberyCreationForm("test.txt");
		Form	*form1 = new RobotomyRequestForm("test.txt");
		Form	*form2 = new PresidentPardonForm("test.txt");

		amine.signForm(*form0);
		amine.signForm(*form1);
		amine.signForm(*form2);
		amine.executeForm(*form0);
		amine.executeForm(*form1);
		amine.executeForm(*form2);
	}
	catch(std::exception & error)
	{
		std::cout << error.what() << std::endl;
	}
	return 0;
}
