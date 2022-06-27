#include <iostream>
#include <stdlib.h>
#include "Base.hpp"

int	random(int min, int max)
{
	srand(time(NULL));
	return min + rand() % (( max + 1 ) - min);
}

Base * generate(void)
{
	int	n = random(1,3);
	char	c = 64 + n;
	Base	*obj;

	std::cout << "Type: " << c << " has been instanced!" << std::endl;
	switch (n)
	{
		case 1:
			obj = new A();
			break;
		case 2:
			obj = new B();
                        break;
		case 3:
                        obj = new C();
                        break;
		default:
			std::cout << "UNEXECPTED BEHAVIOR. I DESERVE 0/100" << std::endl;
			obj = new Base();
	}
	return obj;
}

void	identify(Base *p)
{
	if (A* typeA = dynamic_cast<A *>(p))
		std::cout << "A" << std::endl;
	else if (B* typeB = dynamic_cast<B *>(p))
		std::cout << "B" << std::endl;
	else if (C* typeC = dynamic_cast<C *>(p))
		std::cout << "C" << std::endl;
}

void	identify(Base &p)
{
	try
	{
		A	&typeA = dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
		(void) typeA;
	}
	catch (std::exception & e) {};
	try
	{
		B	&typeB = dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
		(void) typeB;
	}
	catch (std::exception & e) {};
	try 
	{
		C	&typeC = dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
		(void) typeC;
	}
	catch (std::exception & e) {};
}

int		main() {
	Base *p = generate();
	std::cout << std::endl << "\033[3;4mIdentification par pointeur :\033[m" << std::endl;
	identify(p);
	std::cout << std::endl << "\033[3;4mIdentification par référence :\033[m" << std::endl;
	identify(*p);
	delete p;
	return 0;
}
