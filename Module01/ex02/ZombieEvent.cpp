#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent()
{
	this->type = "";
}

void ZombieEvent::setZombieType(std::string const &type)
{
	this->type = type;
}

Zombie *ZombieEvent::newZombie(std::string const &name)
{
	return (new Zombie(this->type, name));
}

Zombie *ZombieEvent::randomChump()
{
	Zombie			*dead;
	int				i, j;
	struct timeval	tv;
	std::string const nameBuff[10] = {
			"Anton", "Ruslan", "Phil", "Bob", "Ivan",
			"Dean", "Edward", "Shrek", "Denis", "Pen"
	};
	std::string const typeBuff[10] = {
			"Dead", "Happy", "Passive", "Active", "Angry", "Sad", "DeadInside",
			"Plants", "No Title", "Man"
	};
	gettimeofday(&tv, NULL);
	srand(tv.tv_usec);
	i = rand() % 9 + 1;
	j = rand() % 9 + 1;

	dead = new Zombie(typeBuff[i], nameBuff[j]);
	dead->announce();
	return (dead);
}

ZombieEvent::~ZombieEvent()
{
}