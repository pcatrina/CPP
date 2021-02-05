#ifndef MODULE04_AMATERIA_HPP
#define MODULE04_AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

#define COD_STY_ITL "\x1B[3m"
#define COD_STY_BLD "\x1B[1m"
#define COD_STY_UND "\x1B[4m"

#define COL_RED "\x1b[31m"
#define COL_GRE "\x1b[32m"
#define COL_YEL "\x1b[33m"
#define COL_BLU "\x1b[34m"
#define COL_MAG "\x1b[34m"
#define COL_CYN "\x1b[36m"

#define COL_RES	"\x1b[0m"

class ICharacter;

class AMateria
{
private:
	std::string		type;
	unsigned int	_xp;
public:
	AMateria(std::string const & type);
	AMateria(AMateria const &aMateria);
	AMateria &operator=(AMateria const &aMateria);
	virtual ~AMateria();

	std::string const & getType() const;
	unsigned int getXp() const;

	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};


#endif
