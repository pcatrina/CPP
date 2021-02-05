#include "AMateria.hpp"

AMateria::AMateria(const std::string &type) : type(type), _xp(0)
{
}

AMateria::AMateria(const AMateria &aMateria) : type(aMateria.type), _xp
(aMateria._xp)
{
}

AMateria & AMateria::operator=(const AMateria &aMateria)
{
	if (this == &aMateria)
		return (*this);
	*this = aMateria;
	return (*this);
}

AMateria::~AMateria()
{
}

const std::string & AMateria::getType() const
{
	return (this->type);
}

unsigned int AMateria::getXp() const
{
	return _xp;
}

void AMateria::use(ICharacter &target)
{
	this->_xp += 10;
	std::cout<< COD_STY_ITL<<COL_GRE<< "After applying this element, "
	<<COL_BLU<<target.getName()<<COL_GRE<<" experience became - "
	<<COL_RES<<this->_xp<<std::endl;
}
