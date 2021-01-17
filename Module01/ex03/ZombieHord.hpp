#ifndef MODULE01_ZOMBIEHORD_HPP
#define MODULE01_ZOMBIEHORD_HPP

#include <iostream>
#include <string>
#include <sys/time.h>
#include "Zombie.hpp"


class ZombieHord
{
public:
	ZombieHord(int size);
	void 	announce();
	~ZombieHord();

private:
	int i;
	Zombie *zombie;
};


#endif
