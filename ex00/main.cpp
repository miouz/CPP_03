#include "ClapTrap.hpp"
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
	ClapTrap dog("dog");
	ClapTrap cat("cat");

	displayInfos(dog);
	displayInfos(cat);
	dog.attack(cat.getName_());
	displayInfos(dog);
	displayInfos(cat);
	dog.attack(cat.getName_());
	dog.attack(cat.getName_());
	dog.attack(cat.getName_());
	dog.attack(cat.getName_());
	dog.attack(cat.getName_());
	dog.attack(cat.getName_());
	dog.attack(cat.getName_());
	dog.attack(cat.getName_());
	dog.beRepaired(2);
	displayInfos(dog);
	dog.attack(cat.getName_());
	displayInfos(dog);
	displayInfos(cat);
	dog.attack(cat.getName_());
	dog.attack(cat.getName_());
	dog.attack(cat.getName_());

	return (0);
}
