#ifndef MODULE01_ZOMBIEEVENT_HPP
#define MODULE01_ZOMBIEEVENT_HPP

#include <iostream>
#include <sys/time.h>
#include "Zombie.hpp"

class ZombieEvent
{
public:
	ZombieEvent();
	void		setZombieType(std::string const &type);
	Zombie		*newZombie(std::string const &name);
	Zombie 		*randomChump();
	~ZombieEvent();

private:
	std::string type;
};


#endif
