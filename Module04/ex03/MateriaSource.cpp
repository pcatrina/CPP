#include "MateriaSource.hpp"

MateriaSource::MateriaSource() :  pool(), idx(0)
{
	for(int i = 0; i < 4; this->pool[i++] = nullptr);
}

MateriaSource::MateriaSource(const MateriaSource &materiaSource) : pool(),  idx
(materiaSource.idx)
{
	for (int i = 0; i < 4; i++)
		this->pool[i] = materiaSource.pool[i];
}

MateriaSource & MateriaSource::operator=(const MateriaSource &materiaSource)
{
	if (this == &materiaSource)
		return (*this);
	*this = materiaSource;
	return (*this);
}

MateriaSource::~MateriaSource()
{
	int i = -1;
	while(i++ < 3)
	{
		if (this->pool[i] != nullptr)
			delete this->pool[i];
	}
}

void MateriaSource::learnMateria(AMateria *m)
{
	if (m)
	{
		int i = -1;
		while (i++ < 4)
		{
			if (this->pool[i] == nullptr)
			{
				this->pool[i] = m;
				this->idx = i;
				break;
			}
		}
	}
}

AMateria * MateriaSource::createMateria(const std::string &type)
{
	int i = -1;
	while (i++ < this->idx)
	{
		if (this->pool[i]->getType() == type)
		{
			AMateria *aMateria = this->pool[i]->clone();
			return (aMateria);
		}
	}
	return (nullptr);
}
