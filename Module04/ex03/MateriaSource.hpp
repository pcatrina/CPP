#ifndef MODULE04_MATERIASOURCE_HPP
#define MODULE04_MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:
	AMateria	*pool[4];
	int			idx;
public:
	MateriaSource();
	MateriaSource(MateriaSource const &materiaSource);
	MateriaSource &operator=(MateriaSource const &materiaSource);
	virtual ~MateriaSource();

	virtual void learnMateria(AMateria*);
	virtual AMateria* createMateria(std::string const & type);
};


#endif //MODULE04_MATERIASOURCE_HPP
