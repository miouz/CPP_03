#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap():
	ClapTrap()
{
	std::cout << "ScavTrap default constructor called\n";
	hitPoints_ = 100;
	energyPoints_ = 50;
	attackDammage_ = 20;
}

ScavTrap::ScavTrap(const std::string& name):
	ClapTrap(name)
{
	std::cout << "ScavTrap constructor called\n";
	hitPoints_ = 100;
	energyPoints_ = 50;
	attackDammage_ = 20;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called\n";
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap is now in Gate keeper mode\n";
}
