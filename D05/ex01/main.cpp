#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	try
	{
		Bureaucrat amine("amine", 9);
		Form    form1("form1", 10, 10);

		std::cout << form1 << std::endl;
		form1.beSigned(amine);
		amine.signForm(form1);
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
