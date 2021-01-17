#include "Zombie.hpp"
#include "ZombieHord.hpp"

int main()
{
	int i;

	std::cout << "Which size you HORD" << std::endl;
	while (!(std::cin >> i))
	{
		if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore(32767, '\n');
			std::cout << "Wrong input , Try once more ..." << std::endl;
		}
	}
	ZombieHord hord(i);
	hord.announce();
	return (0);
}