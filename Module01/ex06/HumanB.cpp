#include "HumanB.hpp"

HumanB::HumanB(std::string const &name) : type(nullptr)
{
	this->name = name;
}

void HumanB::attack()
{
	std::cout << name << " attacks with his " << type->getType() <<
	std::endl;
}

void HumanB::setWeapon(Weapon &type)
{
	this->type = &type;
}