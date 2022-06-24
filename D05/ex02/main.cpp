#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentPardonForm.hpp"

int main()
{
	try
	{
		Bureaucrat amine("amine", 145);
//		Form    form1("form1", 10, 10);
	
//		std::cout << form1 << std::endl;
//		form1.beSigned(amine);
//		amine.signForm(form1);

		Form	*form0 = new ShrubberyCreationForm("test.txt");
		Form	*form1 = new RobotomyRequestForm("test.txt");
		Form	*form2 = new PresidentPardonForm("test.txt");

		amine.signForm(*form0);
		amine.signForm(*form1);
		amine.signForm(*form2);
//		form0->execute();
	}
	catch(std::exception & error)
	{
		std::cout << error.what() << std::endl;
	}

//	Bureaucrat amine("amine", 149);
//	Form    form1("form1", 10, 10);
//	std::cout << form1 << std::endl;

//	form1.beSigned(amine);

//	std::cout << amine << std::endl;

	return 0;
}
