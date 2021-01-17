#include "Zombie.hpp"

Zombie::Zombie()
{
}

Zombie::Zombie(std::string const &type, std::string const &name)
{
	setZombie(type, name);
}

void Zombie::setZombie(std::string const &type, std::string const &name)
{
	this->type = type;
	this->name = name;
}

void Zombie::announce()
{
	std::cout << "<" << this->name << " (" << this->type
	<< ")> Braiiiiiiinnnssss..." << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "<" << this->name << "(" << this->type << ")> is DEEEEAAAADDDDDD"
	<< std::endl;
}