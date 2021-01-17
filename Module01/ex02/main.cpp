#include "Zombie.hpp"
#include "ZombieEvent.hpp"

#define Z_COUNT 5

void	сemeteryСheck()
{
	Zombie human[Z_COUNT];
	for (int i = 0; i < Z_COUNT; i++)
		human[i].setZombie("With one leg", "Man");
}

int main()
{
	ZombieEvent newZombie;
	Zombie *oneZombie[Z_COUNT];


	сemeteryСheck();
	std::cout << "\nRound 2\n" << std::endl;
	for (int i = 0; i < Z_COUNT; i++)
		oneZombie[i] = newZombie.randomChump();
	std::cout << "\nPlants rebelled against\n" << std::endl;
	for (int i = 0; i < Z_COUNT; i++)
		delete oneZombie[i];
	return (0);
}