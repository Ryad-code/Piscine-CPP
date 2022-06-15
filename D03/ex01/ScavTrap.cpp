#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	this->name = "";
	this->hit_pts = 100;
	this->energy_pts = 50;
	this->attack_dmg = 20;
	std::cout << "Default constructor called (ScavTrap)" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
	this->name = name;
	this->hit_pts = 100;
	this->energy_pts = 50;
	this->attack_dmg = 20;
	std::cout << "ScavTrap " << this->name << " is born!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& obj)
{
	*this = obj;
	std::cout << "Copy constructor called (ScavTrap)" << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap " << this->name << " is dead!" << std::endl;
}

void	ScavTrap::attack(const std::string& target)
{
	if (this->energy_pts > 0 && this->hit_pts > 0)
        {
                std::cout << "ScavTrap " << this->name << " attacks " << target << " causing "
                << this->attack_dmg << " points of damage!" << std::endl;
                this->energy_pts--;
        }
        else
                std::cout << "ScavTrap " << this->name << " can not attack!" << std::endl;
}

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << this->name << " is in Gate keeper mode!" << std::endl;
}
