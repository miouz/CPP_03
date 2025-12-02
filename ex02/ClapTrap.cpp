#include "ClapTrap.hpp"
#include <iostream>
#include <string>

ClapTrap::ClapTrap():
name_(""), hitPoints_(10), energyPoints_(10), attackDammage_(0){
	std::cout<< "ClapTrap default constructor called\n";
}

ClapTrap::ClapTrap(const std::string& name):
name_(name), hitPoints_(10), energyPoints_(10), attackDammage_(0){
	std::cout<< "ClapTrap constructor called\n";
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
	std::cout<< "ClapTrap copy constructor called\n";
	*this = other;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
	std::cout << "ClapTrap copy assignment operator called\n";
	if (this == &other)
		return *this;
	this->name_ = other.name_;
	this->hitPoints_ = other.hitPoints_;
	this->energyPoints_ = other.energyPoints_;
	this->attackDammage_ = other.attackDammage_;
	return *this;
}

ClapTrap::~ClapTrap(){
	std::cout << "ClapTrap destructor called\n";
}


std::string& ClapTrap::getName_()
{
	return name_;
}

int	ClapTrap::getHitPoints_()
{
	return hitPoints_;
}

int	ClapTrap::getEnergyPoints_()
{
	return energyPoints_;
}

int	ClapTrap::getAttackDammage_()
{
	return attackDammage_;
}

void ClapTrap::setName_(std::string& name)
{
	name_ = name;
}

void ClapTrap::setHitPoints_(int hitPoints)
{
	hitPoints_ = hitPoints;
}

void ClapTrap::setEnergyPoints_(int energyPoints)
{
	energyPoints_ = energyPoints;
}

void ClapTrap::setAttackDammage_(int attackDammage)
{
	attackDammage_ = attackDammage;
}

void ClapTrap::attack(const std::string& target)
{
	if (this->energyPoints_ > 0 && this->hitPoints_ > 0)
	{
		std::cout << "ClapTrap " << this->name_ << " attacks " << target 
			<< ", causing " << this->attackDammage_ << " points of damage!\n";
		energyPoints_--;
	}
	else
	 	std::cout << "ClapTrap " << this->name_ << " can not attack anymore\n";
}

void ClapTrap::takeDamage(unsigned int amount)
{
	this->hitPoints_ -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	this->hitPoints_ += amount;
}
