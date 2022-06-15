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
		~Animal(void);

		void	makeSound(void);
};

#endif
