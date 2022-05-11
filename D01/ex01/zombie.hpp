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
		Zombie();
		void	setname(std::string name);
		void    announce(void);

};

#endif
