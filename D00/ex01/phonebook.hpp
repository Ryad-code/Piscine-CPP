#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "contact.cpp"

class Phonebook
{
	private:
		Contact	contacts[8];
		int	index;
		bool	full;

	public:
		void	phonebook(void);
		void	add(void);
		int	search(void);
};

#endif
