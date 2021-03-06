#include "Span.hpp"

Span::Span(void)
{
	this->size = 0;
}

Span::Span(unsigned int N)
{
	this->size = N;
}

Span::Span(const Span& obj)
{
	this->size = obj.size;
	Span& tmp = const_cast<Span&>(obj);
	for (std::vector<int>::iterator it = tmp.tab.begin(); it != tmp.tab.end(); it++)
	{
		this->tab.push_back(*it);
	}
}

Span::~Span(void)
{
}

Span&	Span::operator=(const Span& obj)
{
	this->tab.clear();
	this->size = obj.size;
	std::vector<int>::iterator	it;
	Span& tmp = const_cast<Span&>(obj);
	for (it = tmp.tab.begin(); it != tmp.tab.end(); it++)
	{
		this->tab.push_back(*it);
	}
	return *this;
}

void	Span::addNumber(int value)
{
	if (this->tab.size() < this->size)
	{
		this->tab.push_back(value);
	}
	else
		throw VectorIsFull();
}

int	Span::shortestSpan(void)
{
	if (this->tab.size() < 2)
		throw NotEnoughNumbers();
	else
	{
		std::vector<int>	tmp = this->tab;
		std::sort( tmp.begin(), tmp.end());
		return tmp.at(0);
	}
}

int	Span::longestSpan(void)
{
	if (this->tab.size() < 2)
                throw NotEnoughNumbers();
	else
	{
		std::vector<int>        tmp = this->tab;
		std::sort( tmp.begin(), tmp.end());
		return tmp.at(tmp.size() - 1);
	}
}

void	Span::display(void)
{
	for (std::vector<int>::iterator it = this->tab.begin(); it != this->tab.end(); it++)
        {
                std::cout << *it << std::endl;
        }
}

void		Span::addRangeIt(std::vector<int>::iterator first, std::vector<int>::iterator last)
{
	unsigned int i = 0;
	while (first != last && i < this->size) {
		this->addNumber(*first);
		first++;
		i++;
	}
}

