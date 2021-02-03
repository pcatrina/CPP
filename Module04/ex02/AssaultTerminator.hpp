#ifndef MODULE04_ASSAULTTERMINATOR_HPP
#define MODULE04_ASSAULTTERMINATOR_HPP

#include <iostream>
#include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine {
public:
	AssaultTerminator();
	virtual ISpaceMarine* clone() const;
	virtual void battleCry() const;
	virtual void rangedAttack() const;
	virtual void meleeAttack() const;
	virtual ~AssaultTerminator();
};


#endif //MODULE04_ASSAULTTERMINATOR_HPP
