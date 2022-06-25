#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat amine("amine", 2);
		std::cout << amine << std::endl;
		amine.upGrade();
		std::cout << amine << std::endl;
	}
	catch(std::exception & error)
	{
		std::cout << error.what() << std::endl;
	}
	return 0;
}
