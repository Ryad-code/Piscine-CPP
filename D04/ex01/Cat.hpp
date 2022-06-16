#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
	private:
		Brain	*cat_brain;

	public:
		Cat(void);
		Cat(const Cat& obj);
		~Cat(void);

		void	makeSound(void) const;
		void	getCatIdeas(void) const;
};

#endif
