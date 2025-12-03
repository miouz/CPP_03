#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap():
	ClapTrap()
{
	std::cout << "FragTrap default constructor called\n";
	hitPoints_ = 100;
	energyPoints_ = 100;
	attackDammage_ = 30;
}

FragTrap::FragTrap(const std::string& name):
	ClapTrap(name)
{
	std::cout << "FragTrap constructor called\n";
	hitPoints_ = 100;
	energyPoints_ = 100;
	attackDammage_ = 30;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called\n";
}

void FragTrap::highFivesGuys(void)
{
	if (this->energyPoints_ > 0 && this->hitPoints_ > 0)
	{
		std::cout << "FragTrap " << name_ << " requests to have a positive high-fives\n";
		energyPoints_--;
	}
	else
	 	std::cout << "FragTrap " << this->name_ << " can not high-fives anymore ORZ\n";
}

void FragTrap::attack(const std::string& target)
{
	if (this->energyPoints_ > 0 && this->hitPoints_ > 0)
	{
		std::cout << "FragTrap " << this->name_ << " attacks " << target 
			<< ", causing " << this->attackDammage_ << " points of damage!\n";
		energyPoints_--;
	}
	else
	 	std::cout << "FragTrap " << this->name_ << " can not attack anymore ORZ\n";
}
