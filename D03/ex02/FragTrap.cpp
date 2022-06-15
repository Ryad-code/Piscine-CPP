#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	this->name = "";
	this->hit_pts = 100;
	this->energy_pts = 100;
	this->attack_dmg = 30;
	std::cout << "Default constructor called (FragTrap)" << std::endl;
}

FragTrap::FragTrap(std::string name)
{
	this->name = name;
        this->hit_pts = 100;
        this->energy_pts = 100;
        this->attack_dmg = 30;
        std::cout << "FragTrap " << this->name << " is born!" << std::endl;
}

FragTrap::FragTrap(const FragTrap& obj)
{
	*this = obj;
	std::cout << "Copy constructor called (FragTrap)" << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap " << this->name << " is dead!" << std::endl;
}

void	FragTrap::highFiveGuys(void)
{
	std::cout << "Hight Five guys ?" << std::endl;
}
