#ifndef MODULE04_PEON_HPP
#define MODULE04_PEON_HPP

#include <iostream>
#include "Victim.hpp"

class Peon : public Victim
{
public:
	Peon();
	Peon(const std::string &name);
	virtual void getPolymorphed() const;
	virtual ~Peon();
};

std::ostream &operator<<(std::ostream &os, Peon &peon);


#endif //MODULE04_PEON_HPP
