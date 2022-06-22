#include "Bureaucrat.hpp"

int main()
{
//	Bureaucrat Ryad;
//	Bureaucrat amine("amine", 250);
	try
	{
		Bureaucrat amine("amine", 250);
	}
	catch(std::exception & error)
	{
		std::cout << error.what() << std::endl;
	}

//	std::cout << Ryad << std::endl;
//	std::cout << amine << std::endl;

	return 0;
}
