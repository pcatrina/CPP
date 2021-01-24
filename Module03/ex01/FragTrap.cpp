#include "FragTrap.hpp"

FragTrap::FragTrap(std::string const &name) : Name(name)
{
	this->HP = 100;
	this->MaxHP = 100;
	this->EP = 100;
	this->MaxEP = 100;
	this->Level = 1;
	this->MeleeAttackDamage = 30;
	this->RangeAttackDamage = 20;
	this->ArmorDamageReductions = 5;
	std::cout << COD_STY_ITL << COL_YEL
	<< "\nDirective one: Protect humanity! Directive two: Obey Jack "
	"at all costs. Directive three: Dance!"<< COL_RES << std::endl;
}

void FragTrap::rangedAttack(const std::string &target)
{
	std::cout << "FR4G-TP " << this->Name << " attacks " << target << " at range, causing "
	<< this->RangeAttackDamage << " points of damage!" << std::endl;
}

void FragTrap::meleeAttack(const std::string &target)
{
	std::cout << "FR4G-TP " << this->Name << " attacks " << target << " at melee, causing "
	<< this->MeleeAttackDamage << " points of damage!" << std::endl;
}

void FragTrap::takeDamage(unsigned int amount)
{
	(this->HP > amount) ? (this->HP = this->HP -(amount-this->ArmorDamageReductions)) : (this->HP = 0);
	std::cout << COD_STY_UND << COL_RED
	<< "FR4G-TP " << this->Name << " was attacked and received " <<
	amount << " damage!" << " Now HP - " << this->HP << COL_RES << std::endl;
}

void FragTrap::beRepaired(unsigned int amount)
{
	(this->MaxHP - this->HP > amount) ? (this->HP += amount) : (this->HP =this->MaxHP);
	std::cout << COD_STY_BLD << COL_GRE
	<< "FR4G-TP " << this->Name << " be repaired at " <<
	amount << " points!"  << " Now HP - " << this->HP << COL_RES << std::endl;
}

void FragTrap::vaulthunter_dot_exe(const std::string &target)
{
	std::string attack[5] = {
			"Piu", "Shoot", "Skidshhhhh", "one body more", "Chumba"
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
		std::cout << attack[index] << " to " << target << std::endl;
		this->EP -= 25;
	}
}

FragTrap::~FragTrap()
{
	std::cout << "I'M DEAD I'M DEAD OHMYGOD I'M DEAD!" << std::endl;
}