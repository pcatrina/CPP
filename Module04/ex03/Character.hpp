#ifndef MODULE04_CHARACTER_HPP
#define MODULE04_CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter
{
private:
	std::string name;
	int			idx;
	AMateria 	*pool[4];
public:
	Character(std::string const &name);
	Character(Character const &character);
	Character &operator=(Character const &character);
	virtual ~Character();

	virtual const std::string &getName() const;
	virtual void equip(AMateria* m);
	virtual void unequip(int idx);
	virtual void use(int idx, ICharacter& target);
};


#endif //MODULE04_CHARACTER_HPP
