#include "Weapon.hpp"

Weapon::Weapon()
{
	this->type = "";
}

Weapon::Weapon(std::string const &type)
{
	 this->type = type;
}

void Weapon::setType(std::string const &name)
{
	this->type = name;
}

std::string Weapon::getType()
{
	return this->type;
}