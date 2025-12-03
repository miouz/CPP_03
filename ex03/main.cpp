#include "DiamondTrap.hpp"
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
	FragTrap dog("DOG");
	displayInfos(dog);

	ScavTrap cat("CAT");
	displayInfos(cat);

	DiamondTrap cado("CADO");
	displayInfos(cado);

	dog.attack(cat.getName_());
	cat.attack(dog.getName_());
	cado.attack(cat.getName_());
	dog.highFivesGuys();
	cat.guardGate();
	cado.whoAmI();


	return (0);
}
