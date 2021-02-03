#include "Peon.hpp"

Peon::Peon() : Victim()
{
	std::cout << "Zog zog." << std::endl;
}

Peon::Peon(const std::string &name) : Victim(name)
{
	std::cout << "Zog zog." << std::endl;
}

void Peon::getPolymorphed() const
{
	std::cout<<this->Victim::getName() <<" has been turned into a pink "
									  "pony!"<<std::endl;
}

Peon::~Peon()
{
	std::cout << "Bleuark..." << std::endl;
}

std::ostream &operator<<(std::ostream &os, Peon &peon)
{
	os << "I'm "<<peon.::Victim::getName()<<" and I like otters!"<<std::endl;
	return (os);
}
