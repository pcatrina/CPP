#include "SuperTrap.hpp"

SuperTrap::SuperTrap() : ClapTrap()
{
	std::cout << COD_STY_ITL << COL_YEL
			  << "\nThe hero appeared"<< COL_RES <<
			  std::endl;
}

SuperTrap::SuperTrap(std::string const &name) : ClapTrap(name), NinjaTrap
(name), FragTrap(name)
{
	ClapTrap::HP = FragTrap::HP;
	ClapTrap::MaxHP = FragTrap::MaxHP;
	ClapTrap::EP = NinjaTrap::EP;
	ClapTrap::MaxEP = NinjaTrap::MaxEP;
	ClapTrap::Level = 1;
	ClapTrap::MeleeAttackDamage = NinjaTrap::MeleeAttackDamage;
	ClapTrap::RangeAttackDamage = FragTrap::RangeAttackDamage;
	ClapTrap::ArmorDamageReductions = FragTrap::ArmorDamageReductions;
	std::cout << COD_STY_ITL << COL_YEL
			  << "\nThe hero appeared"<< COL_RES <<
			  std::endl;
}

SuperTrap::~SuperTrap()
{
	std::cout << "It's OVER" << std::endl;
}