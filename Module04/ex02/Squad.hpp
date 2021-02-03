#ifndef MODULE04_SQUAD_HPP
#define MODULE04_SQUAD_HPP

#include <iostream>
#include "ISquad.hpp"

class Squad : public ISquad {
private:
	static int count;
	static ISpaceMarine *command[];
public:
	Squad();
	Squad(Squad &squad);
	Squad &operator=(const Squad &squad);
	virtual ~Squad();
	virtual int getCount() const;
	virtual ISpaceMarine *getUnit(int) const;
	virtual int push(ISpaceMarine*);
};


#endif //MODULE04_SQUAD_HPP
