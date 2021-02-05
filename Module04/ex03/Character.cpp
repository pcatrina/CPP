#include "Character.hpp"

 Character::Character(const std::string &name) : name(name), idx(0), pool()
 {
	for(int i = 0; i < 4; this->pool[i++] = nullptr);
 }

 Character::Character(const Character &character) : name(character.name), idx
 (character.idx), pool()
 {
	for (int i = 0; i < 4; i++)
		this->pool[i] = character.pool[i];
 }

 Character & Character::operator=(const Character &character)
 {
	if (this == &character)
		return (*this);
	*this = character;
	 return (*this);
 }

 Character::~Character()
 {
 }

const std::string &Character::getName() const
{
	return (name);
}

void Character::equip(AMateria* m)
{
	if (m)
	{
		for (int i = 0; this->pool[i++] != nullptr; this->idx++);
		if (this->pool[this->idx] == nullptr)
			this->pool[this->idx] = m;
	}
}

void Character::unequip(int idx)
{
	if (this->pool[idx])
	{
		this->pool[idx] = nullptr;
 	}
}

void Character::use(int idx, ICharacter &target)
{
	if (this->pool[idx] && &target != this)
	{
		this->pool[idx]->use(target);
	}
}