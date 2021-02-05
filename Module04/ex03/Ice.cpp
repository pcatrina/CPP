#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
}

Ice::Ice(Ice &ice) : AMateria(ice)
{
}

Ice & Ice::operator=(Ice &ice)
{
	if (this == &ice)
		return (*this);
	*this = ice;
	return (*this);
}

Ice::~Ice()
{
}

AMateria * Ice::clone() const
{
	AMateria *aMateria = new Ice;
	return (aMateria);
}

void Ice::use(ICharacter &target)
{
	this->AMateria::use(target);
	std::cout<<COD_STY_BLD<<COL_RED
	<<"* shoots an ice bolt at "<<target.getName()<<" *"<<COL_RES<<std::endl;
}