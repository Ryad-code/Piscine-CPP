#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>
#include <iostream>


class Brain
{
	private:
		std::string	ideas[100];

	public:
		Brain(void);
		Brain(const Brain& obj);
		~Brain(void);

		void	getIdeas(void) const;
};

#endif
