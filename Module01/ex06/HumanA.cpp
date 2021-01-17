#include "HumanA.hpp"

HumanA::HumanA(std::string const &name, Weapon &type) : type(type)
{
	this->name = name;
}

void HumanA::attack()
{
	std::cout << name << " attacks with his " << type.getType() << std::endl;
}