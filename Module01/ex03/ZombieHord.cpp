#include "ZombieHord.hpp"

ZombieHord::ZombieHord(int size)
{
	if (size > 0)
	{
		this->zombie = new Zombie[size];
		this->i = size;
		for (int x = 0; x < size; x++)
		{
			int				name, type;
			struct timeval	tv;
			std::string const nameBuff[10] = {
					"Anton", "Ruslan", "Phil", "Bob", "Ivan",
					"Dean", "Edward", "Shrek", "Denis", "Pen"
			};
			std::string const typeBuff[10] = {
					"Dead", "Happy", "Passive", "Active", "Angry", "Sad", "DeadInside",
					"Plants", "No Title", "Man"
			};
			gettimeofday(&tv, nullptr);
			srand(tv.tv_usec);
			type = rand() % 9 + 1;
			name = rand() % 9 + 1;

			this->zombie[x].setZombie(typeBuff[type], nameBuff[name]);
		}
	}
	else
		std::cout << "Less than zero? Are you serious ..." << std::endl;
}

void ZombieHord::announce()
{
	for (int j = 0; j < this->i; j++)
		this->zombie[j].announce();
}

ZombieHord::~ZombieHord()
{
	std::cout << "\nThey are DEAD!" << std::endl;
	delete[] zombie;
}