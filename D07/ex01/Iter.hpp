#ifndef		ITER_HPP
# define	ITER_HPP

template <typename T>
void	print(T & a)
{
	std::cout << a << std::endl;
}

template <typename T>
void	increase(T & a)
{
	a += 1;
}

template <typename T>
void	iter(T * adress, unsigned int const length, void f(T & a))
{
	for(unsigned int i(0); i < length; i++)
		f(adress[i]);
}

#endif
