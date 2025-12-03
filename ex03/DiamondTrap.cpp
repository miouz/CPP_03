#include "DiamondTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

DiamondTrap::DiamondTrap():
	ClapTrap("_clap_name"), FragTrap(), ScavTrap()
{
	std::cout << "DiamondTrap defaut constructor called\n";
	name_ = "";
	hitPoints_ = 100;
	energyPoints_ = 50;
	attackDammage_ = 30;
}


DiamondTrap::DiamondTrap(const std::string& name):
	ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name)
{
	std::cout << "DiamondTrap constructor called\n";
	name_ = name;
	hitPoints_ = 100;
	energyPoints_ = 50;
	attackDammage_ = 30;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor called\n";
}

void DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
	std::cout << "I'm the greatest DiamondTrap " << name_ << std::endl
		<< "My ClapTrap name is " << ClapTrap::name_ << std::endl
		<< "I'm wierd\n";
}
