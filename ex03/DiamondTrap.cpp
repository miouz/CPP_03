#include "DiamondTrap.hpp"
#include <iostream>

DiamondTrap::DiamondTrap():
	ClapTrap("_clap_name"), FragTrap(), ScavTrap()
{
	name_ = "";
	hitPoints_ = FragTrap::hitPoints_;
	energyPoints_ = ScavTrap::energyPoints_;
	attackDammage_ = FragTrap::attackDammage_;
}


DiamondTrap::DiamondTrap(const std::string& name):
	ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name)
{
	name_ = name;
	hitPoints_ = FragTrap::hitPoints_;
	energyPoints_ = ScavTrap::energyPoints_;
	attackDammage_ = FragTrap::attackDammage_;
}

void DiamondTrap::attack(const std::string& target)
{
	if (this->energyPoints_ > 0 && this->hitPoints_ > 0)
	{
		std::cout << "~DiamondTrap " << this->name_ << " attacks " << target 
			<< ", causing " << this->attackDammage_ << " points of damage!\n";
		energyPoints_--;
	}
	else
	 	std::cout << "DiamondTrap " << this->name_ << " can not attack anymore ORZ\n";
}

void DiamondTrap::whoAmI()
{
	std::cout << "I'm the greatest DiamondTrap " << name_ << std::endl
		<< "My ClapTrap name is " << ClapTrap::name_ << std::endl
		<< "now you may kiss my toe\n";
}
