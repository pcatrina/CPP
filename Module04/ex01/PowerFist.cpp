#include "PowerFist.hpp"

PowerFist::PowerFist() : AWeapon("Power Fist", 8, 50)
{
}

PowerFist::PowerFist(const PowerFist &powerFist) : AWeapon(powerFist
.getName(),powerFist.getApcost(),powerFist.getDamage())
{
}

PowerFist &PowerFist::operator=(const PowerFist &powerFist)
{
	AWeapon::operator=(powerFist);
	return (*this);
}

void PowerFist::attack() const
{
	std::cout<<"\U0001F4AA\t"<<COL_YEL
	<<"* pschhh... SBAM! *"<<COL_RES<<std::endl;
}

PowerFist::~PowerFist()
{
}