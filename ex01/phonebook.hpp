#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>

class Phonebook
{
	private:
		std::string c0;
		std::string c1;
		std::string c2;
		std::string c3;
		std::string c4;
		std::string c5;
		std::string c6;
		std::string c7;
		int	nb;
	
	public:
		void	start(void);
		void	show(void);
		void	add(void);
};

#endif
