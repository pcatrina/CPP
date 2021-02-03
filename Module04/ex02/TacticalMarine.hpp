#ifndef MODULE04_TACTICALMARINE_HPP
#define MODULE04_TACTICALMARINE_HPP

#include <iostream>
#include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine {
public:
	TacticalMarine();
	TacticalMarine(TacticalMarine&tacticalMarine);
	TacticalMarine &operator=(const TacticalMarine &tacticalMarine);
	virtual ISpaceMarine* clone() const;
	virtual void battleCry() const;
	virtual void rangedAttack() const;
	virtual void meleeAttack() const;
	virtual ~TacticalMarine();
};


#endif
