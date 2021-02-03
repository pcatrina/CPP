#include "SuperMutant.hpp"

SuperMutant::SuperMutant() : Enemy(170, "Super Mutant")
{
	std::cout<<"\U0001F916\t"<< COD_STY_BLD<<COL_RED
	<< "Gaaah. Me want smash heads!"<<COL_RES<<std::endl;
}

SuperMutant::SuperMutant(const SuperMutant &superMutant):Enemy(superMutant
.getHp(), superMutant.getType())
{
	std::cout<< COD_STY_BLD<<COL_RED<< "Gaaah. Me want smash heads!"<<COL_RES<<
	std::endl;
}

SuperMutant & SuperMutant::operator=(const SuperMutant &superMutant)
{
	Enemy::operator=(superMutant);
	return (*this);
}

SuperMutant::~SuperMutant()
{
	std::cout<<"\U00002620\t"<<COD_STY_ITL
	<<COL_GRE<< "Aaargh..."<<COL_RES<< std::endl;
}

void SuperMutant::takeDamage(int damage)
{
	if (damage > 0)
		Enemy::takeDamage(damage - 3);
}