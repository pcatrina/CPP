#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap() : ClapTrap()
{
	std::cout << COD_STY_ITL << COL_YEL
			  << "\nTo be hokage that is my dream"<< COL_RES <<
			  std::endl;
}

NinjaTrap::NinjaTrap(const std::string &name) : ClapTrap(name)
{
	ClapTrap::HP = 60;
	ClapTrap::MaxHP = 60;
	ClapTrap::EP = 120;
	ClapTrap::MaxEP = 120;
	ClapTrap::Level = 1;
	ClapTrap::MeleeAttackDamage = 60;
	ClapTrap::RangeAttackDamage = 5;
	ClapTrap::ArmorDamageReductions = 0;
	std::cout << COD_STY_ITL << COL_YEL
			  << "\nTo be hokage that is my dream"<< COL_RES <<
			  std::endl;
}

void NinjaTrap::ninjaShoebox(FragTrap &frag)
{
	std::cout << COD_STY_ITL << COL_RED << "Threw the first aid kit"
	<<COL_RES << std::endl;
	frag.beRepaired(30);
}

void NinjaTrap::ninjaShoebox(ScavTrap &scav)
{
	if(rand() %100 > 50)
	{
		std::cout << COD_STY_ITL << COL_RED << "Threw a kunai and dealt 30 "
										 "damage" << COL_RES << std::endl;
		scav.takeDamage(30);
	}
	else
		std::cout << COD_STY_ITL << COL_GRE << "Threw a kunai and miss" <<
		COL_RES<< std::endl;
}

void NinjaTrap::ninjaShoebox(NinjaTrap &frag)
{
	std::cout << COD_STY_ITL << COL_RED << "Shadow cloning technique" << COL_RES << std::endl;
	NinjaTrap *ninja = new NinjaTrap("Shadow");
		ninja->meleeAttack("Nagato");
	delete ninja;
}

void NinjaTrap::rangedAttack(const std::string &target)
{
	std::cout << "FR4G-TP " << this->Name << " attacks " << target << " at "
																	  "range, causing "
			  << this->RangeAttackDamage << " points of damage!" << std::endl;
}

void NinjaTrap::meleeAttack(const std::string &target)
{
	std::cout << "FR4G-TP " << this->Name << " attacks " << target << " at melee, causing "
			  << this->MeleeAttackDamage << " points of damage!" << std::endl;
}

NinjaTrap::~NinjaTrap()
{
	std::cout << "Sasuke came back to the leaf village" << std::endl;
}