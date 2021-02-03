#include "Victim.hpp"

Victim::Victim() : name()
{
	std::cout << "Some random victim called "
			  << this->name << " just appeared!" << std::endl;
}

Victim::Victim(std::string const &name) : name(name)
{
	std::cout << "Some random victim called "
				<< this->name << " just appeared!" << std::endl;
}

Victim &Victim::operator=(const Victim &victim)
{
	this->name = victim.name;
	return (*this);
}

void Victim::introduce()
{
	std::cout<<"I'm "<<this->name<<" and I like otters!"<<std::endl;
}

std::string Victim::getName() const
{
	return (this->name);
}

void Victim::getPolymorphed() const
{
	std::cout<<this->name<<" has been turned into a cute little "
						"sheep!"<<std::endl;
}

Victim::~Victim()
{
	std::cout << "Victim "<<this->name<<" just died for no apparent "
									 "reason!"<<std::endl;
}

std::ostream &operator<<(std::ostream &out, Victim &victim)
{
	out <<"I'm "<<victim.getName()<<" and I like otters!"<<std::endl;
	return (out);
}