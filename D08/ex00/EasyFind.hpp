#ifndef	EASYFIND_HPP
#define	EASYFIND_HPP

#include <iostream>
#include <iterator>
#include <vector>

class	NotFoundException : public std::exception
{
	public :
			virtual const char* what() const throw() { return " not found in container !" ;}
};

template <typename T>
int	easyfind(T& t, int n)
{
	typename T::iterator	it;

	for (it = t.begin(); it != t.end(); it++) {
		if (*it == n) {
			std::cout << "The number " << n << " is in the container !" << std::endl;
			return n;
		}
	}
	throw NotFoundException();
	return -1;
}

#endif
