#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
	this->name = name;
	this->hit_pts = 10;
	this->energy_pts = 10;
	this->attack_dmg = 0;
	std::cout << "ClapTrap " << this->name << " is born!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& obj)
{
//	this->name = obj->name;
//	this->hit_pts = obj->hit_pts;
//	this->energy_pts = obj->energy_pts;
//	this->attack_dmg = obj->attack_dmg;
	*this = obj;	
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap " << this->name << " is dead!" << std::endl;
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->energy_pts > 0 && this->hit_pts > 0)
	{
		std::cout << "ClapTrap " << this->name << " attacks " << target << " causing "
		<< this->attack_dmg << " points of damage!" << std::endl;
		this->energy_pts--;
	}
	else
		std::cout << "Claptrap " << this->name << " can not attack!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << this->name << " suffered " << amount << 
	" points of damage!" << std::endl;
	this->hit_pts -= amount;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->energy_pts > 0 && this->hit_pts > 0)
	{
		std::cout << "Claptrap " << this->name << " repaired itslef and gained " << amount << " hit points" << std::endl;
		this->energy_pts--;
		this->hit_pts += amount;
	}
	else
		std::cout << "Claptrap " << this->name << " can not repair itself!" << std::endl;
}

//....................................................................Operators

ClapTrap&          ClapTrap::operator=(const ClapTrap& obj)
{
        if (this != &obj)
	{
		this->name = obj.name;
		this->hit_pts = obj.hit_pts;
 		this->energy_pts = obj.energy_pts;
		this->attack_dmg = obj.attack_dmg;
	}
        return *this;
}
