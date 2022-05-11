#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <iomanip>
#include <string>

class Zombie
{
	private:
		std::string name;
	
	public:
		Zombie(std::string n);
		void    announce(void);

};

#endif
