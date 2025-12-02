#ifndef FRAGTRAP_HPP_
#define FRAGTRAP_HPP_

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
	FragTrap();
	FragTrap(const std::string& name);
	~FragTrap();

	void highFivesGuys(void);
};

#endif // !FRAGTRAP_HPP_
