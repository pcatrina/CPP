#ifndef MODULE03_NINJATRAP_HPP
#define MODULE03_NINJATRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "ClapTrap.hpp"

#include <iostream>
#include <sys/time.h>

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

class NinjaTrap : public ScavTrap, public FragTrap
{
public:
	NinjaTrap();
	NinjaTrap(std::string const &name);
	virtual void rangedAttack(std::string const &target);
	virtual void meleeAttack(std::string const &target);
	void ninjaShoebox(FragTrap &frag);
	void ninjaShoebox(ScavTrap &scav);
	void ninjaShoebox(NinjaTrap &frag);
	virtual ~NinjaTrap();
};


#endif //MODULE03_NINJATRAP_HPP
