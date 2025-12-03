#ifndef DIAMONDTRAP_HPP_
#define DIAMONDTRAP_HPP_

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
	private:
	std::string name_;

	public:
	DiamondTrap();
	DiamondTrap(const std::string& name);
	void attack(const std::string& target);
	void whoAmI();
};

#endif // !DIAMONDTRAP_HPP_
