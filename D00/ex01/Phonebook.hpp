#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class Phonebook
{
	private:
		Contact	contacts[8];
		int	index;
		bool	full;
		bool	empty;

	public:
		void	phonebook(void);
		void	add(void);
		int	search(void);
};

#endif
