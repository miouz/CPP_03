#ifndef CLAPTRAP_HPP_
#define CLAPTRAP_HPP_

#include <string>

class ClapTrap
{
	protected:
	std::string	name_;
	int			hitPoints_;
	int			energyPoints_;
	int			attackDammage_;

	public:
	ClapTrap();
	ClapTrap(const std::string& name);
	ClapTrap(const ClapTrap& other);
	ClapTrap& operator=(const ClapTrap& other);
	~ClapTrap();

	//getter and setter
	std::string& getName_();
	int	getHitPoints_();
	int	getEnergyPoints_();
	int	getAttackDammage_();
	void setName_(std::string& name);
	void setHitPoints_(int hitPoints);
	void setEnergyPoints_(int energyPoints);
	void setAttackDammage_(int attackDammage);

	void takeDamage(unsigned int amount);
	void attack(const std::string& target);
	void beRepaired(unsigned int amount);
};

#endif // !CLAPTRAP_HPP_
