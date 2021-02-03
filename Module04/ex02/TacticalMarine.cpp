#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine()
{
	std::cout << "Tactical Marine ready for battle!" << std::endl;
}

ISpaceMarine * TacticalMarine::clone() const {
	TacticalMarine *tacticalMarine = new TacticalMarine(*this);
	return (tacticalMarine);
}
void TacticalMarine::battleCry() const
{
	std::cout << "For the holy PLOT!" << std::endl;
}

void TacticalMarine::rangedAttack() const
{
	std::cout<<"* attacks with a bolter *"<<std::endl;
}

void TacticalMarine::meleeAttack() const
{
	std::cout<<"* attacks with a chainsword *"<<std::endl;
}

TacticalMarine::~TacticalMarine()
{
	std::cout<<"Aaargh..."<<std::endl;
}