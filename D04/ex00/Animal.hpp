#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
	protected:
		std::string type;

	public:
		Animal(void);
		Animal(std::string type);
		Animal(const Animal& obj);
		virtual ~Animal(void);

		virtual void		makeSound(void) const;
		virtual std::string	getType(void) const;
};

#endif
