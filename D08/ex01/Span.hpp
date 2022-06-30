#ifndef SPAN_HPP
#define SPAN_HPP

# include <vector>
# include <iterator>
# include <iostream>
#include <algorithm>

class Span
{
	private:
		std::vector<int>	tab;
		unsigned int		size;

	public:
		Span(void);
		Span(unsigned int N);
		Span(const Span& obj);
		~Span(void);

		Span&		operator=(const Span& obj);

		void		addNumber(int value);
		int		shortestSpan(void);
		int		longestSpan(void);
		void		addRangeIt(std::vector<int>::iterator first, std::vector<int>::iterator last);
		void		display(void);

		class	VectorIsFull : public std::exception
		{
			public :
				virtual const char* what() const throw()
				{
					return "Vector is already full.";
				}
		};

		class	NotEnoughNumbers : public std::exception
		{
			public :
				virtual const char* what() const throw()
				{
					return "There is not enough numbers.";
				}
		};

};


#endif
