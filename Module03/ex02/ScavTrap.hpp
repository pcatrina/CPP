#ifndef MODULE03_SCAVTRAP_HPP
#define MODULE03_SCAVTRAP_HPP

#include <iostream>
#include <sys/time.h>
#include "ClapTrap.hpp"

#define COD_STY_ITL "\x1B[3m"
#define COD_STY_BLD "\x1B[1m"
#define COD_STY_UND "\x1B[4m"

#define COL_RED "\x1b[31m"
#define COL_GRE "\x1b[32m"
#define COL_YEL "\x1b[33m"
#define COL_BLU "\x1b[34m"
#define COL_MAG "\x1b[34m"
#define COL_CYN "\x1b[36m"

#define COL_RES	"\x1b[0m"

class ScavTrap : virtual public ClapTrap
{
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
public:
	ScavTrap(std::string const &name);
	void challengeNewcomer(std::string const &target);
	~ScavTrap();
};


#endif //MODULE03_SCAVTRAP_HPP
