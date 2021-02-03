#include "Character.hpp"

Character::Character(const std::string &name) : name(name),weapon(nullptr), AP(40)
{
}

Character::Character(const Character &character) : name(character.name),
weapon(character.weapon), AP(character.AP)
{
}

Character & Character::operator=(const Character &character)
{
	this->name = character.name;
	this->weapon = character.weapon;
	this->AP = character.AP;
	return (*this);
}

Character::~Character()
{
}

void Character::recoverAP()
{
	if (this->AP + 10 <= 40)
		this->AP += 10;
	else
		this->AP = 40;
}

void Character::equip(AWeapon *weapon)
{
	this->weapon = weapon;
}

void Character::attack(Enemy *enemy)
{
	if (this->weapon != nullptr)
	{
		std::cout<<"\U0001F4A5\t"<<COL_CYN<< name << " attacks " << enemy->getType()
		<< " with a "<< this->weapon->getName()<<COL_RES<< std::endl;
		if (this->AP >= this->weapon->getApcost())
		{
			this->AP -= this->weapon->getApcost();
			enemy->takeDamage(this->weapon->getDamage());
			this->weapon->attack();
			if (enemy->getHp() == 0)
				delete enemy;
		}
	}
}

const std::string Character::getName() const
{
	return (this->name);
}

AWeapon *Character::getWeapon() const
{
	return weapon;
}

int Character::getAp() const
{
	return AP;
}

std::ostream  &operator<<(std::ostream &os, Character &character)
{
	if (character.getWeapon() != nullptr)
	{
		os<<"\U0001F60E\t"<<COD_STY_UND<<COL_BLU<< character.getName() << " has " <<
		character.getAp()<<" AP and wields a "<< character.getWeapon()->getName()<<COL_RES<<std::endl;
	}
	else
		os<<"\U0001F615\t" <<COD_STY_UND<<COL_BLU<< character.getName()<<
		" has "<<character.getAp()<<" AP and is unarmed" <<COL_RES<< std::endl;
	return (os);
}