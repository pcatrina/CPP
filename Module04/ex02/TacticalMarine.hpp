#ifndef MODULE04_TACTICALMARINE_HPP
#define MODULE04_TACTICALMARINE_HPP

#include <iostream>
#include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine{
	TacticalMarine();
	virtual ISpaceMarine* clone() const;
};


#endif
