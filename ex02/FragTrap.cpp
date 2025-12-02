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
	std::cout << "FragTrap " << name_ << " requests to get high at FiveGuys\n";
}
