#include "karen.cpp"

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Wrong inputs" << std::endl;
		return (1);
	}
	Karen karen1;

	karen1.complain(av[1]);
}
