#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
}

Cure::Cure(const Cure &cure) : AMateria(cure)
{
}

Cure & Cure::operator=(Cure &cure)
{
	if (this == &cure)
		return (*this);
	*this = cure;
	return (*this);
}

Cure::~Cure()
{
}

AMateria * Cure::clone() const
{
	AMateria *aMateria = new Cure;
	return (aMateria);
}

void Cure::use(ICharacter &target)
{
	this->AMateria::use(target);
	std::cout<<COD_STY_BLD<<COL_RED
			 <<"* heals "<<target.getName()<<" wounds *"<<COL_RES<<std::endl;
}