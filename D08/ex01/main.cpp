#include <vector>
#include <iterator>
#include <iostream>
#include "Span.hpp"

int main()
{
	Span	obj(10);
	
	obj.addNumber(0);
	obj.addNumber(1);
	obj.addNumber(2);
	obj.addNumber(3);
	obj.addNumber(4);
	obj.addNumber(5);
	obj.addNumber(6);
	obj.addNumber(7);
	obj.addNumber(8);
	obj.addNumber(9);

	obj.display();

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
