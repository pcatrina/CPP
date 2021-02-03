#ifndef MODULE04_POWERFIST_HPP
#define MODULE04_POWERFIST_HPP

#include "AWeapon.hpp"

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

class PowerFist : public AWeapon
{
public:
	PowerFist();
	PowerFist(const PowerFist &powerFist);
	PowerFist &operator=(const PowerFist &powerFist);
	virtual void attack() const;
	virtual ~PowerFist();
};


#endif //MODULE04_POWERFIST_HPP
