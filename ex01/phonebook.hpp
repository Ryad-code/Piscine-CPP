#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

//#include <iostream>
#include "contact.hpp"

class Phonebook
{
	private:
//		std::string	tab[8];
		Contact		contacts[8];
		int	index;
	
	public:
		void	start(void);
		void	show(void);
		void	add(void);
		void	search(void);
};

#endif
