#ifndef MODULE04_PLASMARIFLE_HPP
#define MODULE04_PLASMARIFLE_HPP

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

class PlasmaRifle : public AWeapon
{
public:
	PlasmaRifle();
	PlasmaRifle(const PlasmaRifle &plasmaRifle);
	PlasmaRifle &operator=(const PlasmaRifle &plasmaRifle);
	virtual void attack() const;
	virtual ~PlasmaRifle();
};


#endif //MODULE04_PLASMARIFLE_HPP
