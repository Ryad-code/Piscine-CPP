#include <vector>
#include <iterator>
#include <iostream>
#include <stdlib.h>
#include "Span.hpp"

int		random(int min, int max) //range : [min, max]
{
	static bool first = true;
	if (first) {
		srand( time(NULL) );
		first = false;
	}
	return min + rand() % (( max + 1 ) - min);
}

int main()
{
	Span	obj(10);

	try
	{	
		obj.addNumber(random(0, 100));
		obj.addNumber(random(0, 100));
		obj.addNumber(random(0, 100));
		obj.addNumber(random(0, 100));
		obj.addNumber(random(0, 100));
		obj.addNumber(random(0, 100));
		obj.addNumber(random(0, 100));
		obj.addNumber(random(0, 100));
		obj.addNumber(random(0, 100));
		obj.addNumber(random(0, 100));
	//	obj.addNumber(random(0, 100));

		obj.display();
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "Min = " << obj.shortestSpan() << std::endl;
	std::cout << "Max = " << obj.longestSpan() << std::endl;

/*	std::vector<int> tab;

	for (int i = 0; i != 10; i++)
	{
		tab.push_back(i);
	}

	for (std::vector<int>::iterator it = ; it != obj.tab.end(); it++)
	{
		std::cout << *it << std::endl;
	}*/

	return 0;
}
