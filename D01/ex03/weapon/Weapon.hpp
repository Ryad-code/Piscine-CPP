#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <iomanip>
#include <string>

class	Weapon
{
	private:
		std::string type;

	public:
		Weapon(std::string weapon_name);
		~Weapon(void);
		const std::string& getType(void);
		void	setType(std::string new_type);
};

#endif
