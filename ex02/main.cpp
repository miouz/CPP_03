#include "FragTrap.hpp"
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
	FragTrap dog("dog");
	displayInfos(dog);

	FragTrap cat("cat");
	displayInfos(cat);

	dog.attack(cat.getName_());
	cat.attack(dog.getName_());
	cat.highFivesGuys();
	dog.highFivesGuys();
	displayInfos(dog);
	displayInfos(cat);

	return (0);
}
