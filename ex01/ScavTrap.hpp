#ifndef SCAVTRAP_HPP_
#define SCAVTRAP_HPP_

#include "ClapTrap.hpp"

class	ScavTrap: public ClapTrap
{
	public:
	ScavTrap();
	ScavTrap(const std::string& name);
	~ScavTrap();
	void guardGate();
	void attack(const std::string& target);
};

#endif // !SCAVTRAP_HPP_
