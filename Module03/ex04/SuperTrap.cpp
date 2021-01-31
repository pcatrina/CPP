#include "SuperTrap.hpp"

SuperTrap::SuperTrap() : ClapTrap()
{
	std::cout << COD_STY_ITL << COL_YEL
			  << "\nThe hero appeared"<< COL_RES <<
			  std::endl;
}

SuperTrap::SuperTrap(std::string const &name) : ClapTrap(name), NinjaTrap
(), FragTrap()
{
	this->HP = 100;
	this->MaxHP = 100;
	this->EP = 120;
	this->MaxEP = 120;
	this->Level = 1;
	this->MeleeAttackDamage = 60;
	this->RangeAttackDamage = 20;
	this->ArmorDamageReductions = 5;
	std::cout << COD_STY_ITL << COL_YEL
			  << "\nThe hero appeared"<< COL_RES <<
			  std::endl;
}

void SuperTrap::rangedAttack(const std::string &target)
{
	std::cout << "FR4G-TP " << this->Name << " attacks " << target << " at "
																	  "range, causing "
			  << this->RangeAttackDamage << " points of damage!" << std::endl;
}

void SuperTrap::meleeAttack(const std::string &target)
{
	std::cout << "FR4G-TP " << this->Name << " attacks " << target << " at melee, causing "
			  << this->MeleeAttackDamage << " points of damage!" << std::endl;
}

SuperTrap::~SuperTrap()
{
	std::cout << "It's OVER" << std::endl;
}