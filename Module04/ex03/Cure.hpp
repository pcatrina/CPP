#ifndef MODULE04_CURE_HPP
#define MODULE04_CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
public:
	Cure();
	Cure(Cure const &cure);
	Cure &operator=(Cure &cure);
	virtual ~Cure();

	virtual AMateria* clone() const;
	virtual void use(ICharacter& target);

};


#endif //MODULE04_CURE_HPP
