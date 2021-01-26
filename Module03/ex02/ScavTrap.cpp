#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string const &name) : ClapTrap(name)
{

	ClapTrap::EP = 50;
	ClapTrap::MaxEP = 50;
	ClapTrap::Level = 1;
	ClapTrap::MeleeAttackDamage = 20;
	ClapTrap::RangeAttackDamage = 15;
	ClapTrap::ArmorDamageReductions = 3;
	std::cout << COD_STY_ITL << COL_YEL
			  << "\nHA! I knew someone was alive in here."<< COL_RES <<
			  std::endl;
}

void ScavTrap::challengeNewcomer(const std::string &target)
{
	std::string challengePoll[5] = {
			"BAM! Secret panel! That I opened. While your back was turned.",
			"Jump! Actually, looking at it, that is quite a distance, isn't it?",
			"Yessss, look into my eyes. You're getting sleepy. You're getting... zzzzzz... Zzzzzz...",
			"There's more to learn!",
			"Stay a while, and listen. Oh god, please -- PLEASE! -- stay a while."
	};
	struct timeval tv;
	gettimeofday(&tv, NULL);
	int index;
	srand(tv.tv_usec);
	index = rand() %5;
	if (this->EP < 25)
		std::cout << COD_STY_BLD << COL_BLU
				  << "**NOT ENOUGH MANA**" << COL_RES << std::endl;
	else
	{
		std::cout << challengePoll[index] << " to " << target << std::endl;
		this->EP -= 25;
	}
}

ScavTrap::~ScavTrap()
{
	std::cout << "I'd say: \"I'm sorry\"... sincerely, I'm sorry I was bossy... "
			  "and monstrous... and... I am genuinely sorry." << std::endl;
}