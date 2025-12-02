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
};

#endif // !SCAVTRAP_HPP_
