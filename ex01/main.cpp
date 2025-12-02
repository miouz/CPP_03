#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <string>
#include <iostream>

void displayInfos(ClapTrap& object)
{
	std::cout << "-----------------------------------------------------\n";
	std::cout << "name is " << object.getName_() << std::endl;
	std::cout << "hitPoints_ is " << object.getHitPoints_() << std::endl;
	std::cout << "energyPoints_ is " << object.getEnergyPoints_() << std::endl;
	std::cout << "attackDammage_ is " << object.getAttackDammage_() << std::endl;
	std::cout << "-----------------------------------------------------\n";
}

int main()
{
	ScavTrap dog;
	displayInfos(dog);
	dog.guardGate();

	ScavTrap cat("cat");
	displayInfos(cat);
	cat.guardGate();

	return (0);
}
