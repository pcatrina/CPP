#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 5, 21)
{
}

PlasmaRifle::PlasmaRifle(const PlasmaRifle &plasmaRifle) : AWeapon(plasmaRifle
.getName(), plasmaRifle.getApcost(), plasmaRifle.getDamage())
{
}
PlasmaRifle &PlasmaRifle::operator=(const PlasmaRifle &plasmaRifle)
{
	AWeapon::operator=(plasmaRifle);
	return (*this);
}

void PlasmaRifle::attack() const
{
	std::cout<<"\U000026A1\t" <<COL_YEL
	<< "* piouuu piouuu piouuu *"<<COL_RES<<std::endl;
}

PlasmaRifle::~PlasmaRifle()
{
}
