#ifndef MODULE03_CLAPTRAP_HPP
#define MODULE03_CLAPTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class ClapTrap : public FragTrap, public ScavTrap
{
public:
	ClapTrap(std::string const &name);

private:
	unsigned int	HP;
	unsigned int	MaxHP;
	unsigned int 	EP;
	unsigned int	MaxEP;
	unsigned int	Level;
	std::string 	Name;
	unsigned int	MeleeAttackDamage;
	unsigned int	RangeAttackDamage;
	unsigned int 	ArmorDamageReductions;
};


#endif //MODULE03_CLAPTRAP_HPP
