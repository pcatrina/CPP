#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string const &name) : Name(name)
{
	this->HP = 100;
	this->MaxHP = 100;
	this->EP = 50;
	this->MaxEP = 50;
	this->Level = 1;
	this->MeleeAttackDamage = 20;
	this->RangeAttackDamage = 15;
	this->ArmorDamageReductions = 3;
	std::cout << COD_STY_ITL << COL_YEL
			  << "\nHA! I knew someone was alive in here."<< COL_RES <<
			  std::endl;
}

void ScavTrap::rangedAttack(const std::string &target)
{
	std::cout << "FR4G-TP " << this->Name << " attacks " << target << " at range, causing "
			  << this->RangeAttackDamage << " points of damage!" << std::endl;
}

void ScavTrap::meleeAttack(const std::string &target)
{
	std::cout << "FR4G-TP " << this->Name << " attacks " << target << " at melee, causing "
			  << this->MeleeAttackDamage << " points of damage!" << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount)
{
	(this->HP > amount) ? (this->HP = this->HP -(amount-this->ArmorDamageReductions)) : (this->HP = 0);
	std::cout << COD_STY_UND << COL_RED
			  << "FR4G-TP " << this->Name << " was attacked and received " <<
			  amount << " damage!" << " Now HP - " << this->HP << COL_RES << std::endl;
}

void ScavTrap::beRepaired(unsigned int amount)
{
	(this->MaxHP - this->HP > amount) ? (this->HP += amount) : (this->HP =this->MaxHP);
	std::cout << COD_STY_BLD << COL_GRE
			  << "FR4G-TP " << this->Name << " be repaired at " <<
			  amount << " points!"  << " Now HP - " << this->HP << COL_RES << std::endl;
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