#ifndef	CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
	private:
		std::string name;
		int	hit_pts;
		int	energy_pts;
		int	attack_dmg;

	public:
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap& obj);
		~ClapTrap(void);

		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

		ClapTrap&	operator=(const ClapTrap& obj);
};

#endif
