#ifndef MODULE04_ICE_HPP
#define MODULE04_ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
public:
	Ice();
	Ice(Ice &ice);
	Ice &operator=(Ice &ice);
	virtual ~Ice();

	virtual AMateria* clone() const;
	virtual void use(ICharacter& target);
};


#endif //MODULE04_ICE_HPP
