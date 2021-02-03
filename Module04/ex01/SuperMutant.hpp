#ifndef MODULE04_SUPERMUTANT_HPP
#define MODULE04_SUPERMUTANT_HPP

#include "Enemy.hpp"

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

class SuperMutant : public Enemy
{
public:
	SuperMutant();
	SuperMutant(const SuperMutant &superMutant);
	virtual ~SuperMutant();
	SuperMutant &operator=(const SuperMutant &superMutant);
	virtual void takeDamage(int);
};


#endif //MODULE04_SUPERMUTANT_HPP
