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
	if (this->energyPoints_ > 0)
	{
		std::cout << "ScavTrap is now in Gate keeper mode\n";
		energyPoints_--;
	}
	else
	 	std::cout << "ScavTrap " << this->name_ << " can not guardGate anymore ORZ\n";
}

void ScavTrap::attack(const std::string& target)
{
	if (this->energyPoints_ > 0)
	{
		std::cout << "ScavTrap " << this->name_ << " attacks " << target 
			<< ", causing " << this->attackDammage_ << " points of damage!\n";
		energyPoints_--;
	}
	else
	 	std::cout << "ScavTrap " << this->name_ << " can not attack anymore ORZ\n";
}
