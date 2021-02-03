#include "Sorcerer.hpp"

Sorcerer::Sorcerer() : name(), title()
{
	std::cout << this->name << ", " << this->title << ", is born!" << std::endl;
}

Sorcerer::Sorcerer(std::string const &name, std::string const &title) : name
(name), title(title)
{
	std::cout << this->name << ", " << this->title << "is born!" << std::endl;
}
Sorcerer::~Sorcerer()
{
	std::cout << this->name << ", " << this->title << ", is dead. Consequences will never be the same!" << std::endl;
}
Sorcerer::Sorcerer(Sorcerer const &sorcerer)
{
	this->name = sorcerer.name;
	this->title = sorcerer.title;
}

void Sorcerer::introduce()
{
	std::cout <<"I am, "<<this->name<<", "
	<<this->title<<", and I like ponies!"<<std::endl;
}

void Sorcerer::polymorph(const Victim &victim) const
{
	victim.getPolymorphed();
}

std::string Sorcerer::getName()
{
	return (this->name);
}

std::string Sorcerer::getTitle()
{
	return (this->title);
}

Sorcerer &Sorcerer::operator=(const Sorcerer &sorcerer)
{
	this->name = sorcerer.name;
	this->title = sorcerer.title;
	return (*this);
}
std::ostream &operator<<(std::ostream &out, Sorcerer &sorcerer)
{
	out <<"I am, "<<sorcerer.getName()<<", "
		<<sorcerer.getTitle()<<", and I like ponies!" << std::endl;
	return (out);
}