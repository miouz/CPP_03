#include "DiamondTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

DiamondTrap::DiamondTrap():
	ClapTrap("_clap_name"), FragTrap(), ScavTrap()
{
	std::cout << "DiamondTrap defaut constructor called\n";
	name_ = "";
	hitPoints_ = FragTrap::hitPoints_;
	energyPoints_ = ScavTrap::energyPoints_;
	attackDammage_ = FragTrap::attackDammage_;
}


DiamondTrap::DiamondTrap(const std::string& name):
	ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name)
{
	std::cout << "DiamondTrap constructor called\n";
	name_ = name;
	hitPoints_ = FragTrap::hitPoints_;
	energyPoints_ = ScavTrap::energyPoints_;
	attackDammage_ = FragTrap::attackDammage_;
	std::cout <<" attackDammage_ from FragTrap is : "<< FragTrap::attackDammage_<<std::endl;
	std::cout <<" attackDammage_ from ScavTrap is : "<< ScavTrap::attackDammage_<<std::endl;
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
