#include "RadScorpion.hpp"

RadScorpion::RadScorpion() : Enemy(80, "RadScorpion")
{
	std::cout<<"\U0001F47B\t"<< COD_STY_BLD <<COL_RED<< "* click click click *"
	<< COL_RES <<std::endl;
}

RadScorpion::RadScorpion(const RadScorpion &radScorpion):Enemy(radScorpion
.getHp(), radScorpion.getType())
{
	std::cout<<"\U0001F47B\t"<< COD_STY_BLD <<COL_RED<< "* click click click *"
	<< COL_RES <<std::endl;
}

RadScorpion & RadScorpion::operator=(const RadScorpion &radScorpion)
{
	Enemy::operator=(radScorpion);
	return (*this);
}

void RadScorpion::takeDamage(int damage)
{
	if (damage > 0)
		Enemy::takeDamage(damage);
}

RadScorpion::~RadScorpion()
{
	std::cout<<"\U00002620\t"<<COD_STY_ITL<< COL_GRE<<"* SPROTCH *"
	<<COL_RES<<std::endl;
}