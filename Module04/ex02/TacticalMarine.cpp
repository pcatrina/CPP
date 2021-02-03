#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine():ISpaceMarine()
{
	std::cout << "Tactical Marine ready for battle!" << std::endl;
}

ISpaceMarine * TacticalMarine::clone() const {
	TacticalMarine *tacticalMarine = new ISpaceMarine();
	return (*this);
}
