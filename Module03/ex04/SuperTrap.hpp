#ifndef MODULE03_SUPERTRAP_HPP
#define MODULE03_SUPERTRAP_HPP

#include "NinjaTrap.hpp"
#include "FragTrap.hpp"


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

class SuperTrap : public FragTrap, public NinjaTrap
{
private:
	SuperTrap();
public:
	SuperTrap(std::string const &name);
	virtual void rangedAttack(std::string const &target);
	virtual void meleeAttack(std::string const &target);
	virtual ~SuperTrap();
};


#endif //MODULE03_SUPERTRAP_HPP
